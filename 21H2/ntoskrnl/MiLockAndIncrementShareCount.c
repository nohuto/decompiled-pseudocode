/*
 * XREFs of MiLockAndIncrementShareCount @ 0x1402E5920
 * Callers:
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiLinkPoolCommitChain @ 0x14030B540 (MiLinkPoolCommitChain.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v3 = 48 * a1 - 0x58000000000LL;
  v4 = (unsigned __int8)MiLockPageInline(v3, a2, a3);
  *(_QWORD *)(v3 + 24) ^= ((*(_QWORD *)(v3 + 24) + 1LL) ^ *(_QWORD *)(v3 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
