/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x180256864
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802544DC (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // xmm2_4
  int v8; // xmm0_4
  int v9; // xmm4_4
  int v10; // xmm3_4
  int v11; // xmm1_4
  _DWORD *v12; // rax

  v3 = CScrollAnimation::Initialize((__int64)this, (unsigned int *)a2, 2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x26u);
  }
  else
  {
    v6 = *((_QWORD *)this + 44);
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 16);
    v7 = *(_DWORD *)(v6 + 576);
    v5 = 0;
    v8 = *(_DWORD *)(v6 + 572);
    v9 = *(_DWORD *)(v6 + 552);
    v10 = *(_DWORD *)(v6 + 548);
    v11 = *(_DWORD *)(v6 + 544);
    *((_DWORD *)this + 117) = *((_DWORD *)this + 85);
    v12 = (_DWORD *)*((_QWORD *)this + 68);
    *((_DWORD *)this + 128) = v8;
    *((_DWORD *)this + 127) = v7;
    v12[4] = v11;
    v12[5] = v10;
    v12[6] = v9;
  }
  return v5;
}
