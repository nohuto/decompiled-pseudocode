/*
 * XREFs of FreeProcessHidTable @ 0x1C0127BC8
 * Callers:
 *     DestroyProcessHidRequests @ 0x1C0127BB0 (DestroyProcessHidRequests.c)
 * Callees:
 *     FreeHidProcessRequest @ 0x1C00F7DE4 (FreeHidProcessRequest.c)
 */

void __fastcall FreeProcessHidTable(__int64 a1)
{
  __int64 *v1; // rbx
  struct tagPROCESS_HID_REQUEST **v2; // rdi
  BOOL v3; // esi
  struct tagPROCESS_HID_REQUEST **i; // rdi
  struct tagPROCESS_HID_REQUEST **j; // rdi
  __int64 *v6; // rax
  __int64 **v7; // rcx

  v1 = *(__int64 **)(a1 + 832);
  *(_QWORD *)(a1 + 832) = 0LL;
  v2 = (struct tagPROCESS_HID_REQUEST **)(v1 + 2);
  v3 = *v2 != (struct tagPROCESS_HID_REQUEST *)v2
    || (__int64 *)v1[4] != v1 + 4
    || (__int64 *)v1[6] != v1 + 6
    || (*(_DWORD *)(a1 + 820) & 0x8000000) != 0;
  HMAssignmentUnlock(v1 + 9);
  HMAssignmentUnlock(v1 + 8);
  while ( *v2 != (struct tagPROCESS_HID_REQUEST *)v2 )
    FreeHidProcessRequest(*v2, 1, (struct tagPROCESS_HID_TABLE *)v1);
  for ( i = (struct tagPROCESS_HID_REQUEST **)(v1 + 4);
        *i != (struct tagPROCESS_HID_REQUEST *)i;
        FreeHidProcessRequest(*i, 2, (struct tagPROCESS_HID_TABLE *)v1) )
  {
    ;
  }
  for ( j = (struct tagPROCESS_HID_REQUEST **)(v1 + 6);
        *j != (struct tagPROCESS_HID_REQUEST *)j;
        FreeHidProcessRequest(*j, 3, (struct tagPROCESS_HID_TABLE *)v1) )
  {
    ;
  }
  v6 = (__int64 *)*v1;
  if ( *(__int64 **)(*v1 + 8) != v1 || (v7 = (__int64 **)v1[1], *v7 != v1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  Win32FreePool(v1);
  --gnHidProcess;
  if ( v3 )
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
}
