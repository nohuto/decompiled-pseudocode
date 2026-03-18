/*
 * XREFs of CmpAssignKeySecurity @ 0x14085BE8C
 * Callers:
 *     CmpSecurityMethod @ 0x140721010 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x14067E974 (CmpLockKcbStackExclusive.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406BBA30 (ObAssignObjectSecurityDescriptor.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpAssignSecurityToKcb @ 0x14071B640 (CmpAssignSecurityToKcb.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, void *a2)
{
  char v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // di
  int started; // ebx
  ULONG_PTR v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  PPRIVILEGE_SET v17; // rcx
  __int64 KeyNodeForKcb; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+48h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+C0h] [rbp+50h]
  __int64 v23; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0LL;
  v3 = 0;
  HvpGetCellContextReinitialize(&v23);
  v20 = 0LL;
  WORD1(v20) = -1;
  *(_OWORD *)Privileges = 0LL;
  v22 = CmpAcquireShutdownRundown(v6, v5, v7);
  v12 = v22;
  if ( v22 )
  {
    CmpLockRegistry(v9, v8, v10);
    v14 = *(_QWORD *)(a1 + 8);
    v3 = 1;
    v15 = *(_QWORD *)(v14 + 32);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v20, v14);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive((__int64)&v20);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        ExAcquirePushLockSharedEx(v15 + 72, 0LL);
        ExAcquirePushLockExclusiveEx(v15 + 1784, 0LL);
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v14, (__int64)&v23, 1);
        ObAssignObjectSecurityDescriptor(a1, 0LL);
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v15 + 4112) & 0x20) != 0 && *(_DWORD *)(v15 + 1872) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v15 + 1888) + 8LL) + 32LL);
        started = CmpGetSecurityDescriptorNodeEx(
                    *(_QWORD *)(v14 + 32),
                    *(_DWORD *)(v14 + 40),
                    KeyNodeForKcb,
                    *(_DWORD *)(v14 + 40) >> 31,
                    a2,
                    0,
                    (unsigned int *)(KeyNodeForKcb + 44));
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v14, *(unsigned int *)(KeyNodeForKcb + 44), 0LL, 1, 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
        {
          v16 = *(_QWORD *)(v14 + 32);
          if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v16, &v23);
          else
            HvpReleaseCellPaged(v16, (unsigned int *)&v23);
        }
        CmUnlockHiveSecurity(v15);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
        KeAbPostRelease(v15 + 72);
      }
      CmpUnlockKcbStack((__int64)&v20);
    }
    v12 = v22;
  }
  else
  {
    started = -1073741431;
  }
  v17 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v3 )
    CmpUnlockRegistry(v17, v8, v10, v11);
  if ( v12 )
    CmpReleaseShutdownRundown(v17, v8, v10);
  return (unsigned int)started;
}
