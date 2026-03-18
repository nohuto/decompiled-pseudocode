/*
 * XREFs of MiInsertPageFileMemoryExtents @ 0x14059A1C8
 * Callers:
 *     MiCreatePagefileMemoryExtents @ 0x14096E06C (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiMovePageFileMemoryExtents @ 0x14059A35C (MiMovePageFileMemoryExtents.c)
 */

__int64 __fastcall MiInsertPageFileMemoryExtents(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  char v8; // al
  int v9; // esi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v2 = (volatile LONG *)(a1 + 232);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v6 = *(_QWORD *)a2;
  v7 = v5;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v6 )
    v6 ^= a2;
  v8 = *(_BYTE *)(a2 + 8);
  v9 = v8 & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v10 = (_QWORD *)v6;
          if ( v9 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v10 = 0LL;
        }
        v11 = *(_QWORD *)(v6 + 8);
        if ( !v11 )
          break;
        v12 = v6;
        if ( v9 )
          v6 ^= v11;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      v13 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= v6;
      MiMovePageFileMemoryExtents(v6, a1 + 256);
      if ( !v13 )
        break;
      v6 = v13;
    }
    v8 = *(_BYTE *)(a2 + 8);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(a2 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
