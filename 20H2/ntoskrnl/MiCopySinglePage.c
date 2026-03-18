/*
 * XREFs of MiCopySinglePage @ 0x1402516D4
 * Callers:
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiIsPageSecured @ 0x140251878 (MiIsPageSecured.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140411040 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
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
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  const void *v21; // rbx
  unsigned __int64 v22; // rbx
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  bool v33; // zf
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r8
  int v42; // eax

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
            v32 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
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
      MiChangePageAttribute(8 * v8 - 0x58000000000LL, 1u, 1);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, 8 * v8 - 0x58000000000LL);
    if ( !a5 )
    {
      v20 = MiMapPageInHyperSpaceWorker(a2, 0LL, 2684354560LL);
      goto LABEL_15;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
    v15 = 0;
    if ( !MiPteInShadowRange(a5) )
    {
LABEL_12:
      *(_QWORD *)a5 = ValidPte;
      if ( v15 )
        MiWritePteShadow(a5, ValidPte);
      v20 = (__int64)(a5 << 25) >> 16;
LABEL_15:
      v21 = (const void *)(a3 + v20);
      memmove(a1, v21, a4);
      if ( !a5 )
      {
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v21, 0x11u, 0x80000000);
LABEL_19:
        if ( v12 == 3 )
          MiChangePageAttribute(v10, 3u, 3);
        if ( v11 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v35 = KeGetCurrentIrql();
              if ( v35 <= 0xFu && v11 <= 0xFu && v35 >= 2u )
              {
                v36 = KeGetCurrentPrcb();
                v37 = v36->SchedulerAssist;
                v38 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v33 = (v38 & v37[5]) == 0;
                v37[5] &= v38;
                if ( v33 )
                  KiRemoveSystemWorkPriorityKick(v36);
              }
            }
          }
          __writecr8(v11);
        }
        return 0LL;
      }
      v22 = ZeroPte;
      v23 = 0;
      if ( !MiPteInShadowRange(a5) )
      {
LABEL_17:
        *(_QWORD *)a5 = v22;
        if ( v23 )
          MiWritePteShadow(a5, v22);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow(v25, v24, v26, v27) )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4DE88) )
          goto LABEL_17;
        v34 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v34 = (ZeroPte & 1) == 0;
      }
      if ( !v34 )
        v22 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow(v17, v16, v18, v19) )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_12;
      v33 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v33 = (ValidPte & 1) == 0;
    }
    if ( !v33 )
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
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && v11 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v33 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(v11);
  }
  return 3221227273LL;
}
