/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x1402F1F54
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402F1DF8 (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x1402F342C (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140227354 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetStandbyRepurposed @ 0x1402F2348 (MiGetStandbyRepurposed.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int StandbyRepurposed; // eax
  unsigned int v6; // r10d
  unsigned __int64 v7; // r11
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 784) && !*(_DWORD *)(a1 + 1152) )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
    v4 = *(_QWORD *)(v3 + 6928) >> 2;
    if ( *(_QWORD *)(v2 + 7600) < 3 * v4 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v4) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(v2);
      if ( (v6 < StandbyRepurposed ? StandbyRepurposed - v6 : 0) < v7 >> 2 )
        return 1;
    }
  }
  return result;
}
