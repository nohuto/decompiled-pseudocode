/*
 * XREFs of ?vLoadAndConvertBGR24ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C444
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvertBGR24ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  unsigned __int8 *v5; // edx
  unsigned __int8 *i; // esi
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // [esp+10h] [ebp+Ch]

  v5 = &a2[3 * a3];
  for ( i = &a2[3 * a3 + 3 * a4]; v5 != i; ++a1 )
  {
    LOWORD(v9) = *(_WORD *)v5;
    v8 = v5[2];
    v5 += 3;
    BYTE2(v9) = v8;
    HIBYTE(v9) = -1;
    *a1 = (unsigned int)v9;
  }
}
