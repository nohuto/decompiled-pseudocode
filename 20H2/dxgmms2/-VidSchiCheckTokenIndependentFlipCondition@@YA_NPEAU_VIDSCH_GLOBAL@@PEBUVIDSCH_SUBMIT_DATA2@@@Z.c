/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002A590
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0001264 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00013A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v4; // r8
  bool v5; // zf
  int v6; // eax
  char v7; // dl
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v14; // rax

  if ( (*(_DWORD *)a2 & 0x1000000) == 0 || (*((_DWORD *)a2 + 1) & 1) != 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v14[3] = *((_QWORD *)a2 + 13);
    v14[4] = *((unsigned int *)a2 + 28);
    v14[5] = *((_DWORD *)a2 + 1) & 1;
  }
  else
  {
    v4 = *((unsigned int *)a2 + 29);
    v5 = !_BitScanForward((unsigned int *)&v6, *((_DWORD *)a2 + 144) & 0x3FF);
    v7 = -1;
    if ( !v5 )
      v7 = v6;
    v8 = 0;
    if ( v7 != -1 )
      v8 = v7;
    v9 = 216LL * (unsigned int)v8;
    v10 = *((_QWORD *)a1 + v4 + 388);
    v11 = *(int *)(v9 + v10 + 172);
    if ( (int)v11 <= -1 )
      v12 = 0LL;
    else
      v12 = *((_QWORD *)a1 + 404) + 152 * v11;
    if ( !v12 )
      return 0;
    if ( *(_DWORD *)v12 == *((_DWORD *)a2 + 38) )
    {
      v10 = *((unsigned int *)a2 + 39);
      if ( *(_DWORD *)(v12 + 4) == (_DWORD)v10 )
      {
        v10 = *((_QWORD *)a2 + 20);
        if ( *(_QWORD *)(v12 + 8) == v10 )
        {
          v10 = *((_QWORD *)a2 + 21);
          if ( *(_QWORD *)(v12 + 88) == v10 )
            return 1;
        }
      }
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v10, v12);
    v14[3] = *((_QWORD *)a2 + 13);
    v14[4] = *((unsigned int *)a2 + 28);
    v14[5] = *((_QWORD *)a2 + 19);
    v14[6] = *((_QWORD *)a2 + 20);
    v14[7] = *((_QWORD *)a2 + 21);
  }
  WdLogEvent5_WdPresentTokenEvent(v14);
  return 0;
}
