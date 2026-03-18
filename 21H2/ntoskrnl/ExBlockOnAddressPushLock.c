/*
 * XREFs of ExBlockOnAddressPushLock @ 0x140369460
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402A4298 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1405F3A90 (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmpTransSearchAddTrans @ 0x14067F520 (CmpTransSearchAddTrans.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E25B0 (CmpRollbackLightWeightTransaction.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     PopBatteryUpdateCurrentState @ 0x1407ED964 (PopBatteryUpdateCurrentState.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x1407EDA2C (MiLockImageSection.c)
 *     RtlUpdateSwapReference @ 0x1408331DC (RtlUpdateSwapReference.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     PsSetVmProcessorHostProcess @ 0x1409AF410 (PsSetVmProcessorHostProcess.c)
 * Callees:
 *     ExBlockPushLock @ 0x140369520 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140369634 (ExpUnblockPushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_8;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 4 )
          goto LABEL_8;
        v12 = *a2 == *a3;
      }
      else
      {
        v12 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v12 = *(_WORD *)a2 == *(_WORD *)a3;
    }
  }
  else
  {
    v12 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v12 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_8:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
