/*
 * XREFs of MiReleaseInPageRefs @ 0x1403589BC
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14035875C (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned __int64 v5; // rdi
  __int64 SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0);
  v5 = (unsigned __int8)MiLockPageInline(a1, v2, v3, v4);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v9 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    v11 = *(_QWORD *)(a1 + 16);
    if ( qword_140C4DD40 && (v11 & 0x10) == 0 )
      v11 &= ~qword_140C4DD40;
    LOBYTE(v12) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v11 >> 16), v11 >> 16, SchedulerAssist, 3LL);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v12) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v12) = KeGetCurrentIrql();
        if ( (unsigned __int8)v12 <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v12 & v14[5]) == 0;
          v14[5] &= v12;
          if ( v10 )
            LOBYTE(v12) = KiRemoveSystemWorkPriorityKick(v13);
        }
      }
    }
    __writecr8(v5);
  }
  return v12;
}
