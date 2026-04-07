/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B7ED8
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E03C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025084 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800A6E4C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800B7B40 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B802C (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B80DC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B8848 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // eax
  int v9; // edi
  __int64 v10; // rax
  CTouchPressHoldVisual *v11; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 324) = 0;
  *(_QWORD *)(v5 + 300) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6, 0.1500000059604645, 1.0, 0.0, 0);
    *v7 = &CTimeline<float>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 42) = v7;
  if ( !v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x63u);
LABEL_10:
    CTouchPressHoldVisual::StopAllTimelines(this);
    v10 = *(_QWORD *)((char *)this + 308);
    *((_DWORD *)this + 82) = 0;
    *((_DWORD *)this + 81) = 0;
    *(_QWORD *)((char *)this + 316) = v10;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v11);
    return 0LL;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v9 = v8;
  if ( v8 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2u);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x65u);
  if ( v9 < 0 )
    goto LABEL_10;
  return 0LL;
}
