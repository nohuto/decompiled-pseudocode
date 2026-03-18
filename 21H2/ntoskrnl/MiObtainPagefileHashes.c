/*
 * XREFs of MiObtainPagefileHashes @ 0x14045D4C6
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14045D5EA (MiValidatePagefilePageHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1405BC2C4 (MiArePagefileContentsCorrupted.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReadEntirePageHashEntry @ 0x1405BC90C (MiReadEntirePageHashEntry.c)
 */

__int64 __fastcall MiObtainPagefileHashes(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v4; // r14
  KIRQL v9; // al
  unsigned int v10; // r9d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v4 = (volatile LONG *)(a1 + 232);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v10 = 0;
  v11 = v9;
  v12 = *(_QWORD *)(a1 + 216) + (unsigned int)(a2 * dword_140C531CC);
  if ( a3 )
  {
    v13 = a4;
    do
    {
      if ( (*(_BYTE *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
      {
        MiReadEntirePageHashEntry(v12, a4 + 16LL * v10, v13);
      }
      else
      {
        *(_DWORD *)v13 = 0;
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      ++v10;
      v12 += (unsigned int)dword_140C531CC;
      v13 += 16LL;
    }
    while ( v10 < a3 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
