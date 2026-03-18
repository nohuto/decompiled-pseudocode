/*
 * XREFs of SimBitBlt @ 0x1C0277AA8
 * Callers:
 *     EngBitBlt @ 0x1C0088370 (EngBitBlt.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0087EF8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngBitBlt @ 0x1C0088370 (EngBitBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00FC34C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0277950 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall SimBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *pptlBrush,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  SURFOBJ *v13; // r15
  char v14; // r11
  int v15; // r11d
  unsigned int v16; // esi
  unsigned __int64 v17; // r14
  __int16 v18; // cx
  __int64 v19; // rbx
  __int64 p_iType; // rax
  SURFOBJ *v21; // rdx
  int (*v22)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  signed __int32 v27; // ett
  int v28; // edi
  int v29; // r12d
  int v30; // ecx
  POINTL v31; // rax
  int v32; // r9d
  LONG v33; // eax
  int v34; // r8d
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  LONG right; // ecx
  LONG bottom; // edx
  POINTL *v40; // rdi
  BOOL (__stdcall *v41)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  __int64 v42; // rax
  __int64 p_hdev; // rdi
  __int64 p_hsurf; // r13
  __int64 v45; // rdi
  int v46; // eax
  XLATEOBJ *v47; // r13
  int v48; // eax
  __int64 v49; // rcx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  SURFOBJ *v51; // rsi
  POINTL v53; // [rsp+68h] [rbp-98h] BYREF
  int v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+74h] [rbp-8Ch]
  POINTL v56; // [rsp+78h] [rbp-88h] BYREF
  SURFOBJ *psoMask; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  char v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+94h] [rbp-6Ch]
  int v61; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v62; // [rsp+A0h] [rbp-60h]
  POINTL v63; // [rsp+A8h] [rbp-58h] BYREF
  BRUSHOBJ *pbo; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h] BYREF
  char v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+CCh] [rbp-34h]
  _DWORD v69[2]; // [rsp+D0h] [rbp-30h] BYREF
  POINTL *v70; // [rsp+D8h] [rbp-28h]
  DEVLOCKBLTOBJ *v71; // [rsp+E0h] [rbp-20h]
  SURFOBJ *v72; // [rsp+E8h] [rbp-18h]
  _DWORD v73[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  _DWORD v77[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+12Ch] [rbp+2Ch]
  int v81[4]; // [rsp+130h] [rbp+30h] BYREF
  RECTL v82; // [rsp+140h] [rbp+40h] BYREF

  v13 = psoSrc;
  pbo = a9;
  v71 = a12;
  v72 = psoTrg;
  pco = a4;
  psoMask = a3;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v62 = pxlo;
  v15 = v14 & 0xD4;
  v70 = pptlBrush;
  v61 = v15;
  v16 = 0;
  v17 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v18 = *(_WORD *)(v17 + 0x64);
  v19 = *(_QWORD *)(v17 + 48);
  if ( v18 )
    goto LABEL_11;
  if ( !v15 )
    goto LABEL_6;
  p_iType = (__int64)&psoSrc->iType;
  if ( !psoSrc )
    p_iType = 100LL;
  if ( *(_WORD *)p_iType )
  {
LABEL_11:
    v21 = psoMask;
  }
  else
  {
LABEL_6:
    v21 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v19 + 40) & 0x8000) != 0 )
      {
        return EngBitBlt(psoTrg, v13, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v22 = SURFACE::pfnBitBlt((SURFACE *)v17);
        return ((unsigned int (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, __int64, __int64, POINTL *, BRUSHOBJ *, __int64, ROP4))v22)(
                 psoTrg,
                 v13,
                 0LL,
                 pco,
                 pxlo,
                 v23,
                 v25,
                 pptlMask,
                 pbo,
                 v24,
                 rop4);
      }
    }
  }
  if ( v19 )
  {
    _m_prefetchw((const void *)(v19 + 40));
    do
      v27 = *(_DWORD *)(v19 + 40);
    while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 40), v27 | 0x40000, v27) );
    v18 = *(_WORD *)(v17 + 100);
  }
  if ( v18 == 1 && v19 && (*(_DWORD *)(v19 + 40) & 0x20000) != 0 )
  {
    v28 = *(_DWORD *)(v19 + 2584);
    v29 = *(_DWORD *)(v19 + 2588);
    v55 = v28 + *(_DWORD *)(v17 + 56);
    v30 = v29 + *(_DWORD *)(v17 + 60);
  }
  else
  {
    v28 = 0;
    v30 = *(_DWORD *)(v17 + 60);
    v29 = 0;
    v55 = *(_DWORD *)(v17 + 56);
  }
  v54 = v30;
  v31.y = 0;
  v53 = 0LL;
  v56 = 0LL;
  *(RECTL *)v81 = *prclTrg;
  if ( v15 )
    v53 = *pptlSrc;
  if ( v21 )
  {
    if ( bUMPDSecurityGateEx() && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 708);
      return v16;
    }
    v31 = *pptlMask;
    v15 = v61;
    v56 = *pptlMask;
  }
  v32 = v81[1];
  if ( v81[1] < v29 )
  {
    v81[1] = v29;
    v53.y += v29 - v32;
    v33 = v29 + v31.y - v32;
    v32 = v29;
    v56.y = v33;
  }
  v34 = v81[0];
  if ( v81[0] < v28 )
  {
    v81[0] = v28;
    v53.x += v28 - v34;
    v35 = v28 - v34;
    v34 = v28;
    v56.x += v35;
  }
  v36 = v81[3];
  v37 = v81[2];
  if ( v81[3] > v54 )
    v36 = v54;
  v81[3] = v36;
  if ( v81[2] > v55 )
    v37 = v55;
  v81[2] = v37;
  if ( v32 >= v36 || v34 >= v37 )
    return 1;
  right = v37 - v34;
  *(_QWORD *)&v82.left = 0LL;
  bottom = v36 - v32;
  v82.right = right;
  v82.bottom = bottom;
  v40 = &v53;
  if ( *(_DWORD *)(v17 + 96) == *(_DWORD *)(v19 + 2108) )
  {
    v66 = 0LL;
    v41 = EngCopyBits;
    v67 = 0;
    v68 = 0;
    if ( !v15 )
      goto LABEL_53;
    v42 = (__int64)&v13->iType;
    if ( !v13 )
      v42 = 100LL;
    if ( *(_WORD *)v42 )
    {
      p_hdev = (__int64)&v13->hdev;
      p_hsurf = (__int64)&v13[1].hsurf;
      v73[1] = right;
      if ( !v13 )
        p_hdev = 48LL;
      v73[2] = bottom;
      v73[0] = *(_DWORD *)(v19 + 2108);
      if ( !v13 )
        p_hsurf = 112LL;
      v45 = *(_QWORD *)p_hdev;
      v73[3] = 0;
      v46 = *(_DWORD *)p_hsurf & 0x40000;
      v76 = 0;
      v75 = v46;
      v74 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v66, (struct _DEVBITMAPINFO *)v73, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_67;
      if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
        (*(void (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))(v45 + 2840))(
          (v66 + 24) & -(__int64)(v66 != 0),
          v13,
          0LL,
          v62,
          &v82,
          &v53);
      else
        ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
          (v66 + 24) & -(__int64)(v66 != 0),
          v13,
          0LL,
          v62,
          &v82,
          &v53);
      v40 = &gptl00;
      v47 = xloIdent;
      bottom = v82.bottom;
      v13 = (SURFOBJ *)((v66 + 24) & -(__int64)(v66 != 0));
      right = v82.right;
    }
    else
    {
LABEL_53:
      v47 = v62;
    }
    v77[3] = 0;
    v80 = 0;
    v77[0] = *(_DWORD *)(v19 + 2108);
    v48 = *(_DWORD *)(v17 + 112) & 0x40000;
    v77[1] = right;
    v77[2] = bottom;
    v79 = v48;
    v78 = 0LL;
    v58 = 0LL;
    v59 = 0;
    v60 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v58, (struct _DEVBITMAPINFO *)v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v49 = v58;
    if ( v58 )
    {
      v69[0] = v81[0];
      v69[1] = v81[1];
      v63 = 0LL;
      if ( v70 )
      {
        v63.x = v70->x - v81[0];
        v63.y = v70->y - v81[1];
      }
      if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 && v71 )
      {
        DEVLOCKBLTOBJ::vUnLock(v71);
        v49 = v58;
      }
      if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
        v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2840);
      else
        v50 = EngCopyBits;
      v51 = v72;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v50)(
        (v49 + 24) & -(__int64)(v49 != 0),
        v72,
        0LL,
        xloIdent,
        &v82,
        v69);
      EngBitBlt(
        (SURFOBJ *)((v58 + 24) & -(__int64)(v58 != 0)),
        v13,
        psoMask,
        0LL,
        v47,
        &v82,
        v40,
        &v56,
        pbo,
        &v63,
        rop4);
      ++*(_DWORD *)(v17 + 92);
      if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
        v41 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2840);
      v16 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v41)(
              v51,
              (v58 + 24) & -(__int64)(v58 != 0),
              pco,
              xloIdent,
              v81,
              &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v58);
LABEL_67:
    SURFMEM::~SURFMEM((SURFMEM *)&v66);
  }
  return v16;
}
