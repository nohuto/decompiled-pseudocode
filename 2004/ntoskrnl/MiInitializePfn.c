/*
 * XREFs of MiInitializePfn @ 0x1402B8070
 * Callers:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiCreateSharedZeroPages @ 0x1402B7DE0 (MiCreateSharedZeroPages.c)
 *     MiInitializeProtoPfn @ 0x14054FAF0 (MiInitializeProtoPfn.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePfn(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rbx
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // r13d
  unsigned __int64 *v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v37; // rbx
  unsigned int Queue; // r15d
  unsigned int v39; // r15d
  unsigned __int8 v40; // di
  unsigned __int8 v41; // cl
  __int64 v42; // rax
  char v43; // cl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  bool v49; // zf
  int v50; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp+10h] BYREF
  int v52; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v9 = a3;
  if ( MiPteInShadowRange(a2)
    && (unsigned int)MiPteHasShadow(v11, v10, v12, v13)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v15 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v16 = v4 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v4;
      v4 = v16;
      if ( (v15 & 0x42) != 0 )
        v4 = v16 | 0x42;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v17 = 32LL * (v9 & 0x1F);
    if ( v4 )
      v4 = v17 | v4 & 0xFFFFFFFFFFFFFC1FuLL;
    else
      v4 = MiSwizzleInvalidPte(v17);
  }
  v18 = -9LL;
  if ( (v4 & 0x400) != 0 )
    v18 = -2049LL;
  v19 = v4 & v18;
  *(_QWORD *)(a1 + 16) = v19;
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x8000000000000000uLL;
  }
  else if ( (a4 & 8) == 0 )
  {
    *(_QWORD *)a1 &= 0xFFFFFFFFFFFFC00FuLL;
    *(_QWORD *)(a1 + 16) = v19 & 0xFFFFFFFFFC00FFFFuLL;
  }
  v20 = MiProtectionToCacheAttribute(a3);
  *(_WORD *)(a1 + 32) = 1;
  v21 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v22 = *v21;
  if ( MiPteInShadowRange((unsigned __int64)v21)
    && (unsigned int)MiPteHasShadow(v24, v23, v25, v26)
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v27 )
    {
      v28 = *((_QWORD *)&v27->Flink + ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v29 = v22 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v29 = v22;
      v22 = v29;
      if ( (v28 & 0x42) != 0 )
        v22 = v29 | 0x42;
    }
  }
  v51 = v22;
  if ( MiPteInShadowRange((unsigned __int64)&v51)
    && (unsigned int)MiPteHasShadow(v31, v30, v32, v33)
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v30 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v30 )
    {
      v34 = *(_QWORD *)(v30 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
      v30 = v22 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v30 = v22;
      v22 = v30;
      if ( (v34 & 0x42) != 0 )
        v22 = v30 | 0x42;
    }
  }
  v35 = (v22 >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = v35 | *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL;
  CurrentThread = KeGetCurrentThread();
  v37 = 48 * v35 - 0x58000000000LL;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    v39 = Queue >> 9;
  else
    LOBYTE(v39) = PsGetPagePriorityThread(CurrentThread);
  v40 = 17;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 0x10) != 0 )
    {
      v52 = a4 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v52, v30, v32, v33);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v40 = MiLockPageInline(a1);
    }
  }
  v50 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v50, v30, v32, v33);
    while ( *(__int64 *)(v37 + 24) < 0 );
  }
  *(_QWORD *)(v37 + 24) ^= ((*(_QWORD *)(v37 + 24) + 1LL) ^ *(_QWORD *)(v37 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v41 = *(_BYTE *)(a1 + 34);
  if ( v41 >> 6 != v20 )
  {
    MiChangePageAttribute(a1, v20, 1LL);
    v41 = *(_BYTE *)(a1 + 34);
  }
  v42 = *(_QWORD *)(a1 + 24);
  v43 = v41 & 0xF8 | 6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v42 & 0xC000000000000000uLL | 1;
  result = (v39 ^ *(_BYTE *)(a1 + 35)) & 7;
  *(_BYTE *)(a1 + 35) ^= result;
  *(_BYTE *)(a1 + 34) = v43;
  if ( (a4 & 0x20) == 0 )
  {
    result = v43 | 0x10;
    *(_BYTE *)(a1 + 34) = v43 | 0x10;
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
          if ( CurrentIrql <= 0xFu && v40 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v48 = ~(unsigned __int16)(-1LL << (v40 + 1));
            v49 = (v48 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v48;
            if ( v49 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v40;
      __writecr8(v40);
    }
  }
  return result;
}
