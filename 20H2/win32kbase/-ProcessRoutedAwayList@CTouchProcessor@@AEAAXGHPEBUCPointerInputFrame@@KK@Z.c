/*
 * XREFs of ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0196168
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00BF4B0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0186FEC (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00294B0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C018DC38 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0193A24 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  struct CInputDest *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD v19[32]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v20[128]; // [rsp+C0h] [rbp-88h] BYREF

  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, 0LL);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v19, v8);
  while ( v19[0] )
  {
    if ( v7 )
    {
      if ( a4 )
      {
        v13 = *(_DWORD *)(*((_QWORD *)a4 + 19) + 312LL);
        v14 = CInputDest::CInputDest((CInputDest *)v20, (const struct CInputDest *)v19);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (PDEVICE_OBJECT)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(v13, 4),
          -__CFSHR__(v13, 5),
          v14);
      }
    }
    v15 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v20, v8);
    CInputDest::operator=((__int64)v19, v15);
    CInputDest::SetEmpty((CInputDest *)v20, v16, v17, v18);
  }
  CInputDest::SetEmpty((CInputDest *)v19, v10, v11, v12);
}
