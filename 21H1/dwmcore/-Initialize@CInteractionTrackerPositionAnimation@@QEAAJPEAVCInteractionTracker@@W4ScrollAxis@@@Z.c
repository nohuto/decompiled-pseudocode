/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802075C0
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801CD000 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180205908 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, unsigned int *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  int v8; // xmm3_4
  int v9; // xmm1_4
  int v10; // xmm4_4
  int v11; // xmm2_4
  int v12; // xmm0_4
  int v13; // eax

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x22u, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 328);
    if ( v7 )
      v7 = *(_QWORD *)(v7 + 16);
    v8 = *(_DWORD *)(v7 + 560);
    v6 = 0;
    v9 = *(_DWORD *)(v7 + 556);
    v10 = *(_DWORD *)(v7 + 544);
    v11 = *(_DWORD *)(v7 + 540);
    v12 = *(_DWORD *)(v7 + 536);
    v13 = *(_DWORD *)(a1 + 316);
    *(_DWORD *)(a1 + 488) = v9;
    *(_DWORD *)(a1 + 484) = v8;
    *(_DWORD *)(a1 + 544) = v12;
    *(_DWORD *)(a1 + 548) = v11;
    *(_DWORD *)(a1 + 552) = v10;
    *(_DWORD *)(a1 + 444) = v13;
  }
  return v6;
}
