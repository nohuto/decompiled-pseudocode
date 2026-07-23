/*
 * XREFs of MiReleaseInPageRefs @ 0x140248D4C
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140248AEC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rcx
  __int64 result; // rax
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  v2 = (unsigned __int8)MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    v8 = *(_QWORD *)(a1 + 16);
    if ( qword_140C4DF80 )
    {
      if ( (v8 & 0x10) == 0 )
        v8 &= ~qword_140C4DF80;
    }
    return MiDereferenceControlAreaPfnList(*(_QWORD *)(v8 >> 16), v8 >> 16, SchedulerAssist, 3LL);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = ((unsigned int)result & v11[5]) == 0;
          v11[5] &= result;
          if ( v7 )
            result = KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(v2);
  }
  return result;
}
