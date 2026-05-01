/*
 * XREFs of sub_1800191A8 @ 0x1800191A8
 * Callers:
 *     sub_180001420 @ 0x180001420 (sub_180001420.c)
 *     sub_180001460 @ 0x180001460 (sub_180001460.c)
 *     sub_1800014A0 @ 0x1800014A0 (sub_1800014A0.c)
 *     sub_1800014E0 @ 0x1800014E0 (sub_1800014E0.c)
 *     sub_180001520 @ 0x180001520 (sub_180001520.c)
 *     sub_180001560 @ 0x180001560 (sub_180001560.c)
 *     sub_1800015A0 @ 0x1800015A0 (sub_1800015A0.c)
 *     sub_1800015E0 @ 0x1800015E0 (sub_1800015E0.c)
 *     sub_180001620 @ 0x180001620 (sub_180001620.c)
 *     sub_180001660 @ 0x180001660 (sub_180001660.c)
 *     sub_1800016A0 @ 0x1800016A0 (sub_1800016A0.c)
 *     sub_1800016E0 @ 0x1800016E0 (sub_1800016E0.c)
 *     sub_180001720 @ 0x180001720 (sub_180001720.c)
 *     sub_180001760 @ 0x180001760 (sub_180001760.c)
 *     sub_180016BC8 @ 0x180016BC8 (sub_180016BC8.c)
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800191A8(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rsi
  unsigned __int64 v4; // rbx
  UINT32 v5; // edx
  const WCHAR *v6; // rcx

  v2 = *a2;
  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return -2147024362;
    WindowsDeleteString(*string);
    v5 = v4;
    v6 = v2;
  }
  else
  {
    WindowsDeleteString(*string);
    v5 = 0;
    v6 = &word_180051520;
  }
  *string = 0LL;
  return WindowsCreateString(v6, v5, string);
}
