/*
 * XREFs of BgpRasGetGlyphAdvanceWidth @ 0x1405C5CBC
 * Callers:
 *     BgpFoGetAdvanceWidth @ 0x1405C47E0 (BgpFoGetAdvanceWidth.c)
 *     BgpFoGetStringAdvanceWidth @ 0x1405C4800 (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalString @ 0x1405C4B7C (BcpDisplayCriticalString.c)
 * Callees:
 *     RaspGetXExtent @ 0x1403B2274 (RaspGetXExtent.c)
 */

__int64 __fastcall BgpRasGetGlyphAdvanceWidth(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v5 = (__int64 *)&v8;
  v9 = 0LL;
  if ( a5 )
    v5 = a5;
  v8 = 0LL;
  result = RaspGetXExtent(a2, a1, a3, a2, v7, v5);
  v5[2] = 0LL;
  return result;
}
