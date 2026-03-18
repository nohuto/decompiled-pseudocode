/*
 * XREFs of MiDecrementProtoShareCounts @ 0x14059E1E8
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1409704A0 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDecrementProtoShareCounts(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x220000000000LL;
    do
    {
      v4 = (unsigned __int8)MiLockPageInline(v3);
      MiDecrementShareCount(v3, v5, v6, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
