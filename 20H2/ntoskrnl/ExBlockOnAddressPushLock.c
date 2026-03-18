/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1402F3810
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402F37AC (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140593DD8 (RtlpCSparseBitmapWaitOnAddress.c)
 *     MiLockImageSection @ 0x1406A57A0 (MiLockImageSection.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5EF8 (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E2860 (CmpRollbackLightWeightTransaction.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpTransSearchAddTrans @ 0x14076383C (CmpTransSearchAddTrans.c)
 *     PopBatteryUpdateCurrentState @ 0x14078A6A8 (PopBatteryUpdateCurrentState.c)
 *     RtlUpdateSwapReference @ 0x1407C6A5C (RtlUpdateSwapReference.c)
 *     CmUnRegisterCallback @ 0x14086BFE0 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 *     PsSetVmProcessorHostProcess @ 0x14090C5F8 (PsSetVmProcessorHostProcess.c)
 * Callees:
 *     ExBlockPushLock @ 0x1402F38D0 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402F38F0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402F39D8 (ExpUnblockPushLock.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  bool v10; // zf
  int v12; // ebx
  int v13; // ebx
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_10;
  v9 = a4 - 1;
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
          goto LABEL_10;
        v10 = *a2 == *a3;
      }
      else
      {
        v10 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v10 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v10 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v10 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_10:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
