/*
 * XREFs of MiReleaseInPageRefs @ 0x1402CA45C
 * Callers:
 *     MiInvalidateCollidedIos @ 0x1402CA1FC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  v4 = (unsigned __int8)MiLockPageInline(a1, v2, v3);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          *(_DWORD *)(SchedulerAssist + 20) &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v10 = *(_QWORD *)(a1 + 16);
    if ( qword_140C4DF40 && (v10 & 0x10) == 0 )
      v10 &= ~qword_140C4DF40;
    LOBYTE(v11) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v10 >> 16), v10 >> 16, SchedulerAssist, 3LL);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v11) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v11) = KeGetCurrentIrql();
        if ( (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v11 & v13[5]) == 0;
          v13[5] &= v11;
          if ( v9 )
            LOBYTE(v11) = KiRemoveSystemWorkPriorityKick(v12);
        }
      }
    }
    __writecr8(v4);
  }
  return v11;
}
