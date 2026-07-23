/*
 * XREFs of NtQueryOpenSubKeys @ 0x140863D70
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x140659498 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  __int64 v5; // rdx
  BOOLEAN v6; // r14
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  PADAPTER_OBJECT v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  ULONG v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1A0h] BYREF
  int v19; // [rsp+50h] [rbp-198h]
  _OWORD v20[3]; // [rsp+58h] [rbp-190h] BYREF
  _OWORD v21[19]; // [rsp+90h] [rbp-158h] BYREF

  v19 = 0;
  memset(v20, 0, sizeof(v20));
  DmaAdapter = 0LL;
  memset(v21, 0, 0x128uLL);
  LODWORD(v21[6]) = -1;
  *((_QWORD *)&v21[9] + 1) = &v21[9];
  *(_QWORD *)&v21[9] = &v21[9];
  memset((char *)&v21[13] + 8, 0, 0x50uLL);
  v4 = 0;
  v6 = CmpAcquireShutdownRundown();
  if ( v6 )
  {
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    if ( (_BYTE)v5 == 1 )
    {
      v8 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    v7 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           v5,
           131097,
           (__int64)CmKeyObjectType,
           v5,
           (__int64)v21,
           &DmaAdapter);
    if ( v7 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v9 = DmaAdapter;
      v7 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
      if ( v7 >= 0 )
      {
        if ( ((__int64)v9->DmaOperations->MapTransferEx & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((__int64)v20, v10, v11, v12);
          v13 = CmpSearchForOpenSubKeys((__int64)v9->DmaOperations, 0, 0LL);
          CmpDetachFromRegistryProcess((__int64)v20, v14, v15, v16);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v13;
          v7 = 0;
        }
        else
        {
          v7 = -1073741811;
        }
      }
    }
  }
  else
  {
    v7 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v21, 0);
  if ( v6 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v7;
}
