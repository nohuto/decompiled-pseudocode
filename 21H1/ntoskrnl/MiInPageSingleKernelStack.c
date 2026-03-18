/*
 * XREFs of MiInPageSingleKernelStack @ 0x140329D10
 * Callers:
 *     KiInSwapKernelStacks @ 0x140329928 (KiInSwapKernelStacks.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14032A1DC (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x14032A238 (MiSetPfnKernelStack.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiKernelStackVaToStackNode @ 0x140388834 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x14053034C (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x140541020 (MiLogKernelStackEvent.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r15
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r10
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ebx
  ULONG_PTR v17; // r13
  signed __int64 v18; // r15
  ULONG_PTR v19; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rbx
  BOOL v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v29; // rbx
  _QWORD *v30; // rbx
  void *result; // rax
  __int64 v32; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  unsigned __int16 v42; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v47; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v50; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v51; // [rsp+70h] [rbp-90h]
  unsigned __int64 v52; // [rsp+78h] [rbp-88h]
  _QWORD *v53; // [rsp+80h] [rbp-80h]
  _QWORD v54[12]; // [rsp+90h] [rbp-70h] BYREF
  signed __int64 v55; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-8h] BYREF

  v53 = a2;
  memset(v54, 0, sizeof(v54));
  v42 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 146LL);
  v4 = *a2;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = v5;
  v6 = (((unsigned __int64)(v4 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v51 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  if ( v51 == &MiSystemPartition )
  {
    P = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v4 - 1);
    P = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v7);
  BugCheckParameter1 = 0LL;
  v10 = MiSwizzleInvalidPte(128LL);
  if ( v9 != v10 )
    BugCheckParameter1 = (v9 & 0x800) == 0;
  v44 = MiSwizzleInvalidPte(768LL);
  v12 = MiSwizzleInvalidPte(992LL);
  v13 = v5;
  if ( v5 <= v6 )
  {
    v14 = &v56;
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v13);
      if ( v15 == v12 || v15 == v10 || v15 == v44 || (v15 & 0x800) != 0 )
      {
        v11 = 1LL;
      }
      else
      {
        v11 = 1LL;
        *v14 = 4096LL;
        ++v8;
        *(v14 - 1) = (__int64)(v13 << 25) >> 16;
        v14 += 2;
        if ( v8 == 18 )
        {
LABEL_10:
          if ( v8 > 1 )
          {
            MiPrefetchVirtualMemory(v8, (__int64)&v55, 1LL, 45);
            v11 = 1LL;
          }
          break;
        }
      }
      v13 += 8LL;
      if ( v13 > v6 )
        goto LABEL_10;
    }
  }
  v16 = 0;
  v45 = 0LL;
  v17 = ((v11 + v42) << 57) | 2;
  v18 = (__int64)(v6 << 25) >> 16;
  v19 = v11 | (unsigned __int64)v54;
  v50 = v17;
  v52 = v11 | (unsigned __int64)v54;
  v56 = 4096LL;
  while ( v6 >= v47 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v6) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, a1, 0LL);
    v55 = v18;
    v54[3] = 0LL;
    v54[4] = 0LL;
    LOWORD(v54[0]) = 4;
    v54[1] = &v55;
    v54[2] = 1LL;
    v54[5] = a1;
    MmAccessFault(v17, v18, 0, v19);
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      v25 = MiPteInShadowRange((unsigned __int64)&v46);
      while ( 1 )
      {
        v26 = MI_READ_PTE_LOCK_FREE(v6);
        v46 = v26;
        v20 = v26;
        v29 = v26;
        if ( v25 )
        {
          v27 = v26;
          if ( (MiFlags & 0xC00000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
          {
            v20 = v26;
          }
          else
          {
            v20 = v26;
            if ( (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v20 = v26;
                v32 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v46 >> 3) & 0x1FF));
                if ( (v32 & 0x20) != 0 )
                  v20 = v29 | 0x20;
                if ( (v32 & 0x42) != 0 )
                  v20 |= 0x42uLL;
              }
              else
              {
                v20 = v46;
              }
            }
          }
        }
        v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v22 = (unsigned __int8)MiLockPageInline(v21, v27, Flink);
        if ( v29 == MI_READ_PTE_LOCK_FREE(v6) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v37 = (v36 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v36;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v22);
      }
      MiSetPfnKernelStack(v21, a1);
      *(_QWORD *)(v21 + 40) = *(_QWORD *)(v21 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
      *(_BYTE *)(v21 + 35) = *(_BYTE *)(v21 + 35) & 0xF8 | 5;
      v24 = MiReleaseWsSwapReservationPfn(v21, v23);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = v50;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v37 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v22);
      if ( v24 )
        MiReleasePageFileInfo(v51, v24, 0LL);
      v6 -= 8LL;
      v19 = v52;
      v18 -= 4096LL;
      v16 = ++v45;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v18 + 4096, v16, 1LL);
  v30 = v53;
  result = (void *)v53[2];
  if ( *((_QWORD *)result - 1) != a1 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v30[2] - 8LL), 0LL, v30[2]);
  }
  return result;
}
