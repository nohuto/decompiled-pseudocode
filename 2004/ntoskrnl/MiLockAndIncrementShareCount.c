/*
 * XREFs of MiLockAndIncrementShareCount @ 0x140261128
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402B4FA0 (MiLinkPoolCommitChain.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E2C58 (MiInitializePfnForOtherProcess.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 * Callees:
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndIncrementShareCount(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v1 = 48 * a1 - 0x58000000000LL;
  v2 = (unsigned __int8)MiLockPageInline(v1);
  *(_QWORD *)(v1 + 24) ^= ((*(_QWORD *)(v1 + 24) + 1LL) ^ *(_QWORD *)(v1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
