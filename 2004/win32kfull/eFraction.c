/*
 * XREFs of eFraction @ 0x1C02DFD84
 * Callers:
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02B12B4 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B1460 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02B15F8 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
double __fastcall eFraction(double result)
{
  __int128 v1; // xmm1
  unsigned int v2; // ecx

  v1 = *(_OWORD *)&result;
  v2 = (unsigned __int8)(SLODWORD(result) >> 23);
  if ( v2 >= 0x7F )
  {
    if ( v2 < 0x96 )
    {
      *(float *)&v1 = *(float *)&result - (float)((LODWORD(result) & 0x7FFFFF | 0x800000) >> (-106 - v2));
      *(_OWORD *)&result = v1;
    }
    else
    {
      *(_OWORD *)&result = 0LL;
    }
  }
  return result;
}
