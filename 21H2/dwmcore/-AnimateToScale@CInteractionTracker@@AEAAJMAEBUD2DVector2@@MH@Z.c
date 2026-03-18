/*
 * XREFs of ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180219080
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18021BBDC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x180219484 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18021A18C (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
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
  *((_DWORD *)this + 47) = 0;
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
      v9 = 6397LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((char *)this + 472, v7);
    *(_QWORD *)(*((_QWORD *)this + 59) + 752LL) = *(_QWORD *)a3;
    return 0LL;
  }
  v9 = 6390LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)started);
  if ( v7 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
