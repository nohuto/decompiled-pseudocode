/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x140266C0C
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x140268CA8 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x140266998 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned int StandbyRepurposed; // eax
  unsigned int v7; // r10d
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 808) && !*(_DWORD *)(a1 + 1168) )
  {
    v1 = *(_QWORD *)(a1 + 16720);
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
    v4 = v1 >> 2;
    v5 = AvailablePagesBelowPriority;
    if ( *(_QWORD *)(v3 + 17504) < 3 * v4 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v4) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(v3, 1u);
      if ( (v7 < StandbyRepurposed ? StandbyRepurposed - v7 : 0) < v5 >> 2 )
        return 1;
    }
  }
  return result;
}
