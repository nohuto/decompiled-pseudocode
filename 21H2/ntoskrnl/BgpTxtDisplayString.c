/*
 * XREFs of BgpTxtDisplayString @ 0x1409F7784
 * Callers:
 *     BgDisplayString @ 0x1409F6570 (BgDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14039BE98 (BgpGxDrawRectangle.c)
 *     BgpFoGetTextMetrics @ 0x14039C78C (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14039C9C0 (BgpGxFillRectangle.c)
 *     BgpRasPrintGlyph @ 0x1403B1B48 (BgpRasPrintGlyph.c)
 *     BgpFoGetAdvanceWidth @ 0x1405C45B0 (BgpFoGetAdvanceWidth.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1409F32C0 (BgpGxRectangleCreate.c)
 *     BgpGxBlendRectangle @ 0x1409F73F0 (BgpGxBlendRectangle.c)
 *     BgpTxtClearRegion @ 0x1409F7754 (BgpTxtClearRegion.c)
 *     TxtpJustifyRectangle @ 0x1409F79B8 (TxtpJustifyRectangle.c)
 */

__int64 __fastcall BgpTxtDisplayString(__int64 a1, __int16 *a2, __int64 a3, int a4, __m128i *a5)
{
  __int16 *v6; // r14
  int AdvanceWidth; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  __int16 *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __m128i *v20; // r15
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r13d
  int v24; // eax
  unsigned int *v25; // rcx
  int v26; // eax
  _BYTE *v27; // rsi
  __int64 v29; // [rsp+38h] [rbp-28h]
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-8h]
  _BYTE *v32; // [rsp+A0h] [rbp+40h] BYREF
  int v33; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v30 = 0LL;
  v33 = 0;
  v6 = a2;
  v34 = 0LL;
  v31 = 0;
  v32 = 0LL;
  a5 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 64) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 68) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = a1 + 40;
        v12 = a2;
        while ( 1 )
        {
          AdvanceWidth = BgpFoGetAdvanceWidth(v11, (unsigned __int16)*v12, (int)&v33, a4, 0LL);
          if ( AdvanceWidth < 0 )
            break;
          v9 += v33;
          v11 = a1 + 40;
          ++v10;
          ++v12;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        AdvanceWidth = BgpFoGetTextMetrics(a1 + 40, (__int64)&v32);
        if ( AdvanceWidth >= 0 )
        {
          v13 = *(_DWORD *)(a1 + 12);
          v14 = HIDWORD(v32);
          v31 = v9;
          if ( HIDWORD(v32) > v13 )
            v14 = v13;
          v15 = *(_DWORD *)(a1 + 8);
          HIDWORD(v30) = v14;
          if ( v9 > v15 )
            v9 = v15;
          LODWORD(v30) = v9;
          v16 = BgpGxRectangleCreate(&v30, 32, (__int64 *)&a5);
          v20 = a5;
          AdvanceWidth = v16;
          if ( v16 >= 0 )
          {
            BgpGxFillRectangle((__int64)a5, *(_DWORD *)(a1 + 40));
            v21 = 0;
            v22 = 0;
            v23 = 0;
            v34 = 0LL;
            if ( (_DWORD)v8 )
            {
              while ( 1 )
              {
                v24 = BgpRasPrintGlyph(v20, a1 + 40, *v6, v21, v22, 0, &v33, v29, 0LL);
                AdvanceWidth = v24;
                if ( v24 == -2147483643 )
                  break;
                if ( v24 < 0 )
                  goto LABEL_30;
                v21 = v33 + v34;
                LODWORD(v34) = v21;
                if ( v21 > v9 )
                  break;
                ++v23;
                ++v6;
                if ( v23 >= (unsigned int)v8 )
                  break;
                v22 = HIDWORD(v34);
              }
            }
            TxtpJustifyRectangle(a1, &v30, &v34);
            v25 = *(unsigned int **)(a1 + 24);
            v32 = 0LL;
            v26 = BgpGxBlendRectangle(v25, (__int64)v20, (__int64)&v34, (unsigned __int64)&v32);
            v27 = v32;
            AdvanceWidth = v26;
            if ( v26 >= 0 )
            {
              AdvanceWidth = BgpTxtClearRegion(a1);
              if ( AdvanceWidth >= 0 )
              {
                HIDWORD(v34) = *(_DWORD *)(a1 + 4);
                LODWORD(v34) = *(_DWORD *)a1 + v34;
                AdvanceWidth = BgpGxDrawRectangle(v27, (__int64)&v34);
              }
            }
            if ( v27 )
              BgpGxRectangleDestroy((__int64)v27, v17, v18, v19);
          }
LABEL_30:
          if ( v20 )
            BgpGxRectangleDestroy((__int64)v20, v17, v18, v19);
        }
      }
    }
  }
  else
  {
    return (unsigned int)BgpTxtClearRegion(a1);
  }
  return (unsigned int)AdvanceWidth;
}
