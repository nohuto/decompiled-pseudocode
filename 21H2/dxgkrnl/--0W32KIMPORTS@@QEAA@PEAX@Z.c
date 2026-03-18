/*
 * XREFs of ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C002916C
 * Callers:
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C0029108 (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 * Callees:
 *     ??0?$Win32kFunction@$$A6AXI_K@Z@@QEAA@PEAXPEBDP6AXI_K@Z@Z @ 0x1C0029A30 (--0-$Win32kFunction@$$A6AXI_K@Z@@QEAA@PEAXPEBDP6AXI_K@Z@Z.c)
 */

W32KIMPORTS *__fastcall W32KIMPORTS::W32KIMPORTS(W32KIMPORTS *this, void *a2)
{
  __int64 ExportedRoutineByName; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    this,
    a2,
    "UserIsCurrentProcessImmersive",
    W32kStub_UserRemoveWindowedSwapChain);
  ExportedRoutineByName = RtlFindExportedRoutineByName(a2, "CheckAndProcessSurfaceComplete");
  *((_QWORD *)this + 1) = ExportedRoutineByName;
  if ( !ExportedRoutineByName )
    *((_QWORD *)this + 1) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v5 = RtlFindExportedRoutineByName(a2, "CreateRegion");
  *((_QWORD *)this + 2) = v5;
  if ( !v5 )
    *((_QWORD *)this + 2) = W32kStub_GreSfmOpenTokenEvent;
  v6 = RtlFindExportedRoutineByName(a2, "CreateRegionFromRect");
  *((_QWORD *)this + 3) = v6;
  if ( !v6 )
    *((_QWORD *)this + 3) = W32kStub_GreSfmOpenTokenEvent;
  v7 = RtlFindExportedRoutineByName(a2, "DCompositionNotifyCompositionTokenPresent");
  *((_QWORD *)this + 4) = v7;
  if ( !v7 )
    *((_QWORD *)this + 4) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v8 = RtlFindExportedRoutineByName(a2, "DCompositionNotifyPresent");
  *((_QWORD *)this + 5) = v8;
  if ( !v8 )
    *((_QWORD *)this + 5) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v9 = RtlFindExportedRoutineByName(a2, "DCompositionShouldDeferToken");
  *((_QWORD *)this + 6) = v9;
  if ( !v9 )
    *((_QWORD *)this + 6) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 56,
    a2,
    "EngDeleteRgn",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 64,
    a2,
    "EtwTraceCompositionSurfaceObjectUpdateEvent",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 72,
    a2,
    "EtwTraceFlipManagerStartCompleteToken",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v10 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStopCompleteToken");
  *((_QWORD *)this + 10) = v10;
  if ( !v10 )
    *((_QWORD *)this + 10) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 88,
    a2,
    "EtwTraceFlipManagerStartTokenReleaseToFrame",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 96,
    a2,
    "EtwTraceFlipManagerStopTokenReleaseToFrame",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 104,
    a2,
    "EtwTraceFlipManagerPresentProcessed",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 112,
    a2,
    "EtwTraceFlipManagerPresentDeferred",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 120,
    a2,
    "EtwTraceFlipManagerPresentCanceled",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v11 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentPosted");
  *((_QWORD *)this + 16) = v11;
  if ( !v11 )
    *((_QWORD *)this + 16) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 136,
    a2,
    "EtwTraceFlipManagerPresentQueueDepth",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v12 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentRebind");
  *((_QWORD *)this + 18) = v12;
  if ( !v12 )
    *((_QWORD *)this + 18) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 152,
    a2,
    "EtwTraceFlipManagerPresentIFlipSubmitted",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 160,
    a2,
    "EtwTraceFlipManagerPresentIFlipCompleted",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 168,
    a2,
    "EtwTraceFlipManagerPresentConfirmed",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 176,
    a2,
    "EtwTraceFlipManagerPresentSignaled",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v13 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerProducerSetContent");
  *((_QWORD *)this + 23) = v13;
  if ( !v13 )
    *((_QWORD *)this + 23) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 192,
    a2,
    "EtwTraceFlipManagerProducerSetContent_Enabled",
    W32kStub_UserRemoveWindowedSwapChain);
  v14 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerBufferAvailable");
  *((_QWORD *)this + 25) = v14;
  if ( !v14 )
    *((_QWORD *)this + 25) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 208,
    a2,
    "EtwTraceFlipManagerAddBuffer",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 216,
    a2,
    "EtwTraceFlipManagerRemoveBuffer",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 224,
    a2,
    "EtwTraceFlipManagerBindingStart",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 232,
    a2,
    "EtwTraceFlipManagerBindingInfo",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 240,
    a2,
    "EtwTraceFlipManagerBindingStop",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v15 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerAddContent");
  *((_QWORD *)this + 31) = v15;
  if ( !v15 )
    *((_QWORD *)this + 31) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v16 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentFlip");
  *((_QWORD *)this + 32) = v16;
  if ( !v16 )
    *((_QWORD *)this + 32) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 264,
    a2,
    "EtwTraceFlipManagerNoOpPresent",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 272,
    a2,
    "EtwTraceFlipManagerCancelPosted",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v17 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentUnbind");
  *((_QWORD *)this + 35) = v17;
  if ( !v17 )
    *((_QWORD *)this + 35) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 288,
    a2,
    "EtwTraceFlipManagerCreate",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 296,
    a2,
    "EtwTraceFlipManagerDestroy",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v18 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenManagerDisableScanoutToken");
  *((_QWORD *)this + 38) = v18;
  if ( !v18 )
    *((_QWORD *)this + 38) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 312,
    a2,
    "EtwTraceFlipManagerLost",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 320,
    a2,
    "EtwTraceFlipManagerCanceledPresentShown",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 328,
    a2,
    "EtwTraceFlipManagerUpdateExpectedConsumerPresentId",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v19 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenCompositionSurfaceObjectEvent");
  *((_QWORD *)this + 42) = v19;
  if ( !v19 )
    *((_QWORD *)this + 42) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v20 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenIndependentFlipSkipCompleteEvent");
  *((_QWORD *)this + 43) = v20;
  if ( !v20 )
    *((_QWORD *)this + 43) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v21 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenStateChangedEvent");
  *((_QWORD *)this + 44) = v21;
  if ( !v21 )
    *((_QWORD *)this + 44) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 360,
    a2,
    "GreDwmDesktopOverlaysEnabled",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 368,
    a2,
    "GreIsDwmStateLocked",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 376,
    a2,
    "GreLockDwmState",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 384,
    a2,
    "GreSfmCleanupPresentHistory",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v22 = RtlFindExportedRoutineByName(a2, "GreSfmGetNotificationTokens");
  *((_QWORD *)this + 49) = v22;
  if ( !v22 )
    *((_QWORD *)this + 49) = W32kStub_GreSfmOpenTokenEvent;
  v23 = RtlFindExportedRoutineByName(a2, "GreSfmGetPresentQueueEvent");
  *((_QWORD *)this + 50) = v23;
  if ( !v23 )
    *((_QWORD *)this + 50) = W32kStub_GreSfmOpenTokenEvent;
  v24 = RtlFindExportedRoutineByName(a2, "GreSfmOpenTokenEvent");
  *((_QWORD *)this + 51) = v24;
  if ( !v24 )
    *((_QWORD *)this + 51) = W32kStub_GreSfmOpenTokenEvent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 416,
    a2,
    "GreUnlockDwmState",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v25 = RtlFindExportedRoutineByName(a2, "UserAllocDefaultCompositionSecurityDescriptor");
  *((_QWORD *)this + 53) = v25;
  if ( !v25 )
    *((_QWORD *)this + 53) = W32kStub_GreSfmOpenTokenEvent;
  v26 = RtlFindExportedRoutineByName(a2, "UserDereferenceDwmProcess");
  *((_QWORD *)this + 54) = v26;
  if ( !v26 )
    *((_QWORD *)this + 54) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 440,
    a2,
    "UserEnterUserCritSecShared",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 448,
    a2,
    "UserIsCurrentProcessImmersive",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 456,
    a2,
    "UserIsCurrentThreadDesktopComposed",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 464,
    a2,
    "UserIsUserCritSecIn",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 472,
    a2,
    "UserIsDisconnectConnection",
    W32kStub_UserIsDisconnectConnection);
  v27 = RtlFindExportedRoutineByName(a2, "UserIsWindowDesktopComposed");
  *((_QWORD *)this + 60) = v27;
  if ( !v27 )
    *((_QWORD *)this + 60) = W32kStub_UserIsWindowDesktopComposed;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 488,
    a2,
    "UserLeaveUserCritSec",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v28 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmApiPort");
  *((_QWORD *)this + 62) = v28;
  if ( !v28 )
    *((_QWORD *)this + 62) = W32kStub_UserRemoveWindowedSwapChain;
  v29 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmProcess");
  *((_QWORD *)this + 63) = v29;
  if ( !v29 )
    *((_QWORD *)this + 63) = W32kStub_UserRemoveWindowedSwapChain;
  v30 = RtlFindExportedRoutineByName(a2, "UserRemoveWindowedSwapChain");
  *((_QWORD *)this + 64) = v30;
  if ( !v30 )
    *((_QWORD *)this + 64) = W32kStub_UserRemoveWindowedSwapChain;
  v31 = RtlFindExportedRoutineByName(a2, "UserSetWindowedSwapChainApiExt");
  *((_QWORD *)this + 65) = v31;
  if ( !v31 )
    *((_QWORD *)this + 65) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 528,
    a2,
    "UserUnsafeIsCurrentProcessDwm",
    W32kStub_UserRemoveWindowedSwapChain);
  v32 = RtlFindExportedRoutineByName(a2, "UserUnsafeIsProcessDwm");
  *((_QWORD *)this + 67) = v32;
  if ( !v32 )
    *((_QWORD *)this + 67) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
    (char *)this + 544,
    a2,
    "Win32FreePool",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  return this;
}
