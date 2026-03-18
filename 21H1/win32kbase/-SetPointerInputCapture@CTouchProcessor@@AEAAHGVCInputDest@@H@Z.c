/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01A1918
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C018E050 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  unsigned int v6; // ebx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v8; // rsi

  if ( a1[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v6 = 0;
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  v8 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 64, (__int64)a3);
    v6 = 1;
    *((_DWORD *)v8 + 70) = *((_DWORD *)v8 + 70) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3);
  return v6;
}
