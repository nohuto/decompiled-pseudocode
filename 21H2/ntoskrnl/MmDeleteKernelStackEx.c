/*
 * XREFs of MmDeleteKernelStackEx @ 0x1402C1900
 * Callers:
 *     PspDeleteKernelStack @ 0x140246B70 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F4850 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x1403A0B28 (MmDeleteKernelStack.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x14056FB90 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiEnableOptionalXStateFeatures @ 0x14056FE5C (KiEnableOptionalXStateFeatures.c)
 *     KeUninitThread @ 0x1406E90B4 (KeUninitThread.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AD99C (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     MiClearStackOwners @ 0x140231FC0 (MiClearStackOwners.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1405A5768 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStackEx(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  ULONG_PTR *v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  struct _KPRCB *v18; // rdx
  __int64 v19; // rcx
  signed __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 i; // rcx
  int *v23; // rdi
  __int64 v24; // rbx
  unsigned __int8 v25; // r15
  _DWORD *v26; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v31; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v48; // [rsp+88h] [rbp+10h]
  unsigned int v49; // [rsp+90h] [rbp+18h]
  __int64 v50; // [rsp+98h] [rbp+20h] BYREF

  v48 = a2;
  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = 18LL;
  }
  else if ( (a2 & 8) != 0 )
  {
    v7 = 3LL;
  }
  else
  {
    v7 = (unsigned __int8)byte_140C5304C;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v4 & 2) != 0 )
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v7 << 12), v7, 0LL);
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( a3 )
    v9 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  else
    v9 = &MiSystemPartition;
  if ( v6 )
    return MiDeleteKernelStack(v8, v4);
  v10 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v28 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
      if ( (v28 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v28 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  v50 = v10;
  v11 = MI_READ_PTE_LOCK_FREE(&v50);
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v13 = 0;
  v14 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
        + 2);
  if ( (v4 & 8) != 0 )
    v13 = 2;
  v49 = v13;
  if ( (v4 & 4) == 0 )
    goto LABEL_29;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v47);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v16 = MI_READ_PTE_LOCK_FREE(v8);
    if ( v50 == v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v33 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v50 = MI_READ_PTE_LOCK_FREE(v8);
    v34 = MI_READ_PTE_LOCK_FREE(&v50);
    v12 = 48 * ((v34 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v14 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v34 >> 12) & 0xFFFFFFFFFFLL)) >> 4))
          + 2);
  }
  if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFELL) != 0 )
    v17 = 8 * (*(_QWORD *)v12 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v17 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = v48;
  v13 = v49;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v33 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v17 != -32LL
    || (v18 = KeGetCurrentPrcb(), v13 = 1, v18->SchedulerSubNode->Affinity.Reserved[0] != v14)
    || v18->CachedStack
    || v9 != &MiSystemPartition
    || (v19 = (__int64)(v8 << 25) >> 16,
        *(_QWORD *)(v19 + 4064) = v19 ^ qword_140C53430,
        *(_DWORD *)(v19 + 4088) = 1,
        (result = _InterlockedCompareExchange64((volatile signed __int64 *)&v18->CachedStack, v19 + 4080, 0LL)) != 0) )
  {
LABEL_29:
    for ( i = v13; ; i = 0LL )
    {
      v23 = (int *)(v9[2] + 32 * (766LL * v14 + i + 718));
      if ( *(unsigned __int16 *)v23 < v23[4] )
        break;
      if ( v13 != 1 )
        return MiDeleteKernelStack(v8, v4);
      v13 = 0;
    }
    v24 = (__int64)(v8 << 25) >> 16;
    *(_QWORD *)(v24 + 4064) = v24 ^ qword_140C53430;
    *(_DWORD *)(v24 + 4088) = v13;
    if ( v13 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v23, (PSLIST_ENTRY)(v24 + 4080));
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v26 = KeGetCurrentPrcb()->SchedulerAssist;
      v26[5] |= (-1 << (v25 + 1)) & 4;
    }
    if ( (unsigned int)MiClearStackOwners(v8, v4) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v23, (PSLIST_ENTRY)(v24 + 4080));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v43 = KeGetCurrentIrql();
          if ( v43 <= 0xFu && v25 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (v25 + 1));
            v33 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v44);
          }
        }
      }
      result = v25;
      __writecr8(v25);
      return result;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && v25 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v33 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(v25);
    return MiDeleteKernelStack(v8, v4);
  }
  return result;
}
