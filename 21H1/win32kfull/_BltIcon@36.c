/*
 * XREFs of _BltIcon@36 @ 0x90D6C
 * Callers:
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     ?BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z @ 0x1A4FE9 (-BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z.c)
 * Callees:
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GreSetStretchBltMode@8 @ 0x9100E (_GreSetStretchBltMode@8.c)
 */

int __fastcall BltIcon(HDC a1, LONG a2, struct XDCOBJ *a3, int a4, XLATEOBJ *a5, HDC a6, _DWORD *a7, int a8, int a9)
{
  struct XDCOBJ *v10; // ebx
  int v11; // edi
  unsigned int v13; // eax
  HDC v14; // ebx
  struct XDCOBJ *v16; // [esp-18h] [ebp-3Ch]
  struct XDCOBJ *v17; // [esp-14h] [ebp-38h]
  int v18; // [esp-4h] [ebp-28h]
  int v21; // [esp+38h] [ebp+14h]
  unsigned int v22; // [esp+3Ch] [ebp+18h]

  v10 = 0;
  if ( a8 == 1 )
    goto LABEL_2;
  if ( a8 == 3 )
  {
    v11 = a7[20];
  }
  else
  {
    v11 = a7[14];
    if ( !v11 )
    {
      v10 = (struct XDCOBJ *)(a7[23] >> 1);
LABEL_2:
      v11 = a7[13];
    }
  }
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  v18 = v11;
  GreSetStretchBltMode(a1);
  v21 = GreSelectBitmap(a6, v18);
  v13 = a7[23];
  if ( a8 == 3 )
  {
    LOBYTE(v22) = 0;
    HIWORD(v22) = 511;
    BYTE1(v22) = a9 < 0 ? 0 : 0x80;
    v17 = v10;
    v14 = a1;
    NtGdiAlphaBlend(a1, a2, a3, a4, a5, a6, 0, v17, a7[22], v13 >> 1, v22, 0);
  }
  else
  {
    v16 = v10;
    v14 = a1;
    GreStretchBltInternal(a1, a2, a3, a4, (int)a5, a6, 0, v16, a7[22], v13 >> 1, a9, -1, 0);
  }
  GreSetStretchBltMode(v14);
  GreSetTextColor(v14);
  GreSetBkColor(v14);
  GreSelectBitmap(a6, v21);
  return 1;
}
