/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C018B50C
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0185E10 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _HMObjectFromHandle @ 0x1C00870D0 (_HMObjectFromHandle.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0180D48 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C01927A0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0195F50 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0196A54 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019A3D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C01C5C5C (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagWND *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _OWORD v21[7]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v22[5]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v23; // [rsp+E0h] [rbp-20h]
  __int128 v24; // [rsp+F0h] [rbp-10h]

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12, v13);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 30) &= ~4u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(a5, a2, v11 != 0LL);
  v17 = (struct tagWND *)HMObjectFromHandle(*((_QWORD *)a3 + 24), v14, v15, v16);
  CInputDest::CInputDest((CInputDest *)v22, v17);
  if ( HIDWORD(v23) )
  {
    v21[0] = v22[0];
    v21[2] = v22[2];
    v21[1] = v22[1];
    v21[4] = v22[4];
    v21[3] = v22[3];
    v21[6] = v24;
    v21[5] = v23;
    if ( ApiSetEditionGetInputDelegate(v21) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v11, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v11, a2);
  if ( v11 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v11);
  CInputDest::SetEmpty((CInputDest *)v22, v18, v19, v20);
}
