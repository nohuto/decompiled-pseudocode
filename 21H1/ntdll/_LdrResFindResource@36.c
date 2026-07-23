/*
 * XREFs of _LdrResFindResource@36 @ 0x4B342DB0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 */

NTSTATUS __stdcall LdrResFindResource(
        const WCHAR *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD Src[3]; // [esp+0h] [ebp-Ch] BYREF

  if ( (a9 & 0xC02) != 0 )
    return -1073741811;
  Src[0] = a2;
  Src[1] = a3;
  Src[2] = a4;
  return LdrResSearchResource(a1, Src, 3u, a9, a5, a6, a7, a8);
}
