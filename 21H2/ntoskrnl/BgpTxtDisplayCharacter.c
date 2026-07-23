/*
 * XREFs of BgpTxtDisplayCharacter @ 0x1403B19F8
 * Callers:
 *     BgpDisplayCharacterEx @ 0x1405C4604 (BgpDisplayCharacterEx.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F5370 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F54C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409F8288 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     BgpGxDrawRectangle @ 0x14039BFE8 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14039C3D0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14039C5BC (BgpGxConvertRectangleEx.c)
 *     BgpFoGetTextMetrics @ 0x14039C8DC (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14039CB10 (BgpGxFillRectangle.c)
 *     TxtpGetCacheEntry @ 0x1403B1C34 (TxtpGetCacheEntry.c)
 *     BgpRasPrintGlyph @ 0x1403B1CB8 (BgpRasPrintGlyph.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 *     TxtpAddCacheEntry @ 0x1409F55FC (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x1409F83F0 (BgpGxBlendRectangle.c)
 *     TxtpJustifyRectangle @ 0x1409F89B8 (TxtpJustifyRectangle.c)
 */

__int64 __fastcall BgpTxtDisplayCharacter(__int64 a1, unsigned __int16 a2, char a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int *v9; // r8
  char v10; // r15
  __int64 v11; // r12
  char v12; // r15
  int v13; // r13d
  int v14; // edi
  int *v15; // rsi
  char v16; // r14
  __int64 CacheEntry; // rax
  __int64 result; // rax
  __int64 v19; // r14
  int v20; // ecx
  int v21; // eax
  unsigned int BitsPerPixel; // eax
  __int64 v23; // r11
  int v24; // eax
  int v25; // [rsp+58h] [rbp-51h]
  int v26; // [rsp+60h] [rbp-49h] BYREF
  int v27; // [rsp+64h] [rbp-45h]
  int v28; // [rsp+68h] [rbp-41h] BYREF
  __int64 v29; // [rsp+70h] [rbp-39h]
  int v30; // [rsp+78h] [rbp-31h]
  int v31; // [rsp+7Ch] [rbp-2Dh]
  __int64 v32; // [rsp+80h] [rbp-29h] BYREF
  __int64 v33; // [rsp+88h] [rbp-21h] BYREF
  __int64 v34; // [rsp+90h] [rbp-19h] BYREF
  __int64 v35; // [rsp+98h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-9h]
  char v42; // [rsp+120h] [rbp+77h]

  v33 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v36 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  v25 = 0;
  v26 = 0;
  v9 = (unsigned int *)(a1 + 40);
  v10 = *(_BYTE *)(a1 + 60);
  v11 = 0LL;
  v27 = 0;
  v12 = v10 & 1;
  v30 = 0;
  v13 = 0;
  v31 = 0;
  v14 = 0;
  v15 = *(int **)(a1 + 32);
  v16 = v12;
  v29 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v42 = 0;
  v35 = a1 + 40;
  v28 = 0;
  if ( a2 < 0x20u )
    goto LABEL_12;
  if ( v12 )
  {
    CacheEntry = TxtpGetCacheEntry(&TxtpTextCache);
    v29 = CacheEntry;
    if ( CacheEntry )
    {
      v7 = *(_QWORD *)(CacheEntry + 48);
      v16 = 0;
      goto LABEL_5;
    }
  }
  BgpGxFillRectangle((__int64)v15, *v9);
  v19 = v35;
  v31 = v15[1];
  v30 = *v15;
  v21 = BgpRasPrintGlyph(v20, v35, a2, v26, v27, 1, (__int64)&v28);
  v14 = v21;
  if ( v21 < 0 )
  {
    DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v21, a2);
    v13 = v28;
    v6 = 0;
    v16 = v12;
    goto LABEL_11;
  }
  v13 = v28;
  if ( !v12 )
  {
    result = BgpFoGetTextMetrics(v19, (__int64)&v33);
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v25 = HIDWORD(v33);
    *v15 = HIDWORD(v33);
    v15[1] = v13;
    v42 = 1;
  }
  if ( v36 )
  {
    TxtpJustifyRectangle(a1, a1 + 8, &v26);
    v24 = BgpGxBlendRectangle(v23, v15, &v26, &v32);
    v7 = v32;
    v14 = v24;
    v16 = v12;
    if ( v24 < 0 )
      goto LABEL_10;
  }
  else
  {
    v7 = (__int64)v15;
  }
  v16 = v12;
  if ( !v12 )
    goto LABEL_5;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( (int *)v7 != v15 && BitsPerPixel == *(_DWORD *)(v7 + 8) )
  {
    v11 = v7;
LABEL_5:
    v27 = *(_DWORD *)(a1 + 4);
    v26 += *(_DWORD *)a1;
    if ( (a3 & 1) != 0
      || (dword_140C134F0 & 0x1000000) != 0
      || (v14 = BgpGxDrawRectangle((_BYTE *)v7, (__int64)&v26), v14 >= 0) )
    {
      if ( v16 )
        v14 = TxtpAddCacheEntry(&TxtpTextCache, a2, v35, v11);
    }
    goto LABEL_10;
  }
  v14 = BgpGxConvertRectangleEx(v7, BitsPerPixel, &v34, 0);
  if ( v14 >= 0 )
  {
    if ( (int *)v7 != v15 )
      BgpGxRectangleDestroy(v7);
    v11 = v34;
    v7 = v34;
    goto LABEL_5;
  }
LABEL_10:
  v6 = v25;
LABEL_11:
  v8 = v29;
LABEL_12:
  if ( a4 )
    *a4 = v13;
  if ( a5 )
    *a5 = v6;
  if ( (int *)v7 != v15 && !v8 && (!v16 || v14 < 0) && v7 )
    BgpGxRectangleDestroy(v7);
  if ( v42 )
  {
    *v15 = v30;
    v15[1] = v31;
  }
  return (unsigned int)v14;
}
