/*
 * XREFs of MiInitializePfn @ 0x14033C880
 * Callers:
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiCreateSharedZeroPages @ 0x14033C5F0 (MiCreateSharedZeroPages.c)
 *     MiInitializeProtoPfn @ 0x1405C4A48 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rbx
  char v9; // di
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  signed __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // rbx
  unsigned int Queue; // edi
  unsigned int v23; // edi
  unsigned __int8 v24; // r13
  unsigned __int8 v25; // cl
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  unsigned __int64 result; // rax
  __int64 v29; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // rax
  struct _LIST_ENTRY *v32; // rax
  __int64 v33; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  signed __int64 v39; // [rsp+48h] [rbp-70h]
  signed __int64 v40; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+C0h] [rbp+8h] BYREF
  int v42; // [rsp+D0h] [rbp+18h] BYREF
  int v43; // [rsp+D8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v9 = a3;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v31 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v31 & 0x20) != 0 )
        v4 |= 0x20uLL;
      if ( (v31 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v29 = 32LL * (v9 & 0x1F);
    if ( v4 )
      v4 = v29 | v4 & 0xFFFFFFFFFFFFFC1FuLL;
    else
      v4 = MiSwizzleInvalidPte(v29);
  }
  v10 = -9LL;
  if ( (v4 & 0x400) != 0 )
    v10 = -2049LL;
  v11 = v4 & v10;
  *(_QWORD *)(a1 + 16) = v11;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)a1 &= 0xFFFFFFFFFFFFC00FuLL;
    *(_QWORD *)(a1 + 16) = v11 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v12 = 1;
  if ( a3 )
  {
    if ( a3 != 31 )
    {
      if ( a3 >> 3 == 3 )
      {
        if ( (a3 & 7) != 0 )
          v12 = 2;
      }
      else
      {
        v12 = a3 >> 3 != 1;
      }
    }
  }
  else
  {
    v12 = 3;
  }
  *(_WORD *)(a1 + 32) = 1;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = *(_QWORD *)v13;
  if ( MiPteInShadowRange(v13)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v32 )
    {
      v33 = *((_QWORD *)&v32->Flink + ((v13 >> 3) & 0x1FF));
      if ( (v33 & 0x20) != 0 )
        v14 |= 0x20uLL;
      if ( (v33 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
  }
  v41 = v14;
  v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41);
  v17 = 0xFFFFFF0000000000uLL;
  v18 = (v15 >> 12) & 0xFFFFFFFFFFLL;
  v39 = *(_QWORD *)(a1 + 40);
  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v18 | v39 & 0xFFFFFF0000000000uLL, v39);
  if ( v39 != v19 )
  {
    do
    {
      v40 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v18 | v19 & 0xFFFFFF0000000000uLL, v19);
    }
    while ( v40 != v19 );
  }
  CurrentThread = KeGetCurrentThread();
  v21 = 48 * v18 - 0x220000000000LL;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    v23 = Queue >> 9;
  else
    LOBYTE(v23) = PsGetPagePriorityThread(CurrentThread);
  v24 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v42 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42, v18, v17, v16);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v24 = MiLockPageInline(a1);
    }
  }
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v43, v18, v17, v16);
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  *(_QWORD *)(v21 + 24) ^= ((*(_QWORD *)(v21 + 24) + 1LL) ^ *(_QWORD *)(v21 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = *(_BYTE *)(a1 + 34);
  if ( v25 >> 6 != v12 )
  {
    MiChangePageAttribute(a1, v12, 1);
    v25 = *(_BYTE *)(a1 + 34);
  }
  v26 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 35) ^= (*(_BYTE *)(a1 + 35) ^ v23) & 7;
  v27 = v25 & 0xF8 | 6;
  *(_QWORD *)(a1 + 8) = a2;
  result = v26 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  *(_BYTE *)(a1 + 34) = v27;
  if ( (a4 & 0x20) == 0 )
  {
    result = v27;
    LOBYTE(result) = v27 | 0x10;
    *(_BYTE *)(a1 + 34) = v27 | 0x10;
  }
  if ( (a4 & 0x40) != 0 )
    *(_BYTE *)(a1 + 35) |= 0x20u;
  if ( (a4 & 1) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a4 & 0x10) == 0 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v24 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (v24 + 1));
            v38 = (v37 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v37;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v24;
      __writecr8(v24);
    }
  }
  return result;
}
