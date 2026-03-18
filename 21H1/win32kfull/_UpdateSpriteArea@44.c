/*
 * XREFs of _UpdateSpriteArea@44 @ 0xC4700
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GreConvertMemToRedirectionDC@8 @ 0x7AB00 (_GreConvertMemToRedirectionDC@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreConvertRedirectionToMemDC@8 @ 0x200FC3 (_GreConvertRedirectionToMemDC@8.c)
 */

int __fastcall UpdateSpriteArea(
        _DWORD *a1,
        int a2,
        int a3,
        HDC a4,
        HDC a5,
        int a6,
        LONG *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ecx
  bool v12; // zf
  int result; // eax
  int v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // esi
  LONG v18; // [esp+Ch] [ebp-68h]
  struct XDCOBJ *v19; // [esp+10h] [ebp-64h]
  _DWORD v20[2]; // [esp+1Ch] [ebp-58h] BYREF
  _DWORD v21[2]; // [esp+24h] [ebp-50h] BYREF
  int v22; // [esp+2Ch] [ebp-48h]
  int v23; // [esp+30h] [ebp-44h]
  int v24; // [esp+34h] [ebp-40h]
  int v25; // [esp+38h] [ebp-3Ch]
  _DWORD *v26; // [esp+3Ch] [ebp-38h]
  int v27; // [esp+40h] [ebp-34h] BYREF
  struct ECLIPOBJ *v28; // [esp+44h] [ebp-30h]
  int v29; // [esp+48h] [ebp-2Ch]
  int v30; // [esp+4Ch] [ebp-28h]
  HDC v31; // [esp+50h] [ebp-24h]
  int v32; // [esp+54h] [ebp-20h]
  struct ECLIPOBJ *v33; // [esp+58h] [ebp-1Ch]
  LONG v34; // [esp+5Ch] [ebp-18h] BYREF
  struct XDCOBJ *v35; // [esp+60h] [ebp-14h]
  LONG v36; // [esp+64h] [ebp-10h]
  LONG v37; // [esp+68h] [ebp-Ch]

  v23 = 0;
  v27 = 0;
  v29 = a3;
  v31 = a5;
  v32 = a6;
  v26 = a1;
  v11 = a1[5];
  v34 = 0;
  v30 = a2;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v12 = (*(_BYTE *)(v11 + 18) & 8) == 0;
  v24 = *(_DWORD *)(v11 + 52);
  result = *(_DWORD *)(v11 + 56);
  v25 = result;
  if ( !v12 && a2 )
  {
    v34 = *a7;
    v35 = (struct XDCOBJ *)a7[1];
    v36 = a7[2];
    v37 = a7[3];
    v18 = v34;
    v20[0] = *(_DWORD *)(v11 + 60) - *(_DWORD *)(v11 + 52);
    v19 = v35;
    v20[1] = *(_DWORD *)(v11 + 64) - *(_DWORD *)(v11 + 56);
    v34 -= v24;
    v36 -= v24;
    v37 -= v25;
    v35 = (struct XDCOBJ *)((char *)v35 - v25);
    GreOffsetRgn(v32, -v24, -v25);
    v28 = (struct ECLIPOBJ *)(v18 - a10 + a8);
    v33 = (struct XDCOBJ *)((char *)v19 + a9 - a11);
    v22 = GreSelectBitmap(v31, v29);
    if ( v31 == a4 )
      v14 = v23;
    else
      v14 = GreSelectBitmap(a4, v30);
    GreSelectVisRgn(a4, v32, 4);
    v15 = GreConvertMemToRedirectionDC(a4, &v27);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *v26,
      *v26,
      v29,
      v34,
      v35,
      v36,
      v37,
      *v26,
      *v26,
      v30,
      v28,
      v33,
      (char *)v28 + v36 - v34,
      v37 + v33 - v35);
    NtGdiBitBltInternal(a4, v34, v35, v36 - v34, v37 - (_DWORD)v35, v31, v28, v33, -2134114272, 0, 0);
    if ( v15 )
      GreConvertRedirectionToMemDC(a4);
    v16 = v26[5];
    v21[0] = *(_DWORD *)(v16 + 52);
    v21[1] = *(_DWORD *)(v16 + 56);
    UpdateSprite(*(_DWORD *)(_gpDispInfo + 20), v26, 0, 0, 0, (int)v20, (int)a4, (int)v21, 0, 0, 0x40000000, (int)&v34);
    v17 = v32;
    GreSelectVisRgn(a4, v32, 4);
    GreOffsetRgn(v17, v24, v25);
    result = GreSelectBitmap(v31, v22);
    if ( v14 )
      return GreSelectBitmap(a4, v14);
  }
  return result;
}
