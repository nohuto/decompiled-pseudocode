/*
 * XREFs of MiPurgeZeroList @ 0x140384A9C
 * Callers:
 *     MiFinishResume @ 0x1403849F0 (MiFinishResume.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiPurgeLargeZeroNodePages @ 0x140384C18 (MiPurgeLargeZeroNodePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPurgeZeroList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v5; // ebp
  ULONG_PTR *v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // eax
  bool v12; // zf
  ULONG_PTR v13; // rbx

  if ( *(_BYTE *)(a1 + 4829) )
  {
    MiPurgeLargeZeroNodePages();
    v5 = 0;
    if ( dword_140C4DF3C )
    {
      v6 = (ULONG_PTR *)(*(_QWORD *)(a1 + 2176) + 16LL);
      do
      {
        while ( 1 )
        {
          v13 = *v6;
          if ( *v6 == 0xFFFFFFFFFLL )
            break;
          v7 = 48 * v13 - 0x58000000000LL;
          v8 = (unsigned __int8)MiLockPageInline(v7, v2, v3, SchedulerAssist);
          if ( v13 <= 0xFFFFFFFFFLL
            && (*(_QWORD *)(48 * v13 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
            && (*(_QWORD *)(v7 + 40) & 0x1000000000LL) == 0
            && (*(_BYTE *)(v7 + 34) & 7) == 0 )
          {
            MiUnlinkFreeOrZeroedPage(v13, 0LL, 0);
            MiInsertPageInFreeOrZeroedList(v13, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v2 = -1LL << ((unsigned __int8)v8 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v11 = ~(unsigned __int16)v2;
                v12 = (v11 & SchedulerAssist[5]) == 0;
                v3 = (unsigned int)v11 & SchedulerAssist[5];
                SchedulerAssist[5] = v3;
                if ( v12 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v8);
        }
        ++v5;
        v6 += 5;
      }
      while ( v5 < dword_140C4DF3C );
    }
    *(_BYTE *)(a1 + 4829) = 0;
  }
}
