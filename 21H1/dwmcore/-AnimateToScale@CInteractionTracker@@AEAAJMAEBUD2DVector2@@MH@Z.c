/*
 * XREFs of ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801CBBF4
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CE2D0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801CBFA0 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801CCBB0 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDFC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801D1014 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::AnimateToScale(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3,
        float a4)
{
  int started; // eax
  struct CResource *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  struct CResource *v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 45) = 0;
  CInteractionTracker::DestroyDefaultAnimations(this, 1);
  v11 = 0LL;
  v12 = LODWORD(a2);
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(this, 2LL, 18LL, &v12, LODWORD(a4), &v11);
  v7 = v11;
  v8 = started;
  if ( started >= 0 )
  {
    started = CResource::RegisterNotifier(this, v11);
    v8 = started;
    if ( started < 0 )
    {
      v9 = 6320LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((char *)this + 464, v7);
    *(_QWORD *)(*((_QWORD *)this + 58) + 720LL) = *(_QWORD *)a3;
    return 0LL;
  }
  v9 = 6313LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)started);
  if ( v7 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
