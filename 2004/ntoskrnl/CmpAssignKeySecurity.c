/*
 * XREFs of CmpAssignKeySecurity @ 0x1407BD900
 * Callers:
 *     CmpSecurityMethod @ 0x1405E47D0 (CmpSecurityMethod.c)
 * Callees:
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpGetKeyNodeForKcb @ 0x140644540 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x140644680 (CmpLockKcbStackExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     CmLockHiveSecurityExclusive @ 0x14069CD28 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x14069CD48 (CmUnlockHiveSecurity.c)
 *     CmpAssignSecurityToKcb @ 0x14069CEF4 (CmpAssignSecurityToKcb.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406EE120 (ObAssignObjectSecurityDescriptor.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408607E8 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x14086E388 (CmpAssignSecurityDescriptor.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, int a2)
{
  char v4; // r15
  BOOLEAN v5; // di
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  int started; // ebx
  __int64 KeyNodeForKcb; // r12
  _OWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  BOOLEAN v14; // [rsp+A0h] [rbp+50h]
  __int64 v15; // [rsp+A8h] [rbp+58h] BYREF

  v15 = 0xFFFFFFFFLL;
  memset(v13, 0, sizeof(v13));
  WORD1(v13[0]) = -1;
  v4 = 0;
  v14 = CmpAcquireShutdownRundown();
  v5 = v14;
  if ( v14 )
  {
    CmpLockRegistry();
    v6 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v7 = *(_QWORD *)(v6 + 32);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v13, v6, v8, v9);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive((__int64)v13);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        HvLockHiveFlusherShared(v7);
        CmLockHiveSecurityExclusive(v7);
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, (__int64)&v15, 1);
        ObAssignObjectSecurityDescriptor(a1, 0LL);
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v7 + 4152) & 0x20) != 0 && *(_DWORD *)(v7 + 1864) )
          a2 = *(_QWORD *)(*(_QWORD *)(v7 + 1880) + 8LL) + 32;
        started = CmpAssignSecurityDescriptor(*(_QWORD *)(v6 + 32), *(_DWORD *)(v6 + 40), KeyNodeForKcb, a2, 0);
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v6, *(unsigned int *)(KeyNodeForKcb + 44), 0LL, 1, 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
          CmpReleaseKeyNodeForKcb(v6, &v15);
        CmUnlockHiveSecurity(v7);
        HvUnlockHiveFlusherShared(v7);
      }
      CmpUnlockKcbStack((__int64)v13);
    }
    v5 = v14;
  }
  else
  {
    started = -1073741431;
  }
  CmpCleanupKcbStack((__int64)v13);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v5 )
    CmpReleaseShutdownRundown();
  return (unsigned int)started;
}
