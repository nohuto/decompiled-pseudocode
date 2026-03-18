/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x1405CEF78
 * Callers:
 *     SmSetStoreInformation @ 0x1405CF0A4 (SmSetStoreInformation.c)
 * Callees:
 *     SmRereferenceProcessObject @ 0x1402029F8 (SmRereferenceProcessObject.c)
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r9
  int v4; // edi
  NTSTATUS v5; // ebx
  __int64 v7; // rax
  PADAPTER_OBJECT DmaAdapter; // [rsp+20h] [rbp-68h] BYREF
  int v9; // [rsp+28h] [rbp-60h]
  PADAPTER_OBJECT v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  _OWORD v12[3]; // [rsp+48h] [rbp-40h] BYREF

  v3 = (_DWORD *)a1;
  memset(v12, 0, sizeof(v12));
  v10 = 0LL;
  DmaAdapter = 0LL;
  v4 = 0;
  v9 = 0;
  v11 = 0LL;
  if ( (_DWORD)a2 == 16 )
  {
    if ( (_BYTE)a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
    }
    v11 = *(_OWORD *)v3;
    if ( (_BYTE)v11 == 1 )
    {
      if ( (v11 & 0xFFFFFC00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v11 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v11 + 1), a2, a3, &DmaAdapter);
        if ( v5 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&DmaAdapter[135].DmaOperations + 1, 0x40000u);
          if ( (v11 & 0x200) != 0 )
          {
            if ( (PADAPTER_OBJECT)KeGetCurrentThread()->ApcState.Process != DmaAdapter )
            {
              v4 = 1;
              KiStackAttachProcess((_KPROCESS *)DmaAdapter, 0LL, (__int64)v12, v3);
            }
            v10 = DmaAdapter;
            v7 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &v10, 0, 0);
            if ( v7 )
              *(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v7 + 16) & 0x3FF) + 6023LL) = 1;
            else
              v5 = -1073741632;
          }
          else
          {
            v5 = 0;
          }
        }
      }
      else
      {
        v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741735;
    }
  }
  else
  {
    v5 = -1073741306;
  }
  if ( v4 )
    KiUnstackDetachProcess((__int64)v12, 0LL, a3, v3);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)v5;
}
