/*
 * XREFs of ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18009B6E8
 * Callers:
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18009B9BC (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C720 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001A7D4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009ACE8 (-AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009B570 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009B814 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartRectAnimation(
        CAnimatedGlassSheet *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        float a4)
{
  __int64 v4; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  _QWORD *v11; // r8
  int v12; // ebx
  int v13; // eax

  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    v8 = (*(_DWORD *)(v4 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v10 )
  {
    CTimelineBase::CTimelineBase(v10, a4, 0.0, 1.0, 0);
    *v11 = &CTimeline<float>::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 54) = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x122u);
LABEL_14:
    CAnimatedGlassSheet::StopAnimation(this);
    return (unsigned int)v12;
  }
  *((struct tagRECT *)this + 24) = *a2;
  *((struct tagRECT *)this + 25) = *a3;
  v13 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v12 = v13;
  if ( v13 >= 0 )
    CAnimatedGlassSheet::AdjustTargetRect((RECT *)this);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x127u);
  if ( v12 < 0 )
    goto LABEL_14;
  return (unsigned int)v12;
}
