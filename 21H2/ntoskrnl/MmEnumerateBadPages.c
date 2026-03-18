/*
 * XREFs of MmEnumerateBadPages @ 0x1405C5B98
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  _QWORD *Pool; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 i; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8

  *a1 = 0LL;
  v2 = qword_140C56900;
  if ( qword_140C56900 )
  {
    while ( 1 )
    {
      v3 = v2 + 16;
      Pool = MiAllocatePool(64, 8 * v3, 0x61426D4Du);
      v5 = Pool;
      if ( !Pool )
        return 3221225626LL;
      v6 = Pool;
      v7 = ExAcquireSpinLockExclusive(&dword_140C56920);
      if ( qword_140C56900 < v3 )
      {
        if ( qword_140C56900 )
          break;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      ExFreePoolWithTag(v5, 0);
      v2 = qword_140C56900;
      if ( !qword_140C56900 )
        return 0LL;
    }
    *v5 = qword_140C56900;
    for ( i = qword_140C56910; i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x220000000000LL) & 0xFFFFFFFFFFLL )
      *++v6 = i;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v18 = v16->SchedulerAssist;
          v12 = (v17 & v18[5]) == 0;
          v18[5] &= v17;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
    __writecr8(v7);
    *a1 = v5;
  }
  return 0LL;
}
