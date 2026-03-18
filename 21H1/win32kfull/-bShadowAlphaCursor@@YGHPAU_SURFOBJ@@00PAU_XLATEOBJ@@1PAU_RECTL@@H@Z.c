/*
 * XREFs of ?bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z @ 0xCD162
 * Callers:
 *     ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE (-vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z.c)
 * Callees:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?bBlurCursorShadow@@YGHPAU_SURFOBJ@@@Z @ 0xCD2D0 (-bBlurCursorShadow@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge bShadowAlphaCursor@<eax>(
        struct _SURFOBJ *a1@<edx>,
        SURFOBJ *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        XLATEOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        int a9)
{
  int v9; // ebx
  LONG cx; // edi
  LONG v12; // eax
  POINTL *v13; // edi
  unsigned int *pvBits; // ecx
  ULONG i; // edx
  unsigned int v16; // eax
  LONG v17; // ecx
  LONG v18; // edx
  XLATEOBJ *v20; // eax
  POINTL *v21; // ecx
  _DWORD *v22; // edx
  ULONG v23; // eax
  LONG v24; // eax
  ULONG cEntries; // eax
  SURFOBJ *v26; // eax
  XLATEOBJ *v27; // ecx
  struct _SURFOBJ *v28; // [esp+0h] [ebp-84h]
  struct _SURFOBJ *v29; // [esp+0h] [ebp-84h]
  XLATEOBJ v30; // [esp+10h] [ebp-74h] BYREF
  BLENDOBJ pBlendObj; // [esp+24h] [ebp-60h] BYREF
  XLATEOBJ *v32; // [esp+28h] [ebp-5Ch]
  XLATEOBJ *v33; // [esp+2Ch] [ebp-58h]
  XLATEOBJ *v34; // [esp+30h] [ebp-54h]
  struct _SURFOBJ *v35; // [esp+34h] [ebp-50h]
  LONG v36; // [esp+38h] [ebp-4Ch]
  XLATEOBJ *pxlo; // [esp+3Ch] [ebp-48h]
  struct _XLATEOBJ *v38; // [esp+40h] [ebp-44h]
  int v39; // [esp+44h] [ebp-40h] BYREF
  LONG v40; // [esp+48h] [ebp-3Ch]
  SURFOBJ *psoSrc; // [esp+4Ch] [ebp-38h]
  int v42; // [esp+50h] [ebp-34h] BYREF
  int v43; // [esp+54h] [ebp-30h]
  SURFOBJ *v44; // [esp+58h] [ebp-2Ch]
  RECTL prclSrc; // [esp+5Ch] [ebp-28h] BYREF
  RECTL prclTrg; // [esp+6Ch] [ebp-18h] BYREF

  v35 = a4;
  pxlo = a5;
  v38 = a6;
  v9 = 0;
  v44 = a1;
  memset(&v30, 0, 16);
  memset(&prclSrc, 0, sizeof(prclSrc));
  psoSrc = a3;
  v30.pulXlate = (ULONG *)&v42;
  v39 = 0;
  v40 = 0;
  cx = a1->sizlBitmap.cx;
  v12 = a1->sizlBitmap.cy >> 1;
  v36 = v12;
  if ( a7 )
  {
    if ( a3 )
    {
      prclTrg.left = 6;
      prclTrg.right = cx + 6;
      v13 = &gptlZero;
      prclTrg.top = 4;
      prclTrg.bottom = v36 + 4;
      EngBitBlt(a2, a3, 0, 0, 0, &prclTrg, &gptlZero, 0, 0, 0, 0xEEEEu);
      pvBits = (unsigned int *)a2->pvBits;
      for ( i = a2->cjBits >> 2; i; --i )
      {
        if ( (*pvBits & 0xFF000000) != 0 )
          v16 = (*((unsigned __int8 *)pvBits + 3) << 22) & 0xFF000000;
        else
          v16 = 0;
        *pvBits++ = v16;
      }
      goto LABEL_7;
    }
    return 0;
  }
  prclTrg.right = cx;
  v13 = &gptlZero;
  prclTrg.left = 0;
  prclTrg.top = 0;
  prclTrg.bottom = v12;
  if ( a3 )
  {
    v20 = pxlo;
    a1 = a3;
    v21 = &gptlZero;
  }
  else
  {
    v40 = v12;
    v21 = (POINTL *)&v39;
    v20 = (XLATEOBJ *)v35;
  }
  EngBitBlt(a2, a1, 0, 0, v20, &prclTrg, v21, 0, 0, 0, 0xEEEEu);
  v43 = -1;
  v42 = 0;
  EngBitBlt(a2, v44, 0, 0, &v30, &prclTrg, &gptlZero, 0, 0, 0, 0x8888u);
  v22 = a2->pvBits;
  v23 = a2->cjBits >> 2;
  if ( v23 )
  {
    while ( !*v22 )
    {
      ++v22;
      if ( !--v23 )
        goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  prclTrg.left = 6;
  prclTrg.top = 4;
  v24 = *(_DWORD *)&v38->iSrcType + 6;
  v42 = 0x40000000;
  prclTrg.right = v24;
  cEntries = v38->cEntries;
  v43 = 0;
  prclTrg.bottom = cEntries + 4;
  EngCopyBits(a2, v44, 0, &v30, &prclTrg, &gptlZero);
LABEL_7:
  if ( bBlurCursorShadow(v28) && bBlurCursorShadow(v29) )
  {
    prclTrg.left = 3;
    v17 = *(_DWORD *)&v38->iSrcType;
    v18 = v38->cEntries;
    prclTrg.top = 3;
    prclTrg.right = v17 + 3;
    prclTrg.bottom = v18 + 3;
    if ( a7 )
    {
      prclSrc.right = v17;
      v32 = xloIdent;
      v33 = xloIdent;
      v34 = xloIdent;
      pBlendObj = (BLENDOBJ)33488896;
      prclSrc.bottom = v18;
      EngAlphaBlend(a2, psoSrc, 0, xloIdent, &prclTrg, &prclSrc, &pBlendObj);
    }
    else
    {
      v43 = -1;
      v42 = 0;
      EngBitBlt(a2, v44, 0, 0, &v30, &prclTrg, &gptlZero, 0, 0, 0, 0x8888u);
      v42 = -16777216;
      v43 = 0;
      EngBitBlt(a2, v44, 0, 0, &v30, &prclTrg, &gptlZero, 0, 0, 0, 0xEEEEu);
      v26 = psoSrc;
      if ( psoSrc )
      {
        v27 = pxlo;
      }
      else
      {
        v13 = (POINTL *)&v39;
        v27 = (XLATEOBJ *)v35;
        v40 = v36;
        v26 = v44;
        v39 = 0;
      }
      EngBitBlt(a2, v26, 0, 0, v27, &prclTrg, v13, 0, 0, 0, 0xEEEEu);
    }
    return 1;
  }
  return v9;
}
