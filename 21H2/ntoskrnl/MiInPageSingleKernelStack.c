/*
 * XREFs of MiInPageSingleKernelStack @ 0x140295F90
 * Callers:
 *     KiInSwapKernelStacks @ 0x140295A0C (KiInSwapKernelStacks.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029645C (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1402964B8 (MiSetPfnKernelStack.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiKernelStackVaToStackNode @ 0x14038C2E4 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x1405360AC (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x140546D80 (MiLogKernelStackEvent.c)
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
  ULONG_PTR v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ebx
  ULONG_PTR v17; // r13
  ULONG_PTR v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rbx
  int v23; // edi
  __int64 v24; // rax
  __int64 v25; // rbx
  struct _LIST_ENTRY *Flink; // r8
  _QWORD *v27; // rbx
  void *result; // rax
  __int64 v29; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int16 v39; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v44; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v47; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v48; // [rsp+70h] [rbp-90h]
  unsigned __int64 v49; // [rsp+78h] [rbp-88h]
  _QWORD *v50; // [rsp+80h] [rbp-80h]
  _QWORD v51[12]; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v52; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-8h] BYREF

  v50 = a2;
  memset(v51, 0, sizeof(v51));
  v39 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 146LL);
  v4 = *a2;
  v5 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = v5;
  v6 = (((unsigned __int64)(v4 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v48 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  if ( v48 == &MiSystemPartition )
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
  v41 = MiSwizzleInvalidPte(768LL);
  v12 = MiSwizzleInvalidPte(992LL);
  v13 = v5;
  if ( v5 <= v6 )
  {
    v14 = &v53;
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v13);
      if ( v15 == v12 || v15 == v10 || v15 == v41 || (v15 & 0x800) != 0 )
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
            MiPrefetchVirtualMemory(v8, (__int64)&v52, 1LL, 45);
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
  v42 = 0LL;
  v17 = ((v11 + v39) << 57) | 2;
  v18 = (__int64)(v6 << 25) >> 16;
  v47 = v17;
  v49 = v11 | (unsigned __int64)v51;
  v53 = 4096LL;
  while ( v6 >= v44 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v6) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, a1, 0LL);
    v52 = v18;
    v51[3] = 0LL;
    v51[4] = 0LL;
    LOWORD(v51[0]) = 4;
    v51[1] = &v52;
    v51[2] = 1LL;
    v51[5] = a1;
    MmAccessFault(v17, v18);
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      v23 = MiPteInShadowRange(&v43);
      while ( 1 )
      {
        v24 = MI_READ_PTE_LOCK_FREE(v6);
        v43 = v24;
        v19 = v24;
        v25 = v24;
        if ( v23 )
        {
          if ( (MiFlags & 0xC00000) == 0 || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
          {
            v19 = v24;
          }
          else
          {
            v19 = v24;
            if ( (v24 & 1) != 0 && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v19 = v24;
                v29 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v43 >> 3) & 0x1FF));
                if ( (v29 & 0x20) != 0 )
                  v19 = v25 | 0x20;
                if ( (v29 & 0x42) != 0 )
                  v19 |= 0x42uLL;
              }
              else
              {
                v19 = v43;
              }
            }
          }
        }
        v20 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v21 = (unsigned __int8)MiLockPageInline(v20);
        if ( v25 == MI_READ_PTE_LOCK_FREE(v6) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
              v34 = (v33 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v33;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v21);
      }
      MiSetPfnKernelStack(v20, a1);
      *(_QWORD *)(v20 + 40) = *(_QWORD *)(v20 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
      *(_BYTE *)(v20 + 35) = *(_BYTE *)(v20 + 35) & 0xF8 | 5;
      v22 = MiReleaseWsSwapReservationPfn(v20);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = v47;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v34 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v21);
      if ( v22 )
        MiReleasePageFileInfo((__int64)v48, v22, 0);
      v6 -= 8LL;
      v18 -= 4096LL;
      v16 = ++v42;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v18 + 4096, v16, 1LL);
  v27 = v50;
  result = (void *)v50[2];
  if ( *((_QWORD *)result - 1) != a1 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v27[2] - 8LL), 0LL, v27[2]);
  }
  return result;
}
