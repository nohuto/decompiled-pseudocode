/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C019BBB8
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0188350 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(
        struct _KTHREAD **a1,
        __int64 a2,
        CInputDest *a3,
        __int64 a4)
{
  unsigned __int16 v5; // bp
  unsigned int v7; // ebx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v9; // rsi

  v5 = a2;
  if ( a1[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = 0;
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  NodeById = CTouchProcessor::FindNodeById(a1, v5, 0, 0);
  v9 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 64, (__int64)a3);
    v7 = 1;
    *((_DWORD *)v9 + 70) = *((_DWORD *)v9 + 70) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3);
  return v7;
}
