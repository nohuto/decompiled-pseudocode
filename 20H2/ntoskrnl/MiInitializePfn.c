/*
 * XREFs of MiInitializePfn @ 0x14028E040
 * Callers:
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiInitializeProtoPfn @ 0x1405534C0 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rbx
  char v9; // di
  __int64 Flink; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned __int64 *v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _LIST_ENTRY *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rbx
  unsigned int Queue; // r15d
  unsigned int v37; // r15d
  unsigned __int8 v38; // di
  unsigned __int8 v39; // cl
  __int64 v40; // rax
  char v41; // cl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  bool v47; // zf
  int v48; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v49; // [rsp+68h] [rbp+10h] BYREF
  int v50; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v9 = a3;
  if ( MiPteInShadowRange(a2)
    && (unsigned int)MiPteHasShadow(v11, Flink, v12, v13)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v14 = *(_QWORD *)(Flink + 8 * ((a2 >> 3) & 0x1FF));
      Flink = v4 | 0x20;
      if ( (v14 & 0x20) == 0 )
        Flink = v4;
      v4 = Flink;
      if ( (v14 & 0x42) != 0 )
        v4 = Flink | 0x42;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v15 = 32LL * (v9 & 0x1F);
    if ( v4 )
      v4 = v15 | v4 & 0xFFFFFFFFFFFFFC1FuLL;
    else
      v4 = MiSwizzleInvalidPte(v15);
  }
  v16 = -9LL;
  if ( (v4 & 0x400) != 0 )
    v16 = -2049LL;
  v17 = v4 & v16;
  *(_QWORD *)(a1 + 16) = v17;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)a1 &= 0xFFFFFFFFFFFFC00FuLL;
    *(_QWORD *)(a1 + 16) = v17 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v18 = MiProtectionToCacheAttribute(a3, Flink, v12);
  *(_WORD *)(a1 + 32) = 1;
  v19 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v20 = *v19;
  if ( MiPteInShadowRange((unsigned __int64)v19)
    && (unsigned int)MiPteHasShadow(v22, v21, v23, v24)
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v25 )
    {
      v26 = *((_QWORD *)&v25->Flink + ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v27 = v20 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v20;
      v20 = v27;
      if ( (v26 & 0x42) != 0 )
        v20 = v27 | 0x42;
    }
  }
  v49 = v20;
  if ( MiPteInShadowRange((unsigned __int64)&v49)
    && (unsigned int)MiPteHasShadow(v29, v28, v30, v31)
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v28 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v28 )
    {
      v32 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
      v28 = v20 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v28 = v20;
      v20 = v28;
      if ( (v32 & 0x42) != 0 )
        v20 = v28 | 0x42;
    }
  }
  v33 = (v20 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = v33 | *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL;
  CurrentThread = KeGetCurrentThread();
  v35 = 48 * v33 - 0x58000000000LL;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    v37 = Queue >> 9;
  else
    LOBYTE(v37) = PsGetPagePriorityThread(CurrentThread, v28, v30, v31);
  v38 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v50 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v38 = MiLockPageInline(a1);
    }
  }
  v48 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v48);
    while ( *(__int64 *)(v35 + 24) < 0 );
  }
  *(_QWORD *)(v35 + 24) ^= ((*(_QWORD *)(v35 + 24) + 1LL) ^ *(_QWORD *)(v35 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v39 = *(_BYTE *)(a1 + 34);
  if ( v39 >> 6 != v18 )
  {
    MiChangePageAttribute(a1, v18, 1);
    v39 = *(_BYTE *)(a1 + 34);
  }
  v40 = *(_QWORD *)(a1 + 24);
  v41 = v39 & 0xF8 | 6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v40 & 0xC000000000000000uLL | 1;
  result = (v37 ^ *(_BYTE *)(a1 + 35)) & 7;
  *(_BYTE *)(a1 + 35) ^= result;
  *(_BYTE *)(a1 + 34) = v41;
  if ( (a4 & 0x20) == 0 )
  {
    result = v41 | 0x10;
    *(_BYTE *)(a1 + 34) = v41 | 0x10;
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
          if ( CurrentIrql <= 0xFu && v38 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (v38 + 1));
            v47 = (v46 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v46;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v38;
      __writecr8(v38);
    }
  }
  return result;
}
