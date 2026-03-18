/*
 * XREFs of MiInitializePfn @ 0x1402253F0
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140225160 (MiCreateSharedZeroPages.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiInitializeProtoPfn @ 0x14054F4A0 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1402261C0 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 *a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rbx
  char v9; // di
  __int64 Flink; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned __int64 *v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _LIST_ENTRY *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v32; // rbx
  unsigned int Queue; // r15d
  unsigned int v34; // r15d
  unsigned __int8 v35; // di
  unsigned __int8 v36; // cl
  __int64 v37; // rax
  char v38; // cl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  int v45; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp+10h] BYREF
  int v47; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a2;
  v9 = a3;
  if ( (unsigned int)MiPteInShadowRange(a2, a2)
    && (unsigned int)MiPteHasShadow(v11, Flink)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v14 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
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
  v18 = MiProtectionToCacheAttribute(a3, Flink, v12, v13);
  *(_WORD *)(a1 + 32) = 1;
  v19 = (unsigned __int64 *)((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v20 = *v19;
  if ( (unsigned int)MiPteInShadowRange(v19, v21)
    && (unsigned int)MiPteHasShadow(v23, v22)
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v22 = ((unsigned __int64)a2 >> 9) & 0xFFFFFFF8;
    v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v24 )
    {
      v25 = *((_QWORD *)&v24->Flink + (((((unsigned __int64)a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v22 = v20 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v22 = v20;
      v20 = v22;
      if ( (v25 & 0x42) != 0 )
        v20 = v22 | 0x42;
    }
  }
  v46 = v20;
  if ( (unsigned int)MiPteInShadowRange(&v46, v22)
    && (unsigned int)MiPteHasShadow(v27, v26)
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v26 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v26 )
    {
      v29 = *(_QWORD *)(v26 + 8 * (((unsigned __int64)&v46 >> 3) & 0x1FF));
      v26 = v20 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v26 = v20;
      v20 = v26;
      if ( (v29 & 0x42) != 0 )
        v20 = v26 | 0x42;
    }
  }
  v30 = (v20 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = v30 | *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL;
  CurrentThread = KeGetCurrentThread();
  v32 = 48 * v30 - 0x58000000000LL;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    v34 = Queue >> 9;
  else
    LOBYTE(v34) = PsGetPagePriorityThread(CurrentThread, v26);
  v35 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v47 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v35 = MiLockPageInline(a1, v26, v28);
    }
  }
  v45 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v45);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  *(_QWORD *)(v32 + 24) ^= ((*(_QWORD *)(v32 + 24) + 1LL) ^ *(_QWORD *)(v32 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = *(_BYTE *)(a1 + 34);
  if ( v36 >> 6 != v18 )
  {
    MiChangePageAttribute(a1, v18, 1LL);
    v36 = *(_BYTE *)(a1 + 34);
  }
  v37 = *(_QWORD *)(a1 + 24);
  v38 = v36 & 0xF8 | 6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v37 & 0xC000000000000000uLL | 1;
  result = (v34 ^ *(_BYTE *)(a1 + 35)) & 7;
  *(_BYTE *)(a1 + 35) ^= result;
  *(_BYTE *)(a1 + 34) = v38;
  if ( (a4 & 0x20) == 0 )
  {
    result = v38 | 0x10;
    *(_BYTE *)(a1 + 34) = v38 | 0x10;
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
          if ( CurrentIrql <= 0xFu && v35 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << (v35 + 1));
            v44 = (v43 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v43;
            if ( v44 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v35;
      __writecr8(v35);
    }
  }
  return result;
}
