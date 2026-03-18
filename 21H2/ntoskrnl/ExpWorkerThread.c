/*
 * XREFs of ExpWorkerThread @ 0x14033CBF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceThreadWorkItem @ 0x14062E6D0 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *BugCheckParameter4; // rbx
  __int64 *v3; // r13
  unsigned __int16 *v4; // rdi
  char v5; // r12
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rbp
  int v9; // ecx
  void (__fastcall *v10)(const void *); // r14
  const void *v11; // r15
  unsigned int Queue; // eax
  __int64 v13; // rdi
  unsigned __int16 Count; // r8
  __int64 v15; // r11
  unsigned int v16; // edx
  _KAFFINITY_EX *UserAffinity; // r9
  _KAFFINITY_EX *v18; // r10
  unsigned __int16 v19; // ax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  signed __int32 v25; // eax
  int v26; // edx
  signed __int32 v27; // r8d
  unsigned int v28; // edx
  bool v29; // di
  BOOLEAN result; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v32; // ecx
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-1E8h] BYREF
  int v36; // [rsp+30h] [rbp-1B8h]
  unsigned __int16 *v37; // [rsp+38h] [rbp-1B0h]
  __int128 v38; // [rsp+40h] [rbp-1A8h]
  __int64 v39; // [rsp+50h] [rbp-198h] BYREF
  __int64 v40; // [rsp+58h] [rbp-190h]
  struct _KTHREAD *v41; // [rsp+60h] [rbp-188h]
  __int64 v42; // [rsp+68h] [rbp-180h]
  __int128 v43; // [rsp+70h] [rbp-178h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v45[34]; // [rsp+90h] [rbp-158h] BYREF
  unsigned int v46; // [rsp+1E0h] [rbp-8h]

  v1 = a1;
  v42 = a1;
  PreviousAffinity = 0LL;
  memset(v45, 0, 0x108uLL);
  BugCheckParameter4 = KeGetCurrentThread();
  v3 = &v39;
  v4 = *(unsigned __int16 **)(v1 + 696);
  v39 = 0LL;
  v5 = 1;
  v40 = *(_QWORD *)(v1 + 688);
  v6 = *((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3);
  v41 = BugCheckParameter4;
  v37 = v4;
  if ( (v6 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) = v6 | 1;
  _InterlockedOr(v35, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_4:
    while ( 1 )
    {
      v7 = KeRemovePriQueue(v1, 0LL, 0LL, v3);
      v8 = (_QWORD *)v7;
      if ( !v5 )
        break;
      v5 = 0;
      *(_DWORD *)(v1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(v1 + 712), 0xFFFFBFFF);
      v3 = 0LL;
      if ( v7 != 258 )
      {
LABEL_6:
        if ( v7 == 128 )
          goto LABEL_43;
        v9 = *(_DWORD *)(v1 + 712);
        if ( v9 < (2 * *(_DWORD *)(v1 + 716)) >> 1
          || v9 < *(_DWORD *)(v1 + 720)
          && *(_QWORD *)(v1 + 8) == v1 + 8
          && (*(_DWORD *)(v1 + 4) || *(int *)(v1 + 716) < 0) )
        {
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 8LL * *v4) + 16LL), 0, 0);
        }
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 704));
        v10 = (void (__fastcall *)(const void *))v8[2];
        v11 = (const void *)v8[3];
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(v8[2], 1344LL);
          v10(v11);
          EtwTraceThreadWorkItem(v10, 1345LL);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))v8[2])(v8[3]);
        }
        if ( (KeGetPcr()->Prcb.BpbRetpolineState & 1) != 0 )
        {
          _disable();
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = v46 >> 9;
          CurrentPrcb->BpbRetpolineState &= ~1u;
          if ( (v32 & 1) != 0 )
            _enable();
        }
        if ( BugCheckParameter4->MutantListHead.Flink != &BugCheckParameter4->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)v8, 0LL);
        if ( BugCheckParameter4->WaitBlock[3].SpareLong )
          KeBugCheckEx(
            1u,
            (ULONG_PTR)v10,
            BugCheckParameter4->ApcStateIndex,
            BugCheckParameter4->CombinedApcDisable,
            1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v10, KeGetCurrentIrql(), (ULONG_PTR)v11, (ULONG_PTR)v8);
        if ( (*(_DWORD *)(&BugCheckParameter4[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)v8, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)BugCheckParameter4->Process,
            (ULONG_PTR)BugCheckParameter4->ApcState.Process,
            BugCheckParameter4->ApcStateIndex,
            (ULONG_PTR)BugCheckParameter4);
        if ( BugCheckParameter4[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)v8, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(BugCheckParameter4) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(BugCheckParameter4);
          KeBugCheckEx(0x128u, (ULONG_PTR)v10, IoPriorityThread, (ULONG_PTR)v11, (ULONG_PTR)v8);
        }
        if ( (unsigned int)PsGetPagePriorityThread(BugCheckParameter4) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(BugCheckParameter4);
          KeBugCheckEx(0x129u, (ULONG_PTR)v10, PagePriorityThread, (ULONG_PTR)v11, (ULONG_PTR)v8);
        }
        Queue = (unsigned int)BugCheckParameter4[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v10, (Queue >> 9) & 7, (ULONG_PTR)v11, (ULONG_PTR)v8);
        if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 0x800) != 0 )
          KeBugCheckEx(
            0x1D6u,
            (ULONG_PTR)v10,
            (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) >> 11) & 1,
            (ULONG_PTR)v11,
            (ULONG_PTR)v8);
        if ( (BugCheckParameter4->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v10,
            v11,
            v8);
          PreviousAffinity = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        LODWORD(v45[0]) = 2097153;
        memset((char *)v45 + 4, 0, 0x104uLL);
        v13 = *v4;
        v38 = 0LL;
        v43 = 0LL;
        memset(&v45[1], 0, sizeof(_QWORD));
        Count = 1;
        if ( (unsigned __int16)v13 < (unsigned __int16)KeNumberNodes )
        {
          _mm_lfence();
          v15 = KeNodeBlock[v13];
          v38 = (unsigned __int64)v15;
          v16 = *(_DWORD *)(v15 + 16);
          DWORD2(v38) = v16;
LABEL_27:
          Count = v45[0];
          while ( v16 )
          {
            _BitScanForward((unsigned int *)&v20, v16);
            v43 = 0LL;
            v36 = v20;
            v21 = ~(1 << v20);
            v22 = *(_QWORD *)(v15 + 8 * v20 + 24);
            v16 &= v21;
            v23 = *(unsigned __int16 *)(v22 + 136);
            v24 = *(_QWORD *)(v22 + 128);
            *(_QWORD *)&v43 = v24;
            WORD4(v43) = v23;
            if ( LOWORD(v45[0]) > (unsigned __int16)v23 )
              goto LABEL_39;
            if ( WORD1(v45[0]) > (unsigned __int16)v23 )
            {
              LOWORD(v45[0]) = v23 + 1;
LABEL_39:
              v45[v23 + 1] |= v24;
              goto LABEL_27;
            }
          }
          BugCheckParameter4 = v41;
          v1 = v42;
          DWORD2(v38) = 0;
        }
        UserAffinity = BugCheckParameter4->UserAffinity;
        if ( Count < UserAffinity->Count )
        {
          v18 = BugCheckParameter4->UserAffinity;
        }
        else
        {
          v18 = (_KAFFINITY_EX *)v45;
          Count = UserAffinity->Count;
        }
        v19 = 0;
        if ( Count )
        {
          while ( v45[v19 + 1] == UserAffinity->Bitmap[v19] )
          {
            if ( ++v19 >= Count )
              goto LABEL_35;
          }
          goto LABEL_67;
        }
LABEL_35:
        if ( v19 < v18->Count )
        {
          while ( !v18->Bitmap[v19] )
          {
            if ( ++v19 >= v18->Count )
              goto LABEL_36;
          }
LABEL_67:
          KeSetUserAffinityThread((__int64)BugCheckParameter4, (__int64)v45);
        }
LABEL_36:
        v4 = v37;
        if ( BugCheckParameter4[1].WaitBlock[1].WaitListEntry.Flink )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v10,
            v11,
            v8);
          KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
        }
      }
    }
    if ( v7 != 258 )
      goto LABEL_6;
LABEL_43:
    ;
  }
  while ( (*(_DWORD *)(v1 + 712) & 0x8000) == 0
       && (*(struct _KTHREAD **)&BugCheckParameter4[1].SystemCallNumber != (struct _KTHREAD *)&BugCheckParameter4[1].SystemCallNumber
        || *(_DWORD *)(v1 + 4)) );
  _m_prefetchw((const void *)(v1 + 712));
  v25 = *(_DWORD *)(v1 + 712);
  do
  {
    v26 = (v25 & 0x3FFF) - 1;
    v27 = v25;
    if ( v26 < (2 * *(_DWORD *)(v1 + 716)) >> 1 && (v25 & 0x8000) == 0 )
      goto LABEL_4;
    v28 = v25 & 0xFFFFC000 | v26;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 712), v28, v25);
  }
  while ( v25 != v27 );
  v29 = v28 == 0x8000;
  if ( *(struct _KTHREAD **)&BugCheckParameter4[1].SystemCallNumber != (struct _KTHREAD *)&BugCheckParameter4[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)BugCheckParameter4, 0LL, 0LL);
  *((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v29 )
    return KeSetEvent(*(PRKEVENT *)(v1 + 728), 0, 0);
  return result;
}
