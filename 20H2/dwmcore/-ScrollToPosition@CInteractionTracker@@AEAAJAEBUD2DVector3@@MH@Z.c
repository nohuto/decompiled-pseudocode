/*
 * XREFs of ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801CA5B8
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801C9BD0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C7858 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801C8468 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801C86EC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CC848 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ScrollToPosition(
        CInteractionTracker *this,
        const struct D2DVector3 *a2,
        float a3)
{
  unsigned int v5; // xmm1_4
  int v6; // xmm0_4
  int started; // eax
  struct CResource *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  struct CResource *v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+3Ch] [rbp-2Ch]
  int v15; // [rsp+44h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 45) = 0;
  CInteractionTracker::DestroyDefaultAnimations(this, 1);
  v5 = *((_DWORD *)a2 + 1);
  v15 = 0;
  v6 = *(_DWORD *)a2;
  v12 = 0LL;
  v13 = v6;
  v14 = v5;
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(
              (struct CComposition **)this,
              1u,
              0x34u,
              (const char *)&v13,
              SLODWORD(a3),
              (__int64 *)&v12);
  v8 = v12;
  v9 = started;
  if ( started >= 0 )
  {
    started = CResource::RegisterNotifier(this, v12);
    v9 = started;
    if ( started < 0 )
    {
      v10 = 6303LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)this + 57, (__int64)v8);
    return 0LL;
  }
  v10 = 6296LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)started);
  if ( v8 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
