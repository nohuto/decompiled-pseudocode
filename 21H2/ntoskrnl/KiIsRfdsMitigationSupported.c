/*
 * XREFs of KiIsRfdsMitigationSupported @ 0x140418C9C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403D5E00 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsRfdsMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 24) & 1LL;
}
