/*
 * XREFs of ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0194C80
 * Callers:
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C019BE20 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C019BFC8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0194CD0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 */

void __fastcall CTouchProcessor::InitializeQFrame(__int64 a1, __int64 a2, int a3, __int64 a4, CInputDest *a5, int a6)
{
  CTouchProcessor *v7; // rcx

  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  CInputDest::operator=(a2 + 16, (__int64)a5);
  *(_DWORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 140) &= 0xFFFFFFE7;
  CTouchProcessor::InitializeQFrameCoalesceState(v7, (struct CPointerQFrame *)a2, a6);
  CInputDest::SetEmpty(a5);
}
