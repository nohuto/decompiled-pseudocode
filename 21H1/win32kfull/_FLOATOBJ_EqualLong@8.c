/*
 * XREFs of _FLOATOBJ_EqualLong@8 @ 0x1F30E6
 * Callers:
 *     <none>
 * Callees:
 *     ??8EFLOAT@@QAEHAAV0@@Z @ 0x8A5D6 (--8EFLOAT@@QAEHAAV0@@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

BOOL __stdcall FLOATOBJ_EqualLong(PFLOATOBJ pf, LONG l)
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
    return EFLOAT::operator==(pf, v4);
  }
  else if ( !pf->ul1 )
  {
    return pf->ul2 == 0;
  }
  return result;
}
