/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x140656638
 * Callers:
 *     NtCommitRegistryTransaction @ 0x140656520 (NtCommitRegistryTransaction.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpCleanupLightWeightTransaction @ 0x140656718 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406583C8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406584F8 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpAbortLightWeightTransaction @ 0x14075C174 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  signed __int32 v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v12[0] = 0LL;
  CmpInitializeDelayDerefContext(v12);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v5 )
  {
    v8 = -1072103421;
    if ( v5 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
    {
      v2 = 1;
      CmpLockRegistryExclusive(v4, v3);
    }
    v8 = CmpPrepareLightWeightTransaction(v6, v12);
    if ( v8 < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
      {
        CmpAbortLightWeightTransaction(a1);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v11, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
    {
      CmpCleanupLightWeightPrepare(v6, v7, v12);
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v11, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      v8 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v6, v12);
      if ( v2 )
      {
        CmpCleanupLightWeightPrepare(v6, v9, v12);
        CmpDrainDelayDerefContext((_QWORD **)v12);
        CmpUnlockRegistry();
        v2 = 0;
        CmpCleanupLightWeightTransaction(v6, 4LL);
      }
      v8 = 0;
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)v12);
      CmpUnlockRegistry();
    }
  }
  return (unsigned int)v8;
}
