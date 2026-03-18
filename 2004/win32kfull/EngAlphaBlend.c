/*
 * XREFs of EngAlphaBlend @ 0x1C00D1A90
 * Callers:
 *     GrePtInSprite @ 0x1C002D0E8 (GrePtInSprite.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00C8A90 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0106450 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0295380 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029BF70 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A1DA0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2950 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CD2A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CD3E8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00D20F0 (-AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_.c)
 *     ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C00D2308 (-bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_F.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00D2528 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngHTBlt @ 0x1C00D4640 (EngHTBlt.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

BOOL __stdcall EngAlphaBlend(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  RECTL v8; // xmm1
  unsigned __int64 v10; // rsi
  RECTL v12; // xmm0
  struct SURFACE *v13; // r14
  BOOL v14; // edi
  int v15; // r12d
  __int64 v16; // rcx
  signed __int32 v17; // ett
  struct SURFACE *v18; // rdx
  struct _RECTL v19; // xmm6
  int v20; // r14d
  unsigned __int64 v21; // r15
  int v22; // eax
  int v23; // r12d
  ULONG *pulXlate; // rax
  __int64 v25; // rbx
  XCLIPOBJ *v26; // r13
  int v27; // r14d
  struct SURFACE *v28; // rsi
  LONG top; // r8d
  unsigned int v30; // eax
  int v31; // r13d
  int v32; // edi
  LONG *v33; // rdx
  LONG v34; // eax
  LONG v35; // r9d
  LONG v36; // ecx
  LONG bottom; // r12d
  __int64 v38; // rcx
  int v39; // r9d
  __int64 v40; // r8
  int v41; // eax
  int v42; // eax
  __int128 v44; // xmm0
  int v45; // eax
  __int64 *v46; // rax
  __int64 v47; // rbx
  int v48; // ecx
  bool v49; // zf
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  int v51; // eax
  struct SURFMEM *v52; // [rsp+30h] [rbp-D8h]
  int v53; // [rsp+40h] [rbp-C8h]
  LONG v54; // [rsp+68h] [rbp-A0h]
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  ULONG *v56; // [rsp+78h] [rbp-90h] BYREF
  struct SURFACE *v57; // [rsp+80h] [rbp-88h]
  HDEV v58; // [rsp+88h] [rbp-80h] BYREF
  HDEV hdev; // [rsp+90h] [rbp-78h] BYREF
  struct _XLATEOBJ *v60; // [rsp+98h] [rbp-70h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-68h] BYREF
  char v62; // [rsp+A8h] [rbp-60h]
  int v63; // [rsp+ACh] [rbp-5Ch]
  _DWORD v64[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v65[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-48h] BYREF
  XCLIPOBJ *v67; // [rsp+C8h] [rbp-40h]
  int v68[2]; // [rsp+D0h] [rbp-38h] BYREF
  char v69; // [rsp+D8h] [rbp-30h]
  int v70; // [rsp+DCh] [rbp-2Ch]
  _DWORD v71[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-18h]
  int v73; // [rsp+F8h] [rbp-10h]
  int v74; // [rsp+FCh] [rbp-Ch]
  __int64 v75; // [rsp+100h] [rbp-8h]
  __int64 v76; // [rsp+108h] [rbp+0h]
  XCLIPOBJ *v77; // [rsp+110h] [rbp+8h]
  unsigned __int64 v78; // [rsp+118h] [rbp+10h]
  _OWORD v79[2]; // [rsp+120h] [rbp+18h] BYREF
  __int128 v80; // [rsp+140h] [rbp+38h]
  struct _RECTL v81; // [rsp+158h] [rbp+50h] BYREF
  RECTL v82; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v83; // [rsp+178h] [rbp+70h] BYREF
  struct _RECTL v84; // [rsp+188h] [rbp+80h] BYREF
  unsigned int v85; // [rsp+198h] [rbp+90h] BYREF
  _OWORD v86[20]; // [rsp+19Ch] [rbp+94h] BYREF

  v67 = (XCLIPOBJ *)pco;
  v8 = *prclSrc;
  v10 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v78 = v10;
  v12 = *prclDest;
  v60 = *(struct _XLATEOBJ **)&pBlendObj[2].BlendFunction.BlendOp;
  v13 = (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL));
  v76 = *(_QWORD *)&pBlendObj[4].BlendFunction.BlendOp;
  v14 = 0;
  v15 = 1;
  v75 = *(_QWORD *)&pBlendObj[6].BlendFunction.BlendOp;
  v81 = v12;
  v82 = v8;
  memset(v79, 0, sizeof(v79));
  v80 = 0LL;
  if ( v10 )
  {
    v16 = *(_QWORD *)(((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL)) + 0x30);
    DWORD2(v80) = *pBlendObj;
    v61 = 0LL;
    v62 = 0;
    v63 = 0;
    *(_QWORD *)v68 = 0LL;
    v69 = 0;
    v70 = 0;
    if ( v16 )
    {
      _m_prefetchw((const void *)(v16 + 40));
      do
        v17 = *(_DWORD *)(v16 + 40);
      while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v17 | 0x40000, v17) );
    }
    if ( (pBlendObj->BlendFunction.BlendFlags & 1) != 0
      && (v81.right - v81.left != v82.right - v82.left || v81.bottom - v81.top != v82.bottom - v82.top) )
    {
      LOBYTE(v14) = (unsigned int)EngHTBlt(
                                    psoDest,
                                    psoSrc,
                                    0LL,
                                    pco,
                                    pxlo,
                                    0LL,
                                    &gptlZero,
                                    prclDest,
                                    prclSrc,
                                    0LL,
                                    512,
                                    pBlendObj) == 1;
      goto LABEL_42;
    }
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v58 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v58, psoSrc, 0LL, 0);
    v57 = psSetupTransparentSrcSurface(v13, (struct SURFACE *)v10, &v81, v60, &v82, (struct SURFMEM *)v68, 0, 0);
    v18 = v57;
    if ( !v57 || v81.left == v81.right )
    {
LABEL_41:
      v14 = v15;
LABEL_42:
      SURFMEM::~SURFMEM((SURFMEM *)v68);
      SURFMEM::~SURFMEM((SURFMEM *)&v61);
      return v14;
    }
    v19 = v81;
    v20 = v81.right - v81.left;
    v21 = v10;
    LODWORD(v58) = v82.left;
    LODWORD(hdev) = v82.top;
    v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v81, 4));
    v81.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v81, 12));
    v84 = v19;
    v23 = v81.bottom - v22;
    v54 = v22;
    if ( !*(_WORD *)(v10 + 100) )
    {
LABEL_9:
      if ( !v21 )
        goto LABEL_69;
      pulXlate = (ULONG *)*((_QWORD *)v18 + 16);
      v25 = *(_QWORD *)(v21 + 128);
      v56 = pulXlate;
      v55 = v25;
      if ( !pulXlate )
      {
        if ( !pxlo || (pulXlate = pxlo[1].pulXlate) == 0LL )
          pulXlate = *(ULONG **)(*((_QWORD *)v18 + 6) + 1808LL);
        v56 = pulXlate;
      }
      if ( !v25 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v21 + 48) + 1808LL);
        v55 = v25;
      }
      if ( pulXlate && v25 )
      {
        v26 = 0LL;
        if ( v21 == v10 )
          v26 = v67;
        v77 = v26;
        LODWORD(v56) = bDetermineAlphaBlendFunction(
                         (struct SURFACE *)v21,
                         v18,
                         (struct XEPALOBJ *)&v55,
                         (struct XEPALOBJ *)&v56,
                         (struct XLATE *)v60,
                         (int)v52,
                         (struct _ALPHA_DISPATCH_FORMAT *)v79,
                         v53);
        v15 = (int)v56;
        if ( (_DWORD)v56 )
        {
          memset(&v86[1], 0, 0x130uLL);
          LODWORD(v55) = 0;
          v85 = 1;
          v27 = 0;
          v86[0] = v19;
          if ( v26 )
          {
            if ( *((_BYTE *)v26 + 20) == 1 )
            {
              v44 = *(_OWORD *)((char *)v26 + 4);
              LODWORD(v55) = 0;
              v86[0] = v44;
            }
            else if ( *((_BYTE *)v26 + 20) == 3 )
            {
              v27 = 1;
              LODWORD(v55) = 1;
              XCLIPOBJ::cEnumStart(v26, 0, 0, 1u, 0x14u);
            }
          }
          v28 = v57;
          if ( v27 )
            goto LABEL_44;
          top = v54;
          while ( 1 )
          {
            v30 = 0;
            LODWORD(v57) = 0;
            if ( v85 )
            {
              v31 = (int)v58;
              v32 = (int)hdev;
              do
              {
                v33 = (LONG *)&v86[v30];
                if ( *v33 < v81.left )
                  *v33 = v81.left;
                if ( v33[2] > v81.right )
                  v33[2] = v81.right;
                v34 = v33[1];
                if ( v34 < top )
                {
                  v33[1] = top;
                  v34 = top;
                  v35 = top;
                }
                else
                {
                  v35 = v33[1];
                }
                v36 = v33[3];
                bottom = v81.bottom;
                if ( v36 > v81.bottom )
                {
                  v33[3] = v81.bottom;
                  v36 = bottom;
                }
                if ( v34 >= v36 || *v33 >= v33[2] )
                {
                  v15 = (int)v56;
                }
                else
                {
                  v38 = *(_QWORD *)(v21 + 80);
                  v39 = v35 - top;
                  v40 = *(unsigned int *)(v21 + 88);
                  v65[0] = v31 + *v33 - v81.left;
                  v41 = *((_DWORD *)v28 + 22);
                  v65[1] = v32 + v39;
                  v42 = AlphaScanLineBlend(v38, v33, v40, *((_QWORD *)v28 + 10), v41, v65, v60, v76, v75, v25);
                  top = v81.top;
                  v15 = v42;
                  LODWORD(v56) = v42;
                }
                v30 = (_DWORD)v57 + 1;
                LODWORD(v57) = v30;
              }
              while ( v30 < v85 );
              v26 = v77;
              v27 = v55;
            }
            if ( !v27 )
              break;
LABEL_44:
            v45 = XCLIPOBJ::bEnum(v26, 0x144u, (char *)&v85, 0LL);
            top = v81.top;
            v27 = v45;
            LODWORD(v55) = v45;
          }
          if ( v21 != v78 )
          {
            v66 = 0LL;
            if ( (*(_DWORD *)(v78 + 112) & 0x400) != 0 )
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))(*(_QWORD *)(v78 + 48) + 2840LL))(
                v78 + 24,
                v21 + 24,
                v67,
                xloIdent,
                &v84,
                &v66);
            else
              ((void (__fastcall *)(unsigned __int64, unsigned __int64, XCLIPOBJ *, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
                v78 + 24,
                v21 + 24,
                v67,
                xloIdent,
                &v84,
                &v66);
          }
        }
      }
      else
      {
LABEL_69:
        v15 = 0;
      }
      goto LABEL_41;
    }
    v46 = *(__int64 **)(v10 + 128);
    v47 = *(_QWORD *)(v10 + 48);
    v71[0] = *(_DWORD *)(v10 + 96);
    v48 = *(_DWORD *)(v10 + 112) & 0x40000;
    v71[3] = 0;
    v74 = 0;
    v71[1] = v81.right - v81.left;
    v71[2] = v23;
    v73 = v48;
    v72 = 0LL;
    if ( v46 )
      v72 = *v46;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v61, (struct _DEVBITMAPINFO *)v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      *(_QWORD *)(v61 + 48) = *(_QWORD *)(v10 + 48);
      v49 = (*(_DWORD *)(v10 + 112) & 0x400) == 0;
      v64[0] = v81.left;
      v64[1] = v81.top;
      *(_QWORD *)&v83.left = 0LL;
      *(_QWORD *)&v83.right = __PAIR64__(v23, v20);
      if ( v49 )
        v50 = EngCopyBits;
      else
        v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v47 + 2840);
      v52 = (struct SURFMEM *)v64;
      v51 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *))v50)(
              (v61 + 24) & -(__int64)(v61 != 0),
              v10 + 24,
              0LL,
              xloIdent,
              &v83);
      v18 = v57;
      if ( v51 )
      {
        v19 = v83;
        v21 = v61;
        v81 = v83;
LABEL_54:
        v54 = v81.top;
        goto LABEL_9;
      }
    }
    else
    {
      v18 = v57;
    }
    v19 = v81;
    v21 = 0LL;
    goto LABEL_54;
  }
  return 0;
}
