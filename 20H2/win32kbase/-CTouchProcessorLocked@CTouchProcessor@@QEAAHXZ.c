/*
 * XREFs of ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01865AC
 * Callers:
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D1420 (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D14F8 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018B8A0 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C018E2A4 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C018E5F4 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0191B98 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0186580 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::CTouchProcessorLocked(struct _KTHREAD **this)
{
  BOOL v1; // eax
  unsigned int v2; // ecx

  if ( this[9] == KeGetCurrentThread() )
    return 1;
  v1 = CTouchProcessor::CTouchProcessorLockShared((PERESOURCE *)this);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
