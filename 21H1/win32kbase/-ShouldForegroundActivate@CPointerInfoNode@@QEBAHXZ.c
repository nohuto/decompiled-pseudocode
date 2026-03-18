/*
 * XREFs of ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01A1E74
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C019A3B0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019DD00 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C005FADC (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C019B224 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
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
