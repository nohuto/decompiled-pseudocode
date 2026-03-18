/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18025619C
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802544DC (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, unsigned int *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  int v8; // xmm2_4
  int v9; // xmm0_4
  int v10; // xmm4_4
  int v11; // xmm3_4
  int v12; // xmm1_4
  _DWORD *v13; // rax

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x22u);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 352);
    if ( v7 )
      v7 = *(_QWORD *)(v7 + 16);
    v8 = *(_DWORD *)(v7 + 568);
    v6 = 0;
    v9 = *(_DWORD *)(v7 + 564);
    v10 = *(_DWORD *)(v7 + 552);
    v11 = *(_DWORD *)(v7 + 548);
    v12 = *(_DWORD *)(v7 + 544);
    *(_DWORD *)(a1 + 468) = *(_DWORD *)(a1 + 340);
    v13 = *(_DWORD **)(a1 + 544);
    *(_DWORD *)(a1 + 512) = v9;
    *(_DWORD *)(a1 + 508) = v8;
    v13[4] = v12;
    v13[5] = v11;
    v13[6] = v10;
  }
  return v6;
}
