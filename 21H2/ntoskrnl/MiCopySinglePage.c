/*
 * XREFs of MiCopySinglePage @ 0x140232D74
 * Callers:
 *     MmCopyMemory @ 0x140232A90 (MmCopyMemory.c)
 * Callees:
 *     MiIsPageSecured @ 0x140232F18 (MiIsPageSecured.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, void *a5, char a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int8 v11; // di
  int v12; // r12d
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  const void *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  bool v30; // zf
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r8
  int v39; // eax

  if ( a2 > 0xFFFFFFFFFLL )
    return 3221225793LL;
  v8 = 6 * a2;
  v9 = *(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL);
  if ( (v9 & 0x4000000000000LL) == 0 )
    return 3221225793LL;
  v10 = 48 * a2 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
  {
    v11 = MiLockPageInline(48 * a2 - 0x58000000000LL);
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
            v29 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v30 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v30 )
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
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, 8 * v8 - 0x58000000000LL);
    if ( !a5 )
    {
      v18 = MiMapPageInHyperSpaceWorker(a2, 0LL, 2684354560LL);
      goto LABEL_15;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
    v15 = 0;
    if ( !(unsigned int)MiPteInShadowRange(a5) )
    {
LABEL_12:
      *(_QWORD *)a5 = ValidPte;
      if ( v15 )
        MiWritePteShadow(a5);
      v18 = (__int64)((_QWORD)a5 << 25) >> 16;
LABEL_15:
      v19 = (const void *)(a3 + v18);
      memmove(a1, v19, a4);
      if ( !a5 )
      {
        LOBYTE(v20) = 17;
        MiUnmapPageInHyperSpaceWorker(v19, v20, 0x80000000LL);
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
              v32 = KeGetCurrentIrql();
              if ( v32 <= 0xFu && v11 <= 0xFu && v32 >= 2u )
              {
                v33 = KeGetCurrentPrcb();
                v34 = v33->SchedulerAssist;
                v35 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v30 = (v35 & v34[5]) == 0;
                v34[5] &= v35;
                if ( v30 )
                  KiRemoveSystemWorkPriorityKick(v33);
              }
            }
          }
          __writecr8(v11);
        }
        return 0LL;
      }
      v21 = ZeroPte;
      v22 = 0;
      if ( !(unsigned int)MiPteInShadowRange(a5) )
      {
LABEL_17:
        *(_QWORD *)a5 = v21;
        if ( v22 )
          MiWritePteShadow(a5);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow(v24, v23) )
      {
        v22 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_17;
        v31 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v31 = (ZeroPte & 1) == 0;
      }
      if ( !v31 )
        v21 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow(v17, v16) )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_12;
      v30 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v30 = (ValidPte & 1) == 0;
    }
    if ( !v30 )
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
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && v11 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v30 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
    }
    __writecr8(v11);
  }
  return 3221227273LL;
}
