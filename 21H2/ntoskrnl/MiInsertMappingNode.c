/*
 * XREFs of MiInsertMappingNode @ 0x140386294
 * Callers:
 *     MmAllocateMappingAddressEx @ 0x1407F9D50 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertMappingNode(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  bool v5; // r8
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v1 = a1[3];
  v3 = ExAcquireSpinLockExclusive(&dword_140C53050);
  v4 = (_QWORD *)qword_140C53058;
  v5 = 0;
  v6 = v3;
  if ( qword_140C53058 )
  {
    while ( 1 )
    {
      if ( v1 >= v4[3] )
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      v4 = v7;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C53058, (unsigned __int64)v4, v5, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53050);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
