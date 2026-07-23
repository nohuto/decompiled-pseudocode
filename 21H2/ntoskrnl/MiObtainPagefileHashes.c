/*
 * XREFs of MiObtainPagefileHashes @ 0x14055D800
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiObtainPagefileHashes(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  volatile LONG *v4; // r15
  __int64 v7; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  int v12; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v4 = (volatile LONG *)(a1 + 232);
  v7 = a2;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 232));
  v10 = *(_QWORD *)(a1 + 216) + 4 * v7;
  if ( a3 )
  {
    v11 = a3;
    do
    {
      if ( (*(_BYTE *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
        v12 = *(_DWORD *)v10;
      else
        v12 = 0;
      *a4 = v12;
      v10 += 4LL;
      ++a4;
      --v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
