/*
 * XREFs of MiFreeModifiedReservations @ 0x14059C6B4
 * Callers:
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x14059CCB4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 i; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // [rsp+50h] [rbp+8h]

  result = *(unsigned __int16 *)(a1 + 204);
  if ( (result & 0x40) == 0 )
  {
    v18 = *(_QWORD *)(a1 + 248);
    v4 = v18 + 88 * (result & 0xF);
    result = 0x3FFFFFFFFFLL;
    v5 = 0LL;
    v6 = *(_QWORD *)(v4 + 3728);
    for ( i = a2 == 0 ? 0x10000 : 0; v6 != 0x3FFFFFFFFFLL; result = 0x3FFFFFFFFFLL )
    {
      v8 = 48 * v6 - 0x220000000000LL;
      v9 = (unsigned __int8)MiLockPageInline(v8);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 3744));
      if ( v6 == *(_QWORD *)(v4 + 3728) )
      {
        MiUnlinkPageFromListEx(48 * v6 - 0x220000000000LL, 1);
        v15 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 3744));
        MiInsertPageInList(v8, 8u);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo(v18, v15, 1);
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
              v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v14 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
        ++v5;
        if ( !a2 && v5 >= i )
          return result;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 3744));
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              v11 = KeGetCurrentPrcb();
              v12 = v11->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v13 & v12[5]) == 0;
              v12[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v11);
            }
          }
        }
        __writecr8(v9);
      }
      v6 = *(_QWORD *)(v4 + 3728);
    }
  }
  return result;
}
