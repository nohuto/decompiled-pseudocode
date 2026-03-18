/*
 * XREFs of MiCopySinglePage @ 0x14033F9B4
 * Callers:
 *     MmCopyMemory @ 0x14033F6D0 (MmCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiIsPageSecured @ 0x14033FB58 (MiIsPageSecured.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(
        void *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        char a6)
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
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  const void *v19; // rbx
  unsigned __int64 v20; // rbx
  int v21; // ebp
  __int64 v22; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  bool v28; // zf
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r8
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r8
  int v37; // eax

  if ( a2 > 0xFFFFFFFFFLL )
    return 3221225793LL;
  v8 = 6 * a2;
  v9 = *(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL);
  if ( (v9 & 0x4000000000000LL) == 0 )
    return 3221225793LL;
  v10 = 48 * a2 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
  {
    v11 = MiLockPageInline(48 * a2 - 0x58000000000LL, a2, a3, a4);
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
            v27 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
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
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, 8 * v8 - 0x58000000000LL);
    if ( !a5 )
    {
      v18 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736, v14);
      goto LABEL_15;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u, v14);
    v16 = 0;
    if ( !MiPteInShadowRange(a5) )
    {
LABEL_12:
      *(_QWORD *)a5 = ValidPte;
      if ( v16 )
        MiWritePteShadow(a5, ValidPte, v17);
      v18 = (__int64)(a5 << 25) >> 16;
LABEL_15:
      v19 = (const void *)(a3 + v18);
      memmove(a1, v19, (size_t)a4);
      if ( !a5 )
      {
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u, 0x80000000);
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
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && v11 <= 0xFu && v30 >= 2u )
              {
                v31 = KeGetCurrentPrcb();
                v32 = v31->SchedulerAssist;
                v33 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v28 = (v33 & v32[5]) == 0;
                v32[5] &= v33;
                if ( v28 )
                  KiRemoveSystemWorkPriorityKick(v31);
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
          MiWritePteShadow(a5, v20, v22);
        goto LABEL_19;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_17;
        v29 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v29 = (ZeroPte & 1) == 0;
      }
      if ( !v29 )
        v20 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_17;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_12;
      v28 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v28 = (ValidPte & 1) == 0;
    }
    if ( !v28 )
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
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && v11 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v28 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v11);
  }
  return 3221227273LL;
}
