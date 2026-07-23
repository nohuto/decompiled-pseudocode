/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x1405DE998
 * Callers:
 *     NtCommitRegistryTransaction @ 0x1405DE880 (NtCommitRegistryTransaction.c)
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405DEB10 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1405DF198 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1405DF2C8 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1405DF3A4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpAbortLightWeightTransaction @ 0x1407711A4 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  signed __int32 v5; // eax
  int v6; // ebx
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v16[0] = 0LL;
  CmpInitializeDelayDerefContext(v16);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v5 )
  {
    v6 = -1072103421;
    if ( v5 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      v2 = 1;
      CmpLockRegistryExclusive(v4, v3);
    }
    v6 = CmpPrepareLightWeightTransaction(v7, v16);
    if ( v6 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        CmpCleanupLightWeightPrepare(v7, v8, v16);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v15, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v6 = -1072103421;
      }
      else
      {
        CmpCommitPreparedLightWeightTransaction(v7, v16);
        if ( v2 )
        {
          CmpCleanupLightWeightPrepare(v7, v9, v16);
          CmpDrainDelayDerefContext((_QWORD **)v16);
          CmpUnlockRegistry(v11, v10);
          v2 = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            CmpCleanupLightWeightTransaction(v7);
        }
        v6 = 0;
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
    {
      if ( !*(_BYTE *)(a1 + 24) )
        CmpAbortLightWeightTransaction(a1);
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v15, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)v16);
      CmpUnlockRegistry(v13, v12);
    }
  }
  return (unsigned int)v6;
}
