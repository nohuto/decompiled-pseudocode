/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0011348
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1C006DEEC (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x1C007FE90 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C0081460 (VidSchSetPriorityContext.c)
 *     VidSchSubmitGlobalCommand @ 0x1C008DD04 (VidSchSubmitGlobalCommand.c)
 *     VidSchSetAbsolutePriorityContext @ 0x1C00D2790 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C0013828 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0013934 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024A48 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002CE94 (-VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiSetPriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 QuadPart; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  if ( *((_DWORD *)a1 + 100) != (_DWORD)v4 )
  {
    v8 = *((unsigned int *)a1 + 101);
    v9 = (_QWORD *)gulPriorityToPriorityClass[v4];
    *((_DWORD *)a1 + 101) = gulPublicPriorityToSchedulingPriority[v4];
    *((_DWORD *)a1 + 100) = v4;
    *((_QWORD *)a1 + 59) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2536);
    *((_QWORD *)a1 + 60) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2584);
    if ( (*((_DWORD *)a1 + 46) & 2) == 0 )
      *((_QWORD *)a1 + 55) = *((_QWORD *)a1 + 59);
    if ( (_DWORD)v8 != *((_DWORD *)a1 + 101) )
    {
      if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
      {
        v14 = (_QWORD *)((char *)a1 + 8);
        v15 = *((_QWORD *)a1 + 1);
        if ( *(struct _VIDSCH_CONTEXT **)(v15 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
          || (v16 = (_QWORD *)*((_QWORD *)a1 + 2), (_QWORD *)*v16 != v14)
          || (*v16 = v15,
              *(_QWORD *)(v15 + 8) = v16,
              VidSchiUpdateReadyBitsInNewPriority((struct _VIDSCH_NODE *)v2, a1),
              v17 = v2 + 16 * (*((unsigned int *)a1 + 101) + 128LL),
              v9 = *(_QWORD **)(v17 + 8),
              *v9 != v17) )
        {
          __fastfail(3u);
        }
        *v14 = v17;
        *((_QWORD *)a1 + 2) = v9;
        *v9 = v14;
        *(_QWORD *)(v17 + 8) = v14;
        if ( *(_QWORD *)(v2 + 16 * (v8 + 128)) == v2 + 16 * (v8 + 128) )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1760) &= ~(1 << v8);
        }
        v5 = 1;
      }
      if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *((unsigned int *)a1 + 101) + 1768);
        v11 = *((unsigned int *)a1 + 101);
        if ( *(_DWORD *)(v2 + 4 * v11 + 1768) == 1 )
        {
          LODWORD(v9) = *((_DWORD *)a1 + 101);
          *(_DWORD *)(v2 + 1764) |= 1 << v11;
        }
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1768))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1764) &= ~(1 << v8);
        }
        if ( *(struct _VIDSCH_CONTEXT **)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560) == a1 )
        {
          PerformanceFrequency.QuadPart = 0LL;
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
          VidSchiStopExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, v8, QuadPart, PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *((_DWORD *)a1 + 101), QuadPart);
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v10 = *((_QWORD *)a1 + 7);
        if ( !v10 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v10) = (_DWORD)a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(
            (_DWORD)v9,
            (unsigned int)&EventChangePriority,
            v7,
            v10,
            *((_DWORD *)a1 + 100),
            *((_DWORD *)a1 + 101));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1208) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1176), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
