/*
 * XREFs of _FLOATOBJ_GetLong@4 @ 0x1F313A
 * Callers:
 *     <none>
 * Callees:
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 */

LONG __stdcall FLOATOBJ_GetLong(PFLOATOBJ pf)
{
  LONG v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  eftol_c((int *)pf, &v2, 0);
  return v2;
}
