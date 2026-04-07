/*
 * XREFs of ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B7BA4
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

__int64 __fastcall CTouchPressHoldVisual::StartAbort(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // r8
  int v10; // eax
  int v11; // edi
  __m128i v12; // xmm0
  int v13; // eax
  CTouchPressHoldVisual *v14; // rcx

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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x80u);
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v8 )
  {
    CTimelineBase::CTimelineBase(v8, 0.1500000059604645, 1.0, 0.25, 0);
    *v9 = &CTimeline<float>::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 43) = v9;
  if ( !v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x82u);
LABEL_16:
    CTouchPressHoldVisual::StopAllTimelines(this);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 77));
    *((_DWORD *)this + 82) = 0;
    v13 = (int)(float)(_mm_cvtepi32_ps(v12).m128_f32[0] * 0.25);
    *(float *)v12.m128i_i32 = (float)*((int *)this + 78);
    *((_DWORD *)this + 79) = v13;
    *((_DWORD *)this + 80) = (int)(float)(*(float *)v12.m128i_i32 * 0.25);
    CTouchPressHoldVisual::UpdateOpacityAndLocation(v14);
    return 0LL;
  }
  v10 = CTouchVisual::RegisterGlobalTimer(this);
  v11 = v10;
  if ( v10 >= 0 )
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 3u);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x84u);
  if ( v11 < 0 )
    goto LABEL_16;
  return 0LL;
}
