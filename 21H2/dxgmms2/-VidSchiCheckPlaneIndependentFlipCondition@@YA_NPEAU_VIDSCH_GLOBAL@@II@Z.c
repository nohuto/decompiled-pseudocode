/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001A274
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001A22C (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v7; // rcx
  int v8; // eax

  if ( a2 == -1 )
    return 0;
  v3 = 280LL * a3;
  v4 = *((_QWORD *)a1 + a2 + 400);
  v5 = *(int *)(v4 + v3 + 180);
  if ( (int)v5 <= -1 )
    return 1;
  v7 = *((_QWORD *)a1 + 416) + 160 * v5;
  if ( !v7 )
    return 1;
  v8 = *(_DWORD *)(v7 + 112);
  if ( v8 == 1 )
    return *(_BYTE *)(v7 + 98) && !*(_DWORD *)(v4 + v3 + 184) && *(_BYTE *)(v7 + 96) && !*(_DWORD *)(v4 + v3 + 188);
  return v8 == 2;
}
