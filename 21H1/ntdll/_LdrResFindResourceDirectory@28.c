/*
 * XREFs of _LdrResFindResourceDirectory@28 @ 0x4B2B97D0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 */

int __stdcall LdrResFindResourceDirectory(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edx
  _DWORD Src[2]; // [esp+0h] [ebp-8h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return -1073741811;
  if ( a2 )
    Src[0] = a2;
  v7 = a2 != 0;
  if ( a3 )
  {
    Src[1] = a3;
    v7 = 2;
  }
  return LdrResSearchResource(a1, Src, v7, a7 | 2, a4, 0, a5, a6);
}
