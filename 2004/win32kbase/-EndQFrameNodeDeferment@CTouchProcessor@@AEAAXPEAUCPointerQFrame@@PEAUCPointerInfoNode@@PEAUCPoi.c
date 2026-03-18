/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C018DA2C
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0188350 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C0023AC0 (_HMObjectFromHandle.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0183288 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0194CD0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0198480 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0198F84 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019C8D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01C7FDC (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        CTouchProcessor *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagWND *v14; // rax
  _OWORD v15[7]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v16[5]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v17; // [rsp+E0h] [rbp-20h]
  __int128 v18; // [rsp+F0h] [rbp-10h]

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12, v13);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 30) &= ~4u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(a5, a2, v11 != 0LL);
  v14 = (struct tagWND *)HMObjectFromHandle(*((_QWORD *)a3 + 24));
  CInputDest::CInputDest((CInputDest *)v16, v14);
  if ( HIDWORD(v17) )
  {
    v15[0] = v16[0];
    v15[2] = v16[2];
    v15[1] = v16[1];
    v15[4] = v16[4];
    v15[3] = v16[3];
    v15[6] = v18;
    v15[5] = v17;
    if ( ApiSetEditionGetInputDelegate(v15) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v11, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v11, a2);
  if ( v11 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v11);
  CInputDest::SetEmpty((CInputDest *)v16);
}
