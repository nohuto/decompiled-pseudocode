/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019E388
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0051490 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018F22C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C005D3F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0195E58 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C019BC44 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // ebx
  struct CInputDest *v11; // rax
  _QWORD *v12; // rax
  _DWORD v13[32]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v14[128]; // [rsp+C0h] [rbp-88h] BYREF

  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, a2);
  while ( v13[0] )
  {
    if ( a3 )
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
    v12 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v14, a2);
    CInputDest::operator=((__int64)v13, v12);
    CInputDest::SetEmpty((CInputDest *)v14);
  }
  CInputDest::SetEmpty((CInputDest *)v13);
}
