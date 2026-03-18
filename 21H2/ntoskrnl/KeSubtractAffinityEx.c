/*
 * XREFs of KeSubtractAffinityEx @ 0x14045A070
 * Callers:
 *     <none>
 * Callees:
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 */

__int64 __fastcall KeSubtractAffinityEx(_WORD *a1, char *a2, _BYTE *a3)
{
  return KiSubtractAffinityEx(a1, a2, a3, 0x14u);
}
