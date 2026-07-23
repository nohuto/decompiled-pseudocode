/*
 * XREFs of ExpFastResourceLegacyIsAcquiredShared @ 0x1405B4BA0
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x14038F810 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpFastResourceLegacyIsAcquiredShared(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 *FastOwnerEntryForThread; // rax
  __int64 v5; // r11
  __int64 *v6; // rcx
  __int64 *v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // edx
  bool v12; // zf

  if ( *(_DWORD *)(a1 + 64) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread((__int64)KeGetCurrentThread(), a1, 0, 0);
    if ( FastOwnerEntryForThread )
    {
      v6 = FastOwnerEntryForThread + 5;
      v1 = 1;
      v7 = (__int64 *)FastOwnerEntryForThread[5];
      while ( v7 != v6 )
      {
        v7 = (__int64 *)*v7;
        ++v1;
      }
    }
    else
    {
      v1 = 0;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(v5 << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    return 0;
  }
  return v1;
}
