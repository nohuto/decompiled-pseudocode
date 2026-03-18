/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x140653348
 * Callers:
 *     NtCommitRegistryTransaction @ 0x140653230 (NtCommitRegistryTransaction.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1403F2CC0 (ExfUnblockPushLock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140653A5C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140653B8C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x140653C68 (CmpCleanupLightWeightPrepare.c)
 *     CmpAbortLightWeightTransaction @ 0x14075E654 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  signed __int32 v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v10[0] = 0LL;
  CmpInitializeDelayDerefContext(v10);
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v6 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      v2 = 1;
      CmpLockRegistryExclusive();
    }
    v6 = CmpPrepareLightWeightTransaction(v4, v10);
    if ( v6 < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
      {
        CmpAbortLightWeightTransaction(a1);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v9, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
    {
      CmpCleanupLightWeightPrepare(v4, v5, v10);
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v9, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      v6 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v4, v10);
      if ( v2 )
      {
        CmpCleanupLightWeightPrepare(v4, v7, v10);
        CmpDrainDelayDerefContext((_QWORD **)v10);
        CmpUnlockRegistry();
        v2 = 0;
        CmpCleanupLightWeightTransaction(v4, 4LL);
      }
      v6 = 0;
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)v10);
      CmpUnlockRegistry();
    }
  }
  return (unsigned int)v6;
}
