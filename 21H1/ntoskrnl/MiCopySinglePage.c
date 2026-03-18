/*
 * XREFs of MiCopySinglePage @ 0x140302BB4
 * Callers:
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiIsPageSecured @ 0x140302D58 (MiIsPageSecured.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int8 v11; // di
  int v12; // r12d
  int ProtectionPfnCompatible; // eax
  __int64 v14; // r9
  unsigned __int64 ValidPte; // rbx
  int v16; // ebp
  __int64 v17; // rbx
  const void *v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // ebp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  bool v27; // zf
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r8
  int v36; // eax

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
            v26 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
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
      v17 = MiMapPageInHyperSpaceWorker(a2, 0LL, 2684354560LL, v14);
      goto LABEL_15;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u, v14);
    v16 = 0;
    if ( !MiPteInShadowRange(a5) )
    {
LABEL_12:
      *(_QWORD *)a5 = ValidPte;
      if ( v16 )
        MiWritePteShadow(a5, ValidPte);
      v17 = (__int64)(a5 << 25) >> 16;
LABEL_15:
      v18 = (const void *)(a3 + v17);
      memmove(a1, v18, a4);
      if ( !a5 )
      {
        LOBYTE(v19) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, v19, 0x80000000);
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
              v29 = KeGetCurrentIrql();
              if ( v29 <= 0xFu && v11 <= 0xFu && v29 >= 2u )
              {
                v30 = KeGetCurrentPrcb();
                v31 = v30->SchedulerAssist;
                v32 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v27 = (v32 & v31[5]) == 0;
                v31[5] &= v32;
                if ( v27 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
          }
          __writecr8(v11);
        }
        return 0LL;
      }
      v20 = ZeroPte;
      v21 = 0;
      if ( !MiPteInShadowRange(a5) )
      {
LABEL_17:
        *(_QWORD *)a5 = v20;
        if ( v21 )
          MiWritePteShadow(a5, v20);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_17;
        v28 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v28 = (ZeroPte & 1) == 0;
      }
      if ( !v28 )
        v20 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_12;
      v27 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v27 = (ValidPte & 1) == 0;
    }
    if ( !v27 )
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
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && v11 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v27 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(v11);
  }
  return 3221227273LL;
}
