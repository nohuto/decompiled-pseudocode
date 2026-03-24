/*
 * XREFs of MiCopySinglePage @ 0x1402B4BC4
 * Callers:
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiIsPageSecured @ 0x1402B4D68 (MiIsPageSecured.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413F40 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, void *a5, char a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int8 v11; // di
  int v12; // r12d
  int ProtectionPfnCompatible; // eax
  __int64 v14; // r9
  __int64 ValidPte; // rbx
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  const void *v23; // rbx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v35; // eax
  bool v36; // zf
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r8
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r8
  int v45; // eax

  if ( a2 > 0xFFFFFFFFFLL )
    return 3221225793LL;
  v8 = 6 * a2;
  v9 = *(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL);
  if ( (v9 & 0x4000000000000LL) == 0 )
    return 3221225793LL;
  v10 = 48 * a2 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
  {
    v11 = MiLockPageInline(48 * a2 - 0x58000000000LL, a2, a3);
    v9 = *(_QWORD *)(8 * v8 - 0x57FFFFFFFD8LL);
  }
  else
  {
    v11 = 17;
  }
  if ( (v9 & 0x4000000000000LL) == 0 )
  {
    if ( v11 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v36 = (v35 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v35;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v10 + 35) >= 0 && !(unsigned int)MiIsPageSecured(8 * v8 - 0x58000000000LL) )
  {
    v12 = *(unsigned __int8 *)(v10 + 34) >> 6;
    if ( v12 == 3 )
      MiChangePageAttribute(8 * v8 - 0x58000000000LL, 1LL, 1LL);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, 8 * v8 - 0x58000000000LL);
    if ( !a5 )
    {
      v22 = MiMapPageInHyperSpaceWorker(a2, 0LL, 2684354560LL, v14);
      goto LABEL_15;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
    v16 = 0;
    if ( !(unsigned int)MiPteInShadowRange(a5, v17) )
    {
LABEL_12:
      *(_QWORD *)a5 = ValidPte;
      if ( v16 )
        MiWritePteShadow(a5, ValidPte);
      v22 = (__int64)((_QWORD)a5 << 25) >> 16;
LABEL_15:
      v23 = (const void *)(a3 + v22);
      memmove(a1, v23, a4);
      if ( !a5 )
      {
        LOBYTE(v24) = 17;
        MiUnmapPageInHyperSpaceWorker(v23, v24, 0x80000000LL);
LABEL_19:
        if ( v12 == 3 )
          MiChangePageAttribute(v10, 3LL, 3LL);
        if ( v11 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v38 = KeGetCurrentIrql();
              if ( v38 <= 0xFu && v11 <= 0xFu && v38 >= 2u )
              {
                v39 = KeGetCurrentPrcb();
                v40 = v39->SchedulerAssist;
                v41 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v36 = (v41 & v40[5]) == 0;
                v40[5] &= v41;
                if ( v36 )
                  KiRemoveSystemWorkPriorityKick(v39);
              }
            }
          }
          __writecr8(v11);
        }
        return 0LL;
      }
      v25 = ZeroPte;
      v26 = 0;
      if ( !(unsigned int)MiPteInShadowRange(a5, v24) )
      {
LABEL_17:
        *(_QWORD *)a5 = v25;
        if ( v26 )
          MiWritePteShadow(a5, v25);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow(v28, v27, v29, v30) )
      {
        v26 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_17;
        v37 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v37 = (ZeroPte & 1) == 0;
      }
      if ( !v37 )
        v25 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow(v19, v18, v20, v21) )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_12;
      v36 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v36 = (ValidPte & 1) == 0;
    }
    if ( !v36 )
      ValidPte |= 0x8000000000000000uLL;
    goto LABEL_12;
  }
  if ( v11 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && v11 <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v36 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
    }
    __writecr8(v11);
  }
  return 3221227273LL;
}
