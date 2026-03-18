/*
 * XREFs of MiWakeExtentDeletionWaiters @ 0x1405A1C08
 * Callers:
 *     MiDeleteExtentPfns @ 0x14059E2C0 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakeExtentDeletionWaiters(__int64 a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  ULONG_PTR v8; // rbx

  v2 = qword_140C4F2C8;
  qword_140C4F2C8 = 0LL;
  v3 = a2;
  byte_140C4F2E9 = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    do
    {
      v8 = *(_QWORD *)v2;
      result = KeSignalGate((_DWORD *)(v2 + 8), 1);
      v2 = v8;
    }
    while ( v8 );
  }
  return result;
}
