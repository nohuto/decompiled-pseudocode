/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C002FB08
 * Callers:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0031F58 (VidSchiTryEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C003494C (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002970 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0013758 (VidSchiSignalRegisteredEvent.c)
 */

void __fastcall VidSchiFlushPendingTokenList(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // rsi
  bool v9; // bp
  char *v10; // rbx
  void **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v6 = *(int *)(*((_QWORD *)a2 + a3 + 388) + 216LL * a4 + 172);
  if ( (int)v6 <= -1 )
    v7 = 0LL;
  else
    v7 = *((_QWORD *)a2 + 404) + 152 * v6;
  v8 = (void **)(v7 + 120);
  v9 = *(_DWORD *)(v7 + 112) == 3;
  while ( 1 )
  {
    v10 = (char *)*v8;
    if ( *v8 == v8 )
      break;
    if ( *((void ***)v10 + 1) != v8 || (v11 = *(void ***)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *v8 = v11;
    v11[1] = v8;
    v12 = WdLogNewEntry5_WdPresentTokenEvent(a1, v6);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)v10 + 19);
    WdLogEvent5_WdPresentTokenEvent(v12);
    VidSchiProcessPresentHistoryToken(
      a2,
      a1,
      *((struct _VIDSCH_CONTEXT **)v10 + 3),
      *((struct VIDSCH_HW_QUEUE **)v10 + 4),
      *((struct _VIDSCH_DEVICE **)v10 + 5),
      (struct VIDSCH_SUBMIT_DATA2 *)(v10 + 48),
      *(union _ULARGE_INTEGER *)(v10 + 16),
      0,
      v9);
    --*((_DWORD *)a2 + 199);
    v13 = *((_QWORD *)v10 + 3);
    if ( v13 )
      --*(_DWORD *)(v13 + 792);
    v14 = *((_QWORD *)v10 + 5);
    if ( v14 )
    {
      --*(_DWORD *)(v14 + 1576);
      VidSchiSignalRegisteredEvent((__int64)a2, (struct _KEVENT **)(*((_QWORD *)v10 + 5) + 136LL));
    }
    VidSchiSignalRegisteredEvent((__int64)a2, (struct _KEVENT **)a2 + 207);
    ExFreePoolWithTag(v10, 0x30626956u);
  }
}
