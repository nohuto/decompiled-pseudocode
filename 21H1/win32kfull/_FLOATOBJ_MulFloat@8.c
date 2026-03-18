/*
 * XREFs of _FLOATOBJ_MulFloat@8 @ 0x1F3219
 * Callers:
 *     <none>
 * Callees:
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

void __stdcall FLOATOBJ_MulFloat(PFLOATOBJ pf, FLOATL f)
{
  int v2; // edx
  unsigned int v3; // ecx
  int v4[2]; // [esp+0h] [ebp-8h] BYREF

  v4[0] = 0;
  v4[1] = 0;
  ftoef_c(v3, v2, f, v4);
  mulff3_c((int *)pf, pf, v4);
}
