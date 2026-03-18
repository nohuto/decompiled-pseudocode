/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x180207C48
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801CD000 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180205908 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // xmm3_4
  int v8; // xmm1_4
  int v9; // xmm4_4
  int v10; // xmm2_4
  int v11; // xmm0_4
  int v12; // eax

  v3 = CScrollAnimation::Initialize((__int64)this, (unsigned int *)a2, 2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x26u, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 41);
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 16);
    v7 = *(_DWORD *)(v6 + 568);
    v5 = 0;
    v8 = *(_DWORD *)(v6 + 564);
    v9 = *(_DWORD *)(v6 + 544);
    v10 = *(_DWORD *)(v6 + 540);
    v11 = *(_DWORD *)(v6 + 536);
    v12 = *((_DWORD *)this + 79);
    *((_DWORD *)this + 122) = v8;
    *((_DWORD *)this + 121) = v7;
    *((_DWORD *)this + 136) = v11;
    *((_DWORD *)this + 137) = v10;
    *((_DWORD *)this + 138) = v9;
    *((_DWORD *)this + 111) = v12;
  }
  return v5;
}
