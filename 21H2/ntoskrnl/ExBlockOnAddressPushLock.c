/*
 * XREFs of ExBlockOnAddressPushLock @ 0x140213E80
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x14026CE98 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140595A40 (RtlpCSparseBitmapWaitOnAddress.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406216F0 (CmpRollbackLightWeightTransaction.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     MiLockImageSection @ 0x1407064BC (MiLockImageSection.c)
 *     CmpTransSearchAddTrans @ 0x140766FEC (CmpTransSearchAddTrans.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E638 (PopBatteryUpdateCurrentState.c)
 *     RtlUpdateSwapReference @ 0x1407CAFDC (RtlUpdateSwapReference.c)
 *     CmUnRegisterCallback @ 0x140869D70 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     PsSetVmProcessorHostProcess @ 0x140909F08 (PsSetVmProcessorHostProcess.c)
 * Callees:
 *     ExBlockPushLock @ 0x140213F40 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140213F60 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140214048 (ExpUnblockPushLock.c)
 *     memset @ 0x140414300 (memset.c)
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
