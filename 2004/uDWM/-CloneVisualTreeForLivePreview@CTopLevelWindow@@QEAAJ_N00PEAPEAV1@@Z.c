/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002DE68
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000228C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180038678 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082DB8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x180084374 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180094758 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B6BC0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800B72E4 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005728 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AFF0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002B480 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18002E0A8 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18002E11C (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002E3D8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002EDF8 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002EF60 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F058 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800302C0 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        char a2,
        __int64 a3,
        __int64 a4,
        struct CTopLevelWindow **a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r12d
  char *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // eax
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // al
  PSRWLOCK v26; // rcx
  char v27; // bl
  char v29; // cl
  CVisual *v30; // r15
  _DWORD *v31; // rbx
  __int64 v32; // r9
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-C0h] BYREF
  struct CTopLevelWindow **v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v36[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v37[24]; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+98h] [rbp-70h]

  v34 = a5;
  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v36);
  v7 = *((_QWORD *)this + 36);
  if ( v7 )
  {
    if ( a2 || !*(_DWORD *)(v7 + 272) )
      v29 = 8;
    else
      v29 = 0;
    *(_BYTE *)(v7 + 84) &= ~8u;
    *(_BYTE *)(v7 + 84) |= v29;
  }
  v8 = *((_QWORD *)this + 37);
  v9 = 8 * a2;
  if ( v8 )
  {
    *(_BYTE *)(v8 + 84) &= ~8u;
    *(_BYTE *)(v8 + 84) |= v9;
  }
  v10 = *((_QWORD *)this + 66);
  if ( v10 )
  {
    *(_BYTE *)(v10 + 84) &= ~8u;
    *(_BYTE *)(v10 + 84) |= v9;
  }
  v11 = *((_QWORD *)this + 68);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 84) &= ~8u;
    *(_BYTE *)(v11 + 84) |= v9;
  }
  v12 = *((_QWORD *)this + 65);
  if ( v12 )
  {
    *(_BYTE *)(v12 + 84) &= ~8u;
    *(_BYTE *)(v12 + 84) |= v9;
  }
  v13 = 0;
  v14 = (char *)this + 488;
  do
  {
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 )
    {
      *(_BYTE *)(v15 + 84) &= ~8u;
      *(_BYTE *)(v15 + 84) |= v9;
      if ( !a2 )
      {
        v30 = *(CVisual **)v14;
        v19 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 392LL) )
        {
          *((_BYTE *)v30 + 280) |= 0x40u;
          CVisual::SetDirtyFlags(v30, 0x10000);
          v19 = CVisual::RenderRecursive(v30);
        }
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x146Du);
          goto LABEL_26;
        }
      }
    }
    ++v13;
    v14 += 8;
  }
  while ( v13 < 4 );
  v16 = *((_QWORD *)this + 34);
  if ( v16 )
    *(_BYTE *)(v16 + 84) &= ~8u;
  v17 = *((_DWORD *)this + 148);
  SRWLock = 0LL;
  v18 = CTopLevelWindow::CloneVisualTree((__int64)this, (struct CCanvasVisual ***)&SRWLock, (v17 & 0x20 | 0x40u) >> 5);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x1481u);
  }
  else
  {
    *v34 = (struct CTopLevelWindow *)SRWLock;
    v20 = *((_QWORD *)this + 36);
    if ( v20 )
      *(_BYTE *)(v20 + 84) &= ~8u;
    v21 = *((_QWORD *)this + 37);
    if ( v21 )
      *(_BYTE *)(v21 + 84) &= ~8u;
    v22 = *((_QWORD *)this + 66);
    if ( v22 )
      *(_BYTE *)(v22 + 84) &= ~8u;
    v23 = *((_QWORD *)this + 68);
    if ( v23 )
      *(_BYTE *)(v23 + 84) &= ~8u;
    v24 = *((_QWORD *)this + 65);
    if ( v24 )
      *(_BYTE *)(v24 + 84) &= ~8u;
  }
LABEL_26:
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(v36, &SRWLock);
  v25 = wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
          v39,
          (unsigned int)v19,
          &v34);
  v26 = SRWLock;
  v27 = v25;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v27 )
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      v36,
      (unsigned int)v34);
  }
  else
  {
    v31 = *(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                         v26,
                         _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v31 > 5u )
    {
      LODWORD(v34) = GetCurrentThreadId();
      LODWORD(SRWLock) = v19;
      v35 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v31,
        (int)&unk_1800D0D03,
        v39 + 8,
        v32,
        (__int64)&v35,
        (__int64)&SRWLock,
        (__int64)&v34);
    }
  }
  if ( v38 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v37);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v36);
  return (unsigned int)v19;
}
