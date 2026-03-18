/*
 * XREFs of _FLOATOBJ_LessThanLong@8 @ 0x1F31DA
 * Callers:
 *     <none>
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

BOOL __stdcall FLOATOBJ_LessThanLong(PFLOATOBJ pf, LONG l)
{
  __int64 v2; // rax
  int v4[2]; // [esp+0h] [ebp-8h] BYREF

  if ( !l )
    return pf->ul1 >> 31;
  v4[0] = 0;
  LODWORD(v2) = v4;
  v4[1] = 0;
  ltoef_c(v2, l, v4);
  return EFLOAT::operator>(v4, (int *)pf);
}
