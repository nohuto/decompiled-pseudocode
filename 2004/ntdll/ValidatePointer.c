/*
 * XREFs of ValidatePointer @ 0x18006AF34
 * Callers:
 *     GetResourceDirectoryEntry @ 0x18006ACAC (GetResourceDirectoryEntry.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006ACF0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     FindDirectoryEntry @ 0x18006AF74 (FindDirectoryEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidatePointer(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *a1;
  v4 = a2 + a3;
  v5 = *a1 + a1[1];
  return v5 >= v3 && v4 >= a2 && a2 <= v5 && v4 <= v5 && a2 >= v3 && v4 >= v3;
}
