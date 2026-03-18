/*
 * XREFs of _FLOATOBJ_SetFloat@8 @ 0x1F3262
 * Callers:
 *     <none>
 * Callees:
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 */

void __stdcall FLOATOBJ_SetFloat(PFLOATOBJ pf, FLOATL f)
{
  int v2; // edx
  unsigned int v3; // ecx

  ftoef_c(v3, v2, f, (int *)pf);
}
