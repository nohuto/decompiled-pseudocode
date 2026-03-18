/*
 * XREFs of _FLOATOBJ_GreaterThanLong@8 @ 0x1F3177
 * Callers:
 *     <none>
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

BOOL __stdcall FLOATOBJ_GreaterThanLong(PFLOATOBJ pf, LONG l)
{
  __int64 v2; // rax
  BOOL result; // eax
  int v4[2]; // [esp+0h] [ebp-8h] BYREF

  result = 0;
  if ( l )
  {
    v4[0] = 0;
    v4[1] = 0;
    LODWORD(v2) = v4;
    ltoef_c(v2, l, v4);
    return EFLOAT::operator>((int *)pf, v4);
  }
  else if ( (pf->ul1 & 0x80000000) == 0 && (pf->ul1 || pf->ul2) )
  {
    return 1;
  }
  return result;
}
