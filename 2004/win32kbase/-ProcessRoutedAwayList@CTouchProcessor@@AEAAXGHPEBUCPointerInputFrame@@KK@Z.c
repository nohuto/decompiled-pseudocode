/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0198698
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C005F150 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018952C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0049A20 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0190158 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0195F54 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v7; // ebp
  unsigned __int16 v8; // r14
  int v10; // ebx
  struct CInputDest *v11; // rax
  _QWORD *v12; // rax
  _DWORD v13[32]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v14[128]; // [rsp+C0h] [rbp-88h] BYREF

  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, 0LL);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, v8);
  while ( v13[0] )
  {
    if ( v7 )
    {
      if ( a4 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a4 + 19) + 312LL);
        v11 = CInputDest::CInputDest((CInputDest *)v14, (const struct CInputDest *)v13);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (PDEVICE_OBJECT)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(v10, 4),
          -__CFSHR__(v10, 5),
          v11);
      }
    }
    v12 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v14, v8);
    CInputDest::operator=((__int64)v13, v12);
    CInputDest::SetEmpty((CInputDest *)v14);
  }
  CInputDest::SetEmpty((CInputDest *)v13);
}
