/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x1406A2C98
 * Callers:
 *     NtCommitRegistryTransaction @ 0x1406A2B80 (NtCommitRegistryTransaction.c)
 *     CmpTransMgrCommit @ 0x140768EA0 (CmpTransMgrCommit.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1403F9560 (ExfUnblockPushLock.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A2E10 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A3444 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A3574 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406A3650 (CmpCleanupLightWeightPrepare.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpAbortLightWeightTransaction @ 0x140770FE4 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  signed __int32 v3; // eax
  int v4; // ebx
  ULONG_PTR v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v14[0] = 0LL;
  CmpInitializeDelayDerefContext(v14);
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v4 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      v2 = 1;
      CmpLockRegistryExclusive();
    }
    v4 = CmpPrepareLightWeightTransaction(v5, v14);
    if ( v4 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        CmpCleanupLightWeightPrepare(v5, v6, v14);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v13, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v4 = -1072103421;
      }
      else
      {
        CmpCommitPreparedLightWeightTransaction(v5, v14);
        if ( v2 )
        {
          CmpCleanupLightWeightPrepare(v5, v7, v14);
          CmpDrainDelayDerefContext((_QWORD **)v14);
          CmpUnlockRegistry(v9, v8);
          v2 = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            CmpCleanupLightWeightTransaction(v5);
        }
        v4 = 0;
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
      _InterlockedOr(v13, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)v14);
      CmpUnlockRegistry(v11, v10);
    }
  }
  return (unsigned int)v4;
}
