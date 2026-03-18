/*
 * XREFs of ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C00237D4
 * Callers:
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C002376C (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 * Callees:
 *     ??0?$Win32kFunction@$$A6AXPEAX@Z@@QEAA@PEAXPEBDP6AX0@Z@Z @ 0x1C0023D10 (--0-$Win32kFunction@$$A6AXPEAX@Z@@QEAA@PEAXPEBDP6AX0@Z@Z.c)
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

  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
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
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 56,
    a2,
    "EngDeleteRgn",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v10 = RtlFindExportedRoutineByName(a2, "EtwTraceCompositionSurfaceObjectUpdateEvent");
  *((_QWORD *)this + 8) = v10;
  if ( !v10 )
    *((_QWORD *)this + 8) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 72,
    a2,
    "EtwTraceFlipManagerStartCompleteToken",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 80,
    a2,
    "EtwTraceFlipManagerStopCompleteToken",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 88,
    a2,
    "EtwTraceFlipManagerStartTokenReleaseToFrame",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v11 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStopTokenReleaseToFrame");
  *((_QWORD *)this + 12) = v11;
  if ( !v11 )
    *((_QWORD *)this + 12) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v12 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenCompositionSurfaceObjectEvent");
  *((_QWORD *)this + 13) = v12;
  if ( !v12 )
    *((_QWORD *)this + 13) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v13 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenIndependentFlipSkipCompleteEvent");
  *((_QWORD *)this + 14) = v13;
  if ( !v13 )
    *((_QWORD *)this + 14) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v14 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenStateChangedEvent");
  *((_QWORD *)this + 15) = v14;
  if ( !v14 )
    *((_QWORD *)this + 15) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 128,
    a2,
    "GreDwmDesktopOverlaysEnabled",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 136,
    a2,
    "GreIsDwmStateLocked",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 144,
    a2,
    "GreLockDwmState",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 152,
    a2,
    "GreSfmCleanupPresentHistory",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v15 = RtlFindExportedRoutineByName(a2, "GreSfmGetNotificationTokens");
  *((_QWORD *)this + 20) = v15;
  if ( !v15 )
    *((_QWORD *)this + 20) = W32kStub_GreSfmOpenTokenEvent;
  v16 = RtlFindExportedRoutineByName(a2, "GreSfmGetPresentQueueEvent");
  *((_QWORD *)this + 21) = v16;
  if ( !v16 )
    *((_QWORD *)this + 21) = W32kStub_GreSfmOpenTokenEvent;
  v17 = RtlFindExportedRoutineByName(a2, "GreSfmOpenTokenEvent");
  *((_QWORD *)this + 22) = v17;
  if ( !v17 )
    *((_QWORD *)this + 22) = W32kStub_GreSfmOpenTokenEvent;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 184,
    a2,
    "GreUnlockDwmState",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v18 = RtlFindExportedRoutineByName(a2, "UserAllocDefaultCompositionSecurityDescriptor");
  *((_QWORD *)this + 24) = v18;
  if ( !v18 )
    *((_QWORD *)this + 24) = W32kStub_GreSfmOpenTokenEvent;
  v19 = RtlFindExportedRoutineByName(a2, "UserDereferenceDwmProcess");
  *((_QWORD *)this + 25) = v19;
  if ( !v19 )
    *((_QWORD *)this + 25) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 208,
    a2,
    "UserEnterUserCritSecShared",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 216,
    a2,
    "UserIsCurrentProcessImmersive",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 224,
    a2,
    "UserIsCurrentThreadDesktopComposed",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 232,
    a2,
    "UserIsUserCritSecIn",
    W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 240,
    a2,
    "UserIsDisconnectConnection",
    W32kStub_UserIsDisconnectConnection);
  v20 = RtlFindExportedRoutineByName(a2, "UserIsWindowDesktopComposed");
  *((_QWORD *)this + 31) = v20;
  if ( !v20 )
    *((_QWORD *)this + 31) = W32kStub_UserIsWindowDesktopComposed;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 256,
    a2,
    "UserLeaveUserCritSec",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  v21 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmApiPort");
  *((_QWORD *)this + 33) = v21;
  if ( !v21 )
    *((_QWORD *)this + 33) = W32kStub_UserRemoveWindowedSwapChain;
  v22 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmProcess");
  *((_QWORD *)this + 34) = v22;
  if ( !v22 )
    *((_QWORD *)this + 34) = W32kStub_UserRemoveWindowedSwapChain;
  v23 = RtlFindExportedRoutineByName(a2, "UserRemoveWindowedSwapChain");
  *((_QWORD *)this + 35) = v23;
  if ( !v23 )
    *((_QWORD *)this + 35) = W32kStub_UserRemoveWindowedSwapChain;
  v24 = RtlFindExportedRoutineByName(a2, "UserSetWindowedSwapChainApiExt");
  *((_QWORD *)this + 36) = v24;
  if ( !v24 )
    *((_QWORD *)this + 36) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 296,
    a2,
    "UserUnsafeIsCurrentProcessDwm",
    W32kStub_UserRemoveWindowedSwapChain);
  v25 = RtlFindExportedRoutineByName(a2, "UserUnsafeIsProcessDwm");
  *((_QWORD *)this + 38) = v25;
  if ( !v25 )
    *((_QWORD *)this + 38) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<void (void *)>::Win32kFunction<void (void *)>(
    (char *)this + 312,
    a2,
    "Win32FreePool",
    W32kStub_DCompositionNotifyCompositionTokenPresent);
  return this;
}
