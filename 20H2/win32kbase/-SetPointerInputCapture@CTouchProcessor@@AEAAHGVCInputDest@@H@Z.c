/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01996B8
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0185E10 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct CInputPointerNode *v12; // rsi

  v5 = a2;
  if ( a1[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = 0;
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  NodeById = CTouchProcessor::FindNodeById(a1, v5, 0, 0);
  v12 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 64, (__int64)a3, v10, v11);
    v7 = 1;
    *((_DWORD *)v12 + 70) = *((_DWORD *)v12 + 70) & 0xFFFFFF8F | 0x10;
  }
  CInputDest::SetEmpty(a3, v9, v10, v11);
  return v7;
}
