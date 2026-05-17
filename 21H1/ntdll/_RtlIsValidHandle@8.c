/*
 * XREFs of _RtlIsValidHandle@8 @ 0x4B2E0560
 * Callers:
 *     _RtlIsValidIndexHandle@12 @ 0x4B2E0520 (_RtlIsValidIndexHandle@12.c)
 * Callees:
 *     <none>
 */

bool __stdcall RtlIsValidHandle(_DWORD *a1, unsigned int a2)
{
  return a2 && a2 >= a1[5] && a2 < a1[6] && ((a1[1] - 1) & a2) == 0 && (*(_BYTE *)a2 & 1) != 0;
}
