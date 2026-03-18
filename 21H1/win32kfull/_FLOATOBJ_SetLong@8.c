/*
 * XREFs of _FLOATOBJ_SetLong@8 @ 0x1F327B
 * Callers:
 *     <none>
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

void __stdcall FLOATOBJ_SetLong(PFLOATOBJ pf, LONG l)
{
  __int64 v2; // rax

  ltoef_c(v2, l, (int *)pf);
}
