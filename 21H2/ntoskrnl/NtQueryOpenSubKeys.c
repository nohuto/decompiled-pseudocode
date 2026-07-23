/*
 * XREFs of NtQueryOpenSubKeys @ 0x140868830
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpSearchForOpenSubKeys @ 0x1405DF4D8 (CmpSearchForOpenSubKeys.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
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
           131097,
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
