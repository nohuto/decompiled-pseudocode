/*
 * XREFs of CmpAssignKeySecurity @ 0x1407D0450
 * Callers:
 *     CmpSecurityMethod @ 0x140665120 (CmpSecurityMethod.c)
 * Callees:
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140655680 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140656AB0 (CmpAcquireShutdownRundown.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpAssignSecurityToKcb @ 0x14066A130 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x14066A1E4 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14066A204 (CmLockHiveSecurityExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackExclusive @ 0x14066C138 (CmpLockKcbStackExclusive.c)
 *     ObAssignObjectSecurityDescriptor @ 0x14069D200 (ObAssignObjectSecurityDescriptor.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E04 (CmpReleaseKeyNodeForKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x1408716B0 (CmpAssignSecurityDescriptor.c)
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
