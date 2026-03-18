/*
 * XREFs of NtGdiGetRasterizerCaps @ 0x1C02AF8D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiGetRasterizerCaps(char *a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int16 Src; // [rsp+40h] [rbp+8h] BYREF
  __int16 v5; // [rsp+42h] [rbp+Ah]
  __int16 v6; // [rsp+44h] [rbp+Ch]

  v2 = 0;
  if ( a1 && (_DWORD)a2 )
  {
    if ( (unsigned int)a2 >= 6 )
      a2 = 6LL;
    Src = 6;
    v5 = (gcTrueTypeFonts != 0) + 2;
    v6 = gusLanguageID;
    if ( (unsigned __int64)&a1[a2] > MmUserProbeAddress || &a1[a2] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, &Src, (unsigned int)a2);
    return 1;
  }
  return v2;
}
