/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x14039C078
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039BFE8 (BgpGxDrawRectangle.c)
 * Callees:
 *     GxpAdjustRectangleToFrameBuffer @ 0x14039C2A4 (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x14039C3D0 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14039C5BC (BgpGxConvertRectangleEx.c)
 *     BgfxGrowDirtyRect @ 0x1403C06F8 (BgfxGrowDirtyRect.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     GxpGetRotatedPixelOffset @ 0x1405C4748 (GxpGetRotatedPixelOffset.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(unsigned __int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned int v4; // r13d
  unsigned int BitsPerPixel; // r15d
  __int64 result; // rax
  int v7; // r11d
  int v8; // esi
  unsigned int v9; // r15d
  unsigned int v10; // r10d
  __int64 v11; // rsi
  char *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  char *v19; // rdi
  size_t v20; // r12
  __int64 v21; // r13
  __int64 v22; // r14
  int RotatedPixelOffset; // ebx
  _BYTE *v24; // rsi
  __int64 v25; // r9
  unsigned int v26; // esi
  char *v27; // r12
  _BYTE *v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  unsigned int v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+88h] [rbp-78h]
  _DWORD *v39; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+98h] [rbp-68h]
  _DWORD v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-48h]
  void *Src; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  _BYTE v48[80]; // [rsp+E0h] [rbp-20h] BYREF

  v39 = a2;
  v2 = a2;
  v37 = a1;
  v3 = a1;
  v47 = 0LL;
  v45 = 0LL;
  v30 = 0LL;
  v31 = 0;
  memset(v48, 0, 0x48uLL);
  v4 = 0;
  v36 = 0LL;
  v35 = 0LL;
  v28 = 0LL;
  v29 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v32 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v33 = HIDWORD(BgInternal);
  if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)v3 || *(_DWORD *)(v3 + 8) != BitsPerPixel || !v2 )
    return 3221225485LL;
  if ( (dword_140C134F0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(v3, (_DWORD)v2, (unsigned int)&v32, (unsigned int)&v36, (__int64)&v35, 1);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)BgInternal )
    {
      v7 = v33;
      v8 = v33 * v2[1];
      v9 = BitsPerPixel >> 3;
      v10 = v9 * v36;
      Src = *(void **)(v3 + 24);
      v11 = v9 * (*v2 + v8);
      v34 = v9 * v36;
      v12 = (char *)qword_140C134A0 + v11;
      if ( !BYTE2(BgInternal) )
      {
LABEL_10:
        v13 = *(_DWORD *)(v3 + 4);
        v14 = v13;
        v15 = *(_DWORD *)v3;
        v16 = *(_DWORD *)v3;
LABEL_11:
        v17 = v9 * v14;
        v18 = v9 * v33;
        v30 = __PAIR64__(v15, v17);
        v31 = v9 * v33;
        if ( BYTE2(BgInternal) )
        {
          v45 = __PAIR64__(v16, v13);
          v26 = 0;
          HIDWORD(v28) = 0;
          if ( v16 )
          {
            while ( 1 )
            {
              LODWORD(v28) = 0;
              v27 = (char *)(*(_QWORD *)(v3 + 24) + v10 * v26);
              if ( *(_DWORD *)(v3 + 4) )
                break;
LABEL_45:
              ++v26;
              v4 = 0;
              HIDWORD(v28) = v26;
              if ( v26 >= *(_DWORD *)v3 )
                goto LABEL_16;
            }
            v39 = (_DWORD *)v32;
            v37 = v45;
            v40 = v7;
            v38 = v47;
            while ( 1 )
            {
              RotatedPixelOffset = GxpGetRotatedPixelOffset(
                                     (_DWORD)v28,
                                     (unsigned int)&v37,
                                     (_DWORD)v2,
                                     (unsigned int)&v39,
                                     (__int64)&v29);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_19;
              memmove((char *)qword_140C134A0 + v9 * v29, v27, v9);
              ++v4;
              v27 += v9;
              LODWORD(v28) = v4;
              if ( v4 >= *(_DWORD *)(v3 + 4) )
              {
                v10 = v34;
                v7 = v33;
                goto LABEL_45;
              }
            }
          }
        }
        else if ( v15 )
        {
          v19 = (char *)Src;
          v20 = v17;
          v28 = (_BYTE *)v18;
          v21 = v10;
          v22 = v18;
          do
          {
            memmove(v12, v19, v20);
            v19 += v21;
            v12 += v22;
            --v15;
          }
          while ( v15 );
          v3 = v37;
          v2 = v39;
        }
LABEL_16:
        if ( qword_140C13650 )
          BgfxGrowDirtyRect(&v30, v2, v9);
LABEL_18:
        RotatedPixelOffset = 0;
LABEL_19:
        *(_DWORD *)v3 = HIDWORD(v36);
        *(_DWORD *)(v3 + 4) = v36;
        *(_QWORD *)v2 = v35;
        return (unsigned int)RotatedPixelOffset;
      }
      if ( BYTE2(BgInternal) != 1 )
      {
        if ( BYTE2(BgInternal) == 2 )
          goto LABEL_10;
        if ( BYTE2(BgInternal) != 3 )
        {
          RotatedPixelOffset = -1073741811;
          goto LABEL_19;
        }
      }
      v16 = *(_DWORD *)v3;
      v14 = *(_DWORD *)v3;
      v15 = *(_DWORD *)(v3 + 4);
      v13 = v15;
      goto LABEL_11;
    }
    v24 = 0LL;
    v41[0] = *(_DWORD *)v3;
    v41[1] = *(_DWORD *)(v3 + 4);
    v28 = 0LL;
    if ( (dword_140C134F0 & 8) == 0 )
    {
      v43 = *(_DWORD *)(v3 + 12);
      v44 = *(_QWORD *)(v3 + 24);
      v42 = xmmword_140C13490;
      goto LABEL_29;
    }
    if ( (dword_140C134F0 & 0xC00) != 0 )
    {
      v25 = 1LL;
      v28 = v48;
    }
    else
    {
      v25 = 0LL;
    }
    result = BgpGxConvertRectangleEx(v3, 4LL, &v28, v25);
    if ( (int)result >= 0 )
    {
      v24 = v28;
      v43 = *((_DWORD *)v28 + 3);
      v44 = *((_QWORD *)v28 + 3);
      v42 = 1;
LABEL_29:
      RotatedPixelOffset = ((__int64 (__fastcall *)(_DWORD *, _DWORD *, _QWORD))qword_140C134A0)(v41, v2, 0LL);
      if ( v24 && v24 != v48 )
        BgpGxRectangleDestroy(v24);
      if ( RotatedPixelOffset < 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  return result;
}
