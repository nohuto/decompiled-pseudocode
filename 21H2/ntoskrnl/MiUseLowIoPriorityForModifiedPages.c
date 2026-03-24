/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x1402719AC
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1402712E4 (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x140272ACC (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1403BDB20 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1402717A4 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14027191C (MiGetAvailablePagesBelowPriority.c)
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
      StandbyRepurposed = MiGetStandbyRepurposed(v2, 1u);
      if ( (v6 < StandbyRepurposed ? StandbyRepurposed - v6 : 0) < v7 >> 2 )
        return 1;
    }
  }
  return result;
}
