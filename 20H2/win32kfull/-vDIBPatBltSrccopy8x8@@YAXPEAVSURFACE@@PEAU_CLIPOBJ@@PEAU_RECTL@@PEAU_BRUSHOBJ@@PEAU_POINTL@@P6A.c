/*
 * XREFs of ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C4894
 * Callers:
 *     EngBitBlt @ 0x1C0088370 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B520 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall vDIBPatBltSrccopy8x8(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        void (*a6)(struct _PATBLTFRAME *, int))
{
  _QWORD *pvRbrush; // rcx
  int v11; // ebx
  int v12; // r11d
  LONG *v13; // rcx
  LONG v14; // eax
  LONG v15; // edx
  LONG v16; // r8d
  LONG v17; // r9d
  LONG v18; // r10d
  LONG v19; // r9d
  LONG left; // edx
  LONG right; // ecx
  LONG top; // r8d
  LONG bottom; // r9d
  _QWORD v24[2]; // [rsp+38h] [rbp-1F0h] BYREF
  int v25; // [rsp+48h] [rbp-1E0h]
  int v26; // [rsp+4Ch] [rbp-1DCh]
  struct _RECTL *v27; // [rsp+50h] [rbp-1D8h]
  int v28; // [rsp+58h] [rbp-1D0h]
  int v29; // [rsp+5Ch] [rbp-1CCh]
  __int128 v30; // [rsp+60h] [rbp-1C8h]
  struct _CLIPOBJ *v31; // [rsp+70h] [rbp-1B8h]
  struct _RECTL *v32; // [rsp+78h] [rbp-1B0h]
  void (*v33)(struct _PATBLTFRAME *, int); // [rsp+80h] [rbp-1A8h]
  _DWORD v34[84]; // [rsp+90h] [rbp-198h] BYREF

  v31 = a2;
  v32 = a3;
  v33 = a6;
  v27 = 0LL;
  v30 = 0LL;
  memset(v34, 0, 0x144uLL);
  v24[0] = *((_QWORD *)a1 + 10);
  v25 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v24[1] = pvRbrush[4];
  v26 = *((_DWORD *)pvRbrush + 7);
  v28 = a5->x & 7;
  v29 = a5->y & 7;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      *(RECTL *)&v34[1] = a2->rclBounds;
      left = _mm_cvtsi128_si32(*(__m128i *)&v34[1]);
      if ( left <= a3->left )
        left = a3->left;
      v34[1] = left;
      right = v34[3];
      if ( v34[3] >= a3->right )
        right = a3->right;
      v34[3] = right;
      top = v34[2];
      if ( v34[2] <= a3->top )
        top = a3->top;
      v34[2] = top;
      bottom = v34[4];
      if ( v34[4] >= a3->bottom )
        bottom = a3->bottom;
      v34[4] = bottom;
      if ( left < right && top < bottom )
      {
        v27 = (struct _RECTL *)&v34[1];
        ((void (__fastcall *)(_QWORD *, __int64))a6)(v24, 1LL);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)v34, 0LL);
        if ( (unsigned int)(v34[0] - 1) <= 0x13 )
        {
          v12 = 0;
          v13 = &v34[3];
          while ( v12 < v34[0] )
          {
            v14 = a3->left;
            if ( *(v13 - 2) >= a3->left )
              v14 = *(v13 - 2);
            else
              *(v13 - 2) = v14;
            v15 = a3->right;
            if ( *v13 <= v15 )
              v15 = *v13;
            else
              *v13 = v15;
            v16 = *(v13 - 1);
            v17 = a3->top;
            if ( v16 < v17 )
            {
              *(v13 - 1) = v17;
              v16 = v17;
            }
            v18 = v13[1];
            v19 = a3->bottom;
            if ( v18 > v19 )
            {
              v13[1] = v19;
              v18 = v19;
            }
            if ( v15 < v14 )
              *v13 = v14;
            if ( v18 < v16 )
              v13[1] = v16;
            ++v12;
            v13 += 4;
          }
          v27 = (struct _RECTL *)&v34[1];
          ((void (__fastcall *)(_QWORD *, _QWORD))a6)(v24, v34[0]);
        }
      }
      while ( v11 );
    }
  }
  else
  {
    v27 = a3;
    ((void (__fastcall *)(_QWORD *, __int64))a6)(v24, 1LL);
  }
}
