/*
 * XREFs of NtQueryOpenSubKeys @ 0x140865090
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpSearchForOpenSubKeys @ 0x14064FE48 (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  __int64 v5; // rdx
  BOOLEAN v6; // r14
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  PADAPTER_OBJECT v9; // rdi
  ULONG v10; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1A0h] BYREF
  int v13; // [rsp+50h] [rbp-198h]
  _OWORD v14[3]; // [rsp+58h] [rbp-190h] BYREF
  _OWORD v15[19]; // [rsp+90h] [rbp-158h] BYREF

  v13 = 0;
  memset(v14, 0, sizeof(v14));
  DmaAdapter = 0LL;
  memset(v15, 0, 0x128uLL);
  LODWORD(v15[6]) = -1;
  *((_QWORD *)&v15[9] + 1) = &v15[9];
  *(_QWORD *)&v15[9] = &v15[9];
  memset((char *)&v15[13] + 8, 0, 0x50uLL);
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
           0x20019u,
           (__int64)CmKeyObjectType,
           v5,
           (__int64)v15,
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
          CmpAttachToRegistryProcess((__int64)v14);
          v10 = CmpSearchForOpenSubKeys((__int64)v9->DmaOperations, 0, 0LL);
          CmpDetachFromRegistryProcess((__int64)v14);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v10;
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
  CmpCleanupParseContext((__int64)v15, 0);
  if ( v6 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v7;
}
