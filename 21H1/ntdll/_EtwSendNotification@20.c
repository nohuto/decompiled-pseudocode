/*
 * XREFs of _EtwSendNotification@20 @ 0x4B382440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpReceiveReplyDataBlock@36 @ 0x4B382527 (_EtwpReceiveReplyDataBlock@36.c)
 */

ULONG __stdcall EtwSendNotification(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char v5; // bl
  ULONG v6; // edi
  NTSTATUS v7; // eax
  void *v8; // ebx
  ULONG v9; // eax
  _BYTE v11[4]; // [esp+1Ch] [ebp-84h] BYREF
  _BYTE v12[124]; // [esp+20h] [ebp-80h] BYREF

  v5 = *((_BYTE *)a1 + 12);
  v6 = 0;
  if ( v5 == 1 )
  {
    a1[6] = 0;
    a1[7] = 0;
  }
  v7 = ZwTraceControl(17, (int)a1, a1[1], (int)a1, 72, (int)v11);
  if ( v7 )
    v6 = RtlNtStatusToDosError(v7);
  if ( v5 && !v6 )
  {
    v8 = (void *)a1[6];
    if ( a1[5] )
    {
      if ( *a1 == 3 )
        v9 = EtwpReceiveReplyDataBlock(*a1 == 3, a1[5], v12, 120, a4, a5, *a1);
      else
        v9 = EtwpReceiveReplyDataBlock(*a1 == 3, a1[5], a3, a2, a4, a5, *a1);
      v6 = v9;
    }
    if ( v8 )
      NtClose(v8);
  }
  return v6;
}
