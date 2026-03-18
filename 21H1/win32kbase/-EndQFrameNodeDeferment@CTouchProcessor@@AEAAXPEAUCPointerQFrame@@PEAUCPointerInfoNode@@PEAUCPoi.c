/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C019372C
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C018E050 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C000F2B0 (_HMObjectFromHandle.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0188F88 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C019A9D0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019E170 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01A2630 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01CDF5C (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        CTouchProcessor *a5)
{
  __int64 v9; // rcx
  const struct CPointerInputFrame *v10; // rsi
  struct tagWND *v11; // rax
  _OWORD v12[7]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v13[5]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v14; // [rsp+E0h] [rbp-20h]
  __int128 v15; // [rsp+F0h] [rbp-10h]

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 30) &= ~4u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(a5, a2, v10 != 0LL);
  v11 = (struct tagWND *)HMObjectFromHandle(*((_QWORD *)a3 + 24));
  CInputDest::CInputDest((CInputDest *)v13, v11);
  if ( HIDWORD(v14) )
  {
    v12[0] = v13[0];
    v12[2] = v13[2];
    v12[1] = v13[1];
    v12[4] = v13[4];
    v12[3] = v13[3];
    v12[6] = v15;
    v12[5] = v14;
    if ( ApiSetEditionGetInputDelegate(v12) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v10, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v10, a2);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10);
  CInputDest::SetEmpty((CInputDest *)v13);
}
