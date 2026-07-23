/*
 * XREFs of CmpAssignKeySecurity @ 0x1407D05C0
 * Callers:
 *     CmpSecurityMethod @ 0x140659F40 (CmpSecurityMethod.c)
 * Callees:
 *     ObAssignObjectSecurityDescriptor @ 0x1405FC2D0 (ObAssignObjectSecurityDescriptor.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14065F024 (CmLockHiveSecurityExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x140660F58 (CmpLockKcbStackExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863F5C (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, __int64 a2)
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
          a2 = *(_QWORD *)(*(_QWORD *)(v7 + 1880) + 8LL) + 32LL;
        started = CmpAssignSecurityDescriptor(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), KeyNodeForKcb, a2);
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
