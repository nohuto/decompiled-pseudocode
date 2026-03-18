/*
 * XREFs of ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0199C14
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0192180 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0195AE0 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C002E964 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C019300C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::ShouldForegroundActivate(CPointerInfoNode *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*((_DWORD *)this + 1) & 0x1000) == 0
    && !CInputDest::ShouldSkipForegroundActivation((CPointerInfoNode *)((char *)this + 352)) )
  {
    return (unsigned int)CPointerInfoNode::IsPrimaryDown(this) != 0;
  }
  return v1;
}
