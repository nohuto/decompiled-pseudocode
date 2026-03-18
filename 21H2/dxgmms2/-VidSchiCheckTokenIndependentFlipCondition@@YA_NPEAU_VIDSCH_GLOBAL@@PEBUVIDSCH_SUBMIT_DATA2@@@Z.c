/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001A344
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  char v4; // cl
  __int64 v5; // r8
  char v6; // dl
  unsigned int v8; // eax
  __int64 v9; // rax
  _QWORD *v11; // rdx

  if ( (*(_DWORD *)a2 & 0x1000000) == 0 || (*((_DWORD *)a2 + 1) & 1) != 0 )
  {
    WdLogSingleEntry3(8LL, *((_QWORD *)a2 + 13), *((unsigned int *)a2 + 28), *((_DWORD *)a2 + 1) & 1);
    return 0;
  }
  v4 = -1;
  v5 = *((unsigned int *)a2 + 29);
  v8 = *((_DWORD *)a2 + 150) & 0x3FF;
  v6 = 0;
  if ( _BitScanForward(&v8, v8) )
    v4 = v8;
  if ( v4 != -1 )
    v6 = v4;
  v9 = *(int *)(280LL * (unsigned int)v6 + *((_QWORD *)a1 + v5 + 400) + 180);
  if ( (int)v9 <= -1 )
    return 0;
  v11 = (_QWORD *)(*((_QWORD *)a1 + 416) + 160 * v9);
  if ( !v11 )
    return 0;
  if ( *v11 != *(_QWORD *)((char *)a2 + 156) || v11[1] != *((_QWORD *)a2 + 21) || v11[11] != *((_QWORD *)a2 + 22) )
  {
    WdLogSingleEntry5(
      8LL,
      *((_QWORD *)a2 + 13),
      *((unsigned int *)a2 + 28),
      *(_QWORD *)((char *)a2 + 156),
      *((_QWORD *)a2 + 21),
      *((_QWORD *)a2 + 22));
    return 0;
  }
  return 1;
}
