/*
 * XREFs of MiInitializePfn @ 0x1402E6250
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiInitializeProtoPfn @ 0x1405551D0 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePfn(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  __int64 v4; // rbx
  char v9; // di
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r13d
  unsigned __int64 *v17; // rdi
  unsigned __int64 v18; // rbx
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v27; // rbx
  unsigned int Queue; // r15d
  unsigned int v29; // r15d
  unsigned __int8 v30; // di
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  char v33; // cl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  int v40; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp+10h] BYREF
  int v42; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a2;
  v9 = a3;
  if ( (unsigned int)MiPteInShadowRange(a2)
    && (unsigned int)MiPteHasShadow()
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a2 >> 3) & 0x1FF));
      v12 = v4 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v4;
      v4 = v12;
      if ( (v11 & 0x42) != 0 )
        v4 = v12 | 0x42;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v13 = 32LL * (v9 & 0x1F);
    if ( v4 )
      v4 = v13 | v4 & 0xFFFFFFFFFFFFFC1FuLL;
    else
      v4 = MiSwizzleInvalidPte(v13);
  }
  v14 = -9LL;
  if ( (v4 & 0x400) != 0 )
    v14 = -2049LL;
  v15 = v4 & v14;
  *(_QWORD *)(a1 + 16) = v15;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)a1 &= 0xFFFFFFFFFFFFC00FuLL;
    *(_QWORD *)(a1 + 16) = v15 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v16 = MiProtectionToCacheAttribute(a3);
  *(_WORD *)(a1 + 32) = 1;
  v17 = (unsigned __int64 *)((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v18 = *v17;
  if ( (unsigned int)MiPteInShadowRange(v17)
    && (unsigned int)MiPteHasShadow()
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + (((((unsigned __int64)a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v21 = v18 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v18;
      v18 = v21;
      if ( (v20 & 0x42) != 0 )
        v18 = v21 | 0x42;
    }
  }
  v41 = v18;
  if ( (unsigned int)MiPteInShadowRange(&v41)
    && (unsigned int)MiPteHasShadow()
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v22 )
    {
      v23 = *((_QWORD *)&v22->Flink + (((unsigned __int64)&v41 >> 3) & 0x1FF));
      v24 = v18 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v18;
      v18 = v24;
      if ( (v23 & 0x42) != 0 )
        v18 = v24 | 0x42;
    }
  }
  v25 = (v18 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = v25 | *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL;
  CurrentThread = KeGetCurrentThread();
  v27 = 48 * v25 - 0x58000000000LL;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    v29 = Queue >> 9;
  else
    LOBYTE(v29) = PsGetPagePriorityThread(CurrentThread);
  v30 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v42 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v30 = MiLockPageInline(a1);
    }
  }
  v40 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v40);
    while ( *(__int64 *)(v27 + 24) < 0 );
  }
  *(_QWORD *)(v27 + 24) ^= ((*(_QWORD *)(v27 + 24) + 1LL) ^ *(_QWORD *)(v27 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v31 = *(_BYTE *)(a1 + 34);
  if ( v31 >> 6 != v16 )
  {
    MiChangePageAttribute(a1, v16, 1LL);
    v31 = *(_BYTE *)(a1 + 34);
  }
  v32 = *(_QWORD *)(a1 + 24);
  v33 = v31 & 0xF8 | 6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v32 & 0xC000000000000000uLL | 1;
  result = (v29 ^ *(_BYTE *)(a1 + 35)) & 7;
  *(_BYTE *)(a1 + 35) ^= result;
  *(_BYTE *)(a1 + 34) = v33;
  if ( (a4 & 0x20) == 0 )
  {
    result = v33 | 0x10;
    *(_BYTE *)(a1 + 34) = v33 | 0x10;
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
          if ( CurrentIrql <= 0xFu && v30 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (v30 + 1));
            v39 = (v38 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v38;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v30;
      __writecr8(v30);
    }
  }
  return result;
}
