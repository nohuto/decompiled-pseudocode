/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x140418D80
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403D5E00 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return ((unsigned __int8)*a2 >> 2) & 1;
}
