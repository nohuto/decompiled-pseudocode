/*
 * XREFs of ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00C8A90
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00CB21C (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00C8C64 (-bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z.c)
 *     EngBitBlt @ 0x1C00CD5F0 (EngBitBlt.c)
 *     EngCopyBits @ 0x1C00D10E0 (EngCopyBits.c)
 *     EngAlphaBlend @ 0x1C00D1A90 (EngAlphaBlend.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall bShadowAlphaCursor(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        int a7)
{
  unsigned int v7; // ebx
  LONG cx; // eax
  LONG v10; // r13d
  XLATEOBJ *v12; // rcx
  SURFOBJ *v13; // rdi
  unsigned int *pvBits; // rcx
  ULONG i; // edx
  unsigned int v16; // eax
  LONG right; // ecx
  LONG v18; // edx
  LONG v20; // eax
  SURFOBJ *v21; // rdx
  POINTL *pptlSrc; // rax
  _DWORD *v23; // rax
  ULONG v24; // ecx
  LONG bottom; // eax
  XLATEOBJ *v26; // rcx
  POINTL *v27; // rax
  unsigned __int64 v28; // [rsp+60h] [rbp-81h] BYREF
  __int64 v29; // [rsp+68h] [rbp-79h] BYREF
  XLATEOBJ v30; // [rsp+70h] [rbp-71h] BYREF
  struct _XLATEOBJ *v31; // [rsp+88h] [rbp-59h]
  XLATEOBJ *v32; // [rsp+90h] [rbp-51h]
  BLENDOBJ pBlendObj; // [rsp+98h] [rbp-49h] BYREF
  XLATEOBJ *v34; // [rsp+A0h] [rbp-41h]
  XLATEOBJ *v35; // [rsp+A8h] [rbp-39h]
  XLATEOBJ *v36; // [rsp+B0h] [rbp-31h]
  RECTL prclDest; // [rsp+B8h] [rbp-29h] BYREF
  RECTL prclSrc; // [rsp+C8h] [rbp-19h] BYREF

  v7 = 0;
  cx = psoSrc->sizlBitmap.cx;
  v10 = psoSrc->sizlBitmap.cy >> 1;
  v12 = a5;
  v13 = a3;
  v32 = pxlo;
  v31 = a5;
  prclSrc = 0LL;
  *(_QWORD *)&v30.iUniq = 0LL;
  *(_QWORD *)&v30.iSrcType = 0LL;
  v29 = 0LL;
  v30.pulXlate = (ULONG *)&v28;
  if ( a7 )
  {
    if ( a3 )
    {
      prclDest.right = cx + 6;
      prclDest.bottom = v10 + 4;
      prclDest.left = 6;
      prclDest.top = 4;
      EngBitBlt(a1, a3, 0LL, 0LL, 0LL, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      pvBits = (unsigned int *)a1->pvBits;
      for ( i = a1->cjBits >> 2; i; --i )
      {
        if ( (*pvBits & 0xFF000000) != 0 )
          v16 = (*((unsigned __int8 *)pvBits + 3) << 22) & 0xFF000000;
        else
          v16 = 0;
        *pvBits++ = v16;
      }
      goto LABEL_7;
    }
    return 0LL;
  }
  prclDest.right = cx;
  v20 = HIDWORD(v29);
  v21 = a3;
  if ( !a3 )
  {
    v20 = v10;
    v12 = pxlo;
  }
  HIDWORD(v29) = v20;
  pptlSrc = (POINTL *)&v29;
  if ( a3 )
    pptlSrc = &gptlZero;
  else
    v21 = psoSrc;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.bottom = v10;
  EngBitBlt(a1, v21, 0LL, 0LL, v12, &prclDest, pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
  v28 = 0xFFFFFFFF00000000uLL;
  EngBitBlt(a1, psoSrc, 0LL, 0LL, &v30, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
  v23 = a1->pvBits;
  v24 = a1->cjBits >> 2;
  if ( v24 )
  {
    while ( !*v23 )
    {
      ++v23;
      if ( !--v24 )
        goto LABEL_23;
    }
    return 0LL;
  }
LABEL_23:
  prclDest.right = a6->right + 6;
  bottom = a6->bottom;
  prclDest.left = 6;
  prclDest.bottom = bottom + 4;
  prclDest.top = 4;
  v28 = 0x40000000LL;
  EngCopyBits(a1, psoSrc, 0LL, &v30, &prclDest, &gptlZero);
LABEL_7:
  if ( (unsigned int)bBlurCursorShadow(a1) && (unsigned int)bBlurCursorShadow(a1) )
  {
    right = a6->right;
    v18 = a6->bottom;
    prclDest.left = 3;
    prclDest.top = 3;
    prclDest.right = right + 3;
    prclDest.bottom = v18 + 3;
    if ( a7 )
    {
      prclSrc.right = right;
      prclSrc.bottom = v18;
      pBlendObj = (BLENDOBJ)33488896;
      v34 = xloIdent;
      v35 = xloIdent;
      v36 = xloIdent;
      EngAlphaBlend(a1, v13, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
    }
    else
    {
      v28 = 0xFFFFFFFF00000000uLL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v30, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
      v28 = 4278190080LL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v30, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      if ( !v13 )
      {
        LODWORD(v29) = 0;
        HIDWORD(v29) = v10;
      }
      v26 = v31;
      v27 = (POINTL *)&v29;
      if ( v13 )
        v27 = &gptlZero;
      else
        v26 = v32;
      if ( !v13 )
        v13 = psoSrc;
      EngBitBlt(a1, v13, 0LL, 0LL, v26, &prclDest, v27, 0LL, 0LL, 0LL, 0xEEEEu);
    }
    return 1;
  }
  return v7;
}
