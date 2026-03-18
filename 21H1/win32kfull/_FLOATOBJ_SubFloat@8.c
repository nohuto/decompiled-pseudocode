/*
 * XREFs of _FLOATOBJ_SubFloat@8 @ 0x1F3294
 * Callers:
 *     <none>
 * Callees:
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 */

void __stdcall FLOATOBJ_SubFloat(PFLOATOBJ pf, FLOATL f)
{
  int v2; // edx
  unsigned int v3; // ecx
  int v4[2]; // [esp+0h] [ebp-8h] BYREF

  v4[0] = 0;
  v4[1] = 0;
  ftoef_c(v3, v2, f, v4);
  subff3_c((int *)pf, (int *)pf, v4);
}
