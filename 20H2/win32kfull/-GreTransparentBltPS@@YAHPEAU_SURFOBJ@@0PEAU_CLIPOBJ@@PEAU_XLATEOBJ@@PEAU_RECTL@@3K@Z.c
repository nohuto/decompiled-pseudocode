/*
 * XREFs of ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0290A7C
 * Callers:
 *     EngTransparentBlt @ 0x1C00869D0 (EngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B520 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C02927C8 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall GreTransparentBltPS(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  int v10; // ebx
  RECTL rclBounds; // xmm0
  unsigned int i; // esi
  LONG v13; // r8d
  LONG left; // r10d
  LONG right; // ecx
  LONG v16; // edx
  LONG top; // r9d
  LONG v18; // r14d
  LONG v19; // edi
  LONG bottom; // r11d
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  int v23; // edi
  int v24; // eax
  LONG v25; // [rsp+44h] [rbp-214h]
  unsigned int v26; // [rsp+48h] [rbp-210h]
  struct _RECTL v27; // [rsp+50h] [rbp-208h] BYREF
  int v28; // [rsp+60h] [rbp-1F8h]
  struct _SURFOBJ *v29; // [rsp+68h] [rbp-1F0h]
  struct _SURFOBJ *v30; // [rsp+70h] [rbp-1E8h]
  struct _RECTL *v31; // [rsp+78h] [rbp-1E0h]
  __int64 v32; // [rsp+80h] [rbp-1D8h] BYREF
  char v33; // [rsp+88h] [rbp-1D0h]
  int v34; // [rsp+8Ch] [rbp-1CCh]
  struct _SURFOBJ *v35; // [rsp+90h] [rbp-1C8h]
  struct _SURFOBJ *v36; // [rsp+98h] [rbp-1C0h]
  struct _CLIPOBJ *v37; // [rsp+A0h] [rbp-1B8h]
  struct _XLATEOBJ *v38; // [rsp+A8h] [rbp-1B0h]
  struct _RECTL *v39; // [rsp+B0h] [rbp-1A8h]
  _DWORD v40[84]; // [rsp+C0h] [rbp-198h] BYREF

  v30 = a2;
  v29 = a1;
  v35 = a1;
  v36 = a2;
  v37 = a3;
  v39 = a5;
  v31 = a6;
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  memset(v40, 0, 0x144uLL);
  if ( !a3 || !a3->iDComplexity )
  {
    rclBounds = *a5;
    goto LABEL_9;
  }
  if ( a3->iDComplexity == 1 )
  {
    rclBounds = a3->rclBounds;
LABEL_9:
    v10 = 0;
    v40[0] = 1;
    *(RECTL *)&v40[1] = rclBounds;
    goto LABEL_10;
  }
  if ( a3->iDComplexity != 3 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v32);
    return 0LL;
  }
  v10 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  if ( !a4 )
    a4 = xloIdent;
  v38 = a4;
  if ( !v10 )
    goto LABEL_14;
  do
  {
    v10 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)v40, 0LL);
LABEL_14:
    for ( i = 0; i < v40[0]; ++i )
    {
      v13 = v40[4 * i + 1];
      left = a5->left;
      if ( v13 < a5->left )
      {
        v40[4 * i + 1] = left;
        v13 = left;
      }
      right = a5->right;
      if ( v40[4 * i + 3] <= right )
        right = v40[4 * i + 3];
      else
        v40[4 * i + 3] = right;
      v16 = v40[4 * i + 2];
      top = a5->top;
      if ( v16 >= top )
      {
        v18 = v40[4 * i + 2];
      }
      else
      {
        v40[4 * i + 2] = top;
        v16 = top;
        v18 = top;
      }
      v25 = v18;
      v19 = v40[4 * i + 4];
      bottom = a5->bottom;
      if ( v19 > bottom )
      {
        v40[4 * i + 4] = bottom;
        v19 = bottom;
      }
      if ( v16 < v19 && v13 < right )
      {
        v27.left = v13;
        v27.top = v18;
        v27.right = right;
        v27.bottom = v18 + 1;
        v21 = v13 + v31->left - left;
        v26 = v21;
        v22 = v18 + v31->top - top;
        v23 = v19 - v25;
        while ( 1 )
        {
          v24 = v23--;
          v28 = v23;
          if ( !v24 )
            break;
          vTransparentScan(v29, v30, v21, v22, a4, &v27, a7);
          v21 = v26;
          ++v22;
          ++v27.top;
          ++v27.bottom;
        }
      }
    }
  }
  while ( v10 );
  SURFMEM::~SURFMEM((SURFMEM *)&v32);
  return 1LL;
}
