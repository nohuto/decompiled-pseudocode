/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C002A774
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000282C (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002970 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0031F58 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax

  if ( a2 == -1 )
    return 0;
  v3 = 216LL * a3;
  v4 = *((_QWORD *)a1 + a2 + 388);
  v5 = *(int *)(v4 + v3 + 172);
  if ( (int)v5 <= -1 )
    v6 = 0LL;
  else
    v6 = *((_QWORD *)a1 + 404) + 152 * v5;
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 112);
    if ( v7 == 1 )
    {
      if ( !*(_BYTE *)(v6 + 98) || *(_DWORD *)(v4 + v3 + 176) || !*(_BYTE *)(v6 + 96) || *(_DWORD *)(v4 + v3 + 180) )
        return 0;
    }
    else if ( v7 != 2 )
    {
      return 0;
    }
  }
  return 1;
}
