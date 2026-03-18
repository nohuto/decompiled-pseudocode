/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18021E39C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x180218B1C (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x180218B4C (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ??4?$ComPtr@VCInteractionTrackerScaleAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerScaleAnimation@@@Z @ 0x180218BB0 (--4-$ComPtr@VCInteractionTrackerScaleAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrac.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180253D20 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180255D48 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18025619C (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x180256864 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18025EA58 (--0CMotion@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  __int64 *v1; // r14
  CScrollAnimation *v3; // rax
  CScrollAnimation *v4; // rsi
  CInteractionTrackerScaleAnimation *v5; // rcx
  int v6; // r9d
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *v9; // rbx
  CInteractionTrackerPositionAnimation *v10; // rax
  CInteractionTrackerScaleAnimation **v11; // rbx
  CInteractionTrackerPositionAnimation *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(this + 41);
  if ( !this[41] )
  {
    v3 = (CScrollAnimation *)DefaultHeap::AllocClear(0x258uLL);
    v4 = v3;
    if ( !v3 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    CScrollAnimation::CScrollAnimation(v3, this[2]);
    *(_QWORD *)v4 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((CScrollAnimation *)((char *)v4 + 456));
    *((_QWORD *)v4 + 57) = &CScaleMotion::`vftable';
    Microsoft::WRL::ComPtr<CInteractionTrackerScaleAnimation>::operator=(v1, (__int64)v4);
    v5 = (CInteractionTrackerScaleAnimation *)*v1;
    if ( !*v1 )
    {
      v14 = 3205;
LABEL_6:
      v6 = -2147024882;
      v7 = -2147024882;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0LL, v6, v14);
      return v7;
    }
    v8 = CInteractionTrackerScaleAnimation::Initialize(v5, (struct CInteractionTracker *)this);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 3207;
LABEL_11:
      v6 = v8;
      goto LABEL_7;
    }
  }
  v9 = this + 42;
  if ( !this[42] )
  {
    v10 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v10 )
      v10 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v10, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 42, (__int64)v10);
    if ( !*v9 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2147024882, 0xC8Du);
      return v7;
    }
    v8 = CInteractionTrackerPositionAnimation::Initialize(*v9, this, 0LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 3215;
      goto LABEL_11;
    }
  }
  v11 = this + 43;
  if ( !this[43] )
  {
    v12 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v12 )
      v12 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v12, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 43, (__int64)v12);
    v5 = *v11;
    if ( !*v11 )
    {
      v14 = 3221;
      goto LABEL_6;
    }
    v8 = CInteractionTrackerPositionAnimation::Initialize(v5, this, 1LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 3223;
      goto LABEL_11;
    }
  }
  return 0;
}
