/*
 * XREFs of GxpReadFrameBufferPixels @ 0x1409F2A40
 * Callers:
 *     BgpGxReadRectangle @ 0x1409F29D0 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetResolution @ 0x140251E30 (BgpGetResolution.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x14039C2A4 (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x14039C3D0 (BgpGetBitsPerPixel.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x1405C4748 (GxpGetRotatedPixelOffset.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r14d
  unsigned int *v3; // rsi
  unsigned int v5; // r15d
  _DWORD *Resolution; // rax
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // r13d
  char *v14; // r12
  unsigned int v15; // ebx
  char *v16; // r14
  size_t v17; // r13
  __int64 v18; // rsi
  unsigned int v19; // r13d
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  char *v21; // [rsp+38h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  int v23; // [rsp+48h] [rbp-41h]
  __int64 v24; // [rsp+50h] [rbp-39h] BYREF
  int v25; // [rsp+58h] [rbp-31h]
  __int64 v26; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+68h] [rbp-21h]
  __int64 v28; // [rsp+70h] [rbp-19h] BYREF
  int v29; // [rsp+78h] [rbp-11h]
  _DWORD v30[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+90h] [rbp+7h]
  int RotatedPixelOffset; // [rsp+F0h] [rbp+67h]
  int v34; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+108h] [rbp+7Fh]

  v2 = 0;
  v24 = 0LL;
  v3 = a2;
  v25 = 0;
  v20 = 0LL;
  v34 = 0;
  v5 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  Resolution = BgpGetResolution(&v28);
  v8 = Resolution[2];
  v22 = *(_QWORD *)Resolution;
  v23 = v8;
  if ( !a1 )
    return 3221225485LL;
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 )
    return 3221225485LL;
  v10 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 || *(_DWORD *)(a1 + 8) != v7 || !v3 || v9 + *v3 > (unsigned int)v22 || v10 + v3[1] > HIDWORD(v22) )
    return 3221225485LL;
  if ( (dword_140C134F0 & 8) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 12) < v5 * v9 * v10 )
    return 3221225507LL;
  if ( (dword_140C134F0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer((unsigned int *)a1, v3, (__int64)&v22, (unsigned int *)&v24, &v20, 0);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    RotatedPixelOffset = 0;
    if ( !(_BYTE)BgInternal )
    {
      v30[0] = *(_DWORD *)a1;
      LOBYTE(v12) = 1;
      v30[1] = *(_DWORD *)(a1 + 4);
      v30[3] = *(_DWORD *)(a1 + 12);
      v30[2] = xmmword_140C13490;
      v31 = *(_QWORD *)(a1 + 24);
      v13 = ((__int64 (__fastcall *)(_DWORD *, unsigned int *, __int64))qword_140C134A0)(v30, v3, v12);
      goto LABEL_19;
    }
    v14 = *(char **)(a1 + 24);
    v15 = *(_DWORD *)a1;
    v21 = (char *)qword_140C134A0;
    if ( BYTE2(BgInternal) )
    {
      HIDWORD(v35) = 0;
      if ( !v15 )
        goto LABEL_19;
      while ( 1 )
      {
        v19 = 0;
        LODWORD(v35) = 0;
        if ( *(_DWORD *)(a1 + 4) )
          break;
LABEL_30:
        HIDWORD(v35) = ++v2;
        if ( v2 >= *(_DWORD *)a1 )
          goto LABEL_18;
      }
      v26 = v22;
      v27 = v23;
      v28 = v24;
      v29 = v25;
      while ( 1 )
      {
        RotatedPixelOffset = GxpGetRotatedPixelOffset(v35, (int *)&v28, v3, (__int64)&v26, &v34);
        if ( RotatedPixelOffset < 0 )
          break;
        memmove(v14, &v21[v5 * v34], v5);
        ++v19;
        v14 += v5;
        LODWORD(v35) = v19;
        if ( v19 >= *(_DWORD *)(a1 + 4) )
          goto LABEL_30;
      }
    }
    else
    {
      v16 = (char *)qword_140C134A0 + v5 * (*v3 + v23 * v3[1]);
      if ( !v15 )
      {
LABEL_19:
        *(_DWORD *)a1 = HIDWORD(v24);
        *(_DWORD *)(a1 + 4) = v24;
        *(_QWORD *)v3 = v20;
        return v13;
      }
      v17 = v5 * *(_DWORD *)(a1 + 4);
      v18 = v5 * v23;
      do
      {
        memmove(v14, v16, v17);
        v16 += v18;
        v14 += v5 * *(_DWORD *)(a1 + 4);
        --v15;
      }
      while ( v15 );
      v3 = a2;
    }
LABEL_18:
    v13 = RotatedPixelOffset;
    goto LABEL_19;
  }
  return result;
}
