/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0199C60
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0051490 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C005C7C0 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct CPointerInfoNode *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _DWORD v22[28]; // [rsp+20h] [rbp-78h] BYREF

  memset(a2, 0, 0x70uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((struct _KTHREAD **)a1, v8, *(_WORD *)(a3 + 172), 0LL);
    v11 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      v12 = *(unsigned __int16 *)(a3 + 172);
      if ( *((_WORD *)ValidNodeInFrame + 86) != (_WORD)v12 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      v13 = HMValidateHandleNoSecure(*((_QWORD *)v11 + 24), 1);
      v14 = INPUTDEST_FROM_PWND(v22, v13);
      v15 = v14[1];
      *a2 = *v14;
      v16 = v14[2];
      a2[1] = v15;
      v17 = v14[3];
      a2[2] = v16;
      v18 = v14[4];
      a2[3] = v17;
      v19 = v14[5];
      a2[4] = v18;
      v20 = v14[6];
      a2[5] = v19;
      a2[6] = v20;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9);
  }
  return a2;
}
