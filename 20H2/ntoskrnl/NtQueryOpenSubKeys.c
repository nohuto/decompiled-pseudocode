/*
 * XREFs of NtQueryOpenSubKeys @ 0x14086AAB0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpSearchForOpenSubKeys @ 0x1406A2128 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  BOOLEAN v5; // r14
  NTSTATUS v6; // ebx
  char PreviousMode; // dl
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
  v5 = CmpAcquireShutdownRundown();
  if ( v5 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v8 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    v6 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           0LL,
           0x20019u,
           (__int64)CmKeyObjectType,
           PreviousMode,
           (__int64)v15,
           &DmaAdapter);
    if ( v6 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v9 = DmaAdapter;
      v6 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
      if ( v6 >= 0 )
      {
        if ( ((__int64)v9->DmaOperations->MapTransferEx & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((__int64)v14);
          v10 = CmpSearchForOpenSubKeys((__int64)v9->DmaOperations, 0, 0LL);
          CmpDetachFromRegistryProcess((__int64)v14);
          CmpUnlockRegistry();
          v4 = 0;
          *HandleCount = v10;
          v6 = 0;
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
  }
  else
  {
    v6 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v15, 0);
  if ( v5 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v6;
}
