/*
 * XREFs of _fraction_c@8 @ 0xEEFAF
 * Callers:
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 *     ?vCosSin@@YGXVEFLOAT@@PAV1@1@Z @ 0x2154BB (-vCosSin@@YGXVEFLOAT@@PAV1@1@Z.c)
 *     ?vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z @ 0x2156A8 (-vCosSinPrecise@@YGXVEFLOAT@@PAV1@1@Z.c)
 * Callees:
 *     _dNormalize@0 @ 0xEEE14 (_dNormalize@0.c)
 */

_DWORD *__stdcall fraction_c(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  char v5; // zf
  int v7; // ecx

  HIDWORD(v2) = a2;
  LODWORD(v2) = *a2;
  v3 = a2[1];
  if ( v3 <= 0 )
  {
    if ( (int)v2 < 0 )
    {
      v7 = -v3;
      LODWORD(v2) = (unsigned int)((int)v2 >> v7) >> 1;
      v3 = 1 - v7;
    }
  }
  else if ( v3 >= 32 || (LODWORD(v2) = (_DWORD)v2 << v3 >> 1, LODWORD(v2) = dNormalize(v2), v5) )
  {
    LODWORD(v2) = 0;
    v3 = 0;
  }
  else
  {
    v3 = 1 - v4;
  }
  *a1 = v2;
  a1[1] = v3;
  return a1;
}
