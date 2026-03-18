/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0191A30
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00BF4B0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00A8AFC (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0196A54 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        CTouchProcessor *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  const struct CPointerInputFrame *v8; // rax
  struct CPointerInputFrame *v9; // rbp
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct CPointerInfoNode *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _DWORD v25[28]; // [rsp+20h] [rbp-78h] BYREF

  memset(a2, 0, 0x70uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((struct _KTHREAD **)a1, v8, *(_WORD *)(a3 + 172), 0LL);
    v14 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      v15 = *(unsigned __int16 *)(a3 + 172);
      if ( *((_WORD *)ValidNodeInFrame + 86) != (_WORD)v15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v12, v13);
      v16 = HMValidateHandleNoSecure(*((_QWORD *)v14 + 24), 1);
      v17 = INPUTDEST_FROM_PWND(v25, v16);
      v18 = v17[1];
      *a2 = *v17;
      v19 = v17[2];
      a2[1] = v18;
      v20 = v17[3];
      a2[2] = v19;
      v21 = v17[4];
      a2[3] = v20;
      v22 = v17[5];
      a2[4] = v21;
      v23 = v17[6];
      a2[5] = v22;
      a2[6] = v23;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9);
  }
  return a2;
}
