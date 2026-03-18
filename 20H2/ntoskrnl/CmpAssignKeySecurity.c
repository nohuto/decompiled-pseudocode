/*
 * XREFs of CmpAssignKeySecurity @ 0x1407CC190
 * Callers:
 *     CmpSecurityMethod @ 0x14066EFA0 (CmpSecurityMethod.c)
 * Callees:
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406C20A0 (ObAssignObjectSecurityDescriptor.c)
 *     CmpLockKcbStackExclusive @ 0x1407022A8 (CmpLockKcbStackExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmLockHiveSecurityExclusive @ 0x140704918 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140704938 (CmUnlockHiveSecurity.c)
 *     CmpAssignSecurityToKcb @ 0x140704AE4 (CmpAssignSecurityToKcb.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x140873E74 (CmpAssignSecurityDescriptor.c)
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
