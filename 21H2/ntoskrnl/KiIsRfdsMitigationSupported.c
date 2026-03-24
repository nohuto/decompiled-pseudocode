/*
 * XREFs of KiIsRfdsMitigationSupported @ 0x1403F32A4
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7840 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsRfdsMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 24) & 1LL;
}
