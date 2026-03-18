/*
 * XREFs of EngBitBlt @ 0x1C00CD5F0
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00C8A90 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     EngHTBlt @ 0x1C00D4640 (EngHTBlt.c)
 *     NtGdiEngBitBlt @ 0x1C012F4E0 (NtGdiEngBitBlt.c)
 *     SimBitBlt @ 0x1C0279018 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02907FC (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0295500 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029C1C0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A23D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngTransparentBlt @ 0x1C00C9450 (EngTransparentBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CC838 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00CC9CC (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00CCC68 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00CEB68 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00CF2B0 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngCopyBits @ 0x1C00D10E0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C0279018 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C5D34 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C6038 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  PVOID *p_pvScan0; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  POINTL *v21; // rbx
  _DWORD *v22; // rdx
  signed __int32 v23; // ett
  ULONG iSolidColor; // r9d
  struct SURFACE *v26; // rbx
  unsigned int v27; // eax
  char v28; // r8
  char v29; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 (__fastcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v37; // ecx
  LONG y; // edx
  void (*v39)(struct _PATBLTFRAME *, int); // rax
  _DWORD *pvRbrush; // rax
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  __int64 v44; // rbx
  int v45; // eax
  void (__fastcall *v46)(unsigned __int64, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // rax
  void (*v47)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  struct _POINTL *v48; // [rsp+68h] [rbp-98h]
  XLATEOBJ *v49; // [rsp+70h] [rbp-90h]
  struct SURFACE *v52; // [rsp+88h] [rbp-78h]
  struct SURFACE *v53; // [rsp+90h] [rbp-70h] BYREF
  char v54; // [rsp+98h] [rbp-68h]
  int v55; // [rsp+9Ch] [rbp-64h]
  POINTL *v56; // [rsp+A0h] [rbp-60h]
  SURFOBJ *v57; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  _DWORD *v59; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  struct SURFACE *v61; // [rsp+C8h] [rbp-38h]
  _DWORD v62[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E8h] [rbp-18h]
  int v65; // [rsp+ECh] [rbp-14h]
  RECTL prclSrc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h] BYREF
  int v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ch] [rbp+Ch]

  p_pvScan0 = &psoTrg[-1].pvScan0;
  v49 = pxlo;
  v48 = pptlSrc;
  v56 = pptlMask;
  v57 = psoMask;
  v52 = (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL));
  v61 = (struct SURFACE *)((unsigned __int64)&psoMask[-1].pvScan0 & -(__int64)(psoMask != 0LL));
  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  if ( (!(unsigned __int8)KeIsAttachedProcess(&psoMask[-1].pvScan0)
     || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v18 = *ThreadWin32Thread) != 0
    && (v19 = (_QWORD *)(v18 + 40), (_QWORD *)*v19 != v19) )
  {
    v20 = *v19 - 40LL;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 && (*(_DWORD *)(v20 + 412) & 0x100) != 0 && *(_DWORD *)(v20 + 420) )
  {
    v28 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
    if ( (v28 & 0xE8) != 0 )
    {
      if ( !pbo || (v21 = pptlBrush, pbo->iSolidColor == -1) && !pptlBrush )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidC"
            "olor == -1 && !pptlBrush))\n",
            67LL);
        return 0;
      }
    }
    else
    {
      v21 = pptlBrush;
    }
    v29 = v28 & 0xD4;
    if ( v29 && (!psoSrc || !pptlSrc) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n",
          74LL);
      return 0;
    }
    if ( (unsigned int)(*((_DWORD *)p_pvScan0 + 24) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n",
          84LL);
      return 1;
    }
    if ( v29 && (unsigned int)(*((_DWORD *)v52 + 24) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n",
          90LL);
      return 1;
    }
  }
  else
  {
    v21 = pptlBrush;
  }
  if ( psoTrg->iType )
    return SimBitBlt(psoTrg, psoSrc, pxlo, prclTrg, pptlSrc, v56, (__int64)pbo, pptlBrush, rop4, 0LL);
  v22 = p_pvScan0[6];
  if ( v22 )
  {
    _m_prefetchw(v22 + 10);
    do
      v23 = v22[10];
    while ( v23 != _InterlockedCompareExchange(v22 + 10, v23 | 0x40000, v23) );
    v22 = p_pvScan0[6];
  }
  v59 = v22;
  PDEVOBJ::vSync((PDEVOBJ *)&v59, psoTrg, 0LL, 0);
  ++*((_DWORD *)p_pvScan0 + 23);
  switch ( rop4 )
  {
    case 0u:
      goto LABEL_35;
    case 0xF0Fu:
LABEL_20:
      if ( pbo->iSolidColor != -1 )
      {
        iSolidColor = ~pbo->iSolidColor;
        if ( (rop4 & 1) == 0 )
          iSolidColor = pbo->iSolidColor;
        goto LABEL_23;
      }
      if ( *((_DWORD *)p_pvScan0 + 24) == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        v39 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
LABEL_87:
        vDIBPatBltSrccopy8x8((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, v21, v39);
        return 1;
      }
      v27 = *((_DWORD *)p_pvScan0 + 24);
      if ( v27 < 3 )
      {
        if ( v27 == 2 )
        {
          if ( rop4 == 61680 && pvGetEngRbrush(pbo) && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
          {
            v39 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
            goto LABEL_87;
          }
        }
        else if ( v27 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
        {
          pvRbrush = pbo[1].pvRbrush;
          v41 = pvRbrush[5];
          if ( v41 == 8 )
          {
            if ( pvRbrush[6] == 8 )
            {
              v39 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
              goto LABEL_87;
            }
          }
          else if ( v41 == 6 && pvRbrush[6] == 6 )
          {
            vDIBnPatBltSrccopy6x6((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, v21, v47);
            return 1;
          }
        }
      }
      else if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        LOBYTE(v16) = rop4 != 61680;
        vDIBPatBlt((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, v21, v16);
        return 1;
      }
LABEL_26:
      if ( psoSrc )
      {
        v60 = *((_QWORD *)v52 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v60, psoSrc, 0LL, 0);
      }
      v53 = 0LL;
      v26 = v52;
      v54 = 0;
      v55 = 0;
      if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)v52 + 50) )
      {
        v42 = prclTrg->right - prclTrg->left;
        v43 = prclTrg->bottom - prclTrg->top;
        v44 = *((_QWORD *)v52 + 6);
        v62[0] = *((_DWORD *)p_pvScan0 + 24);
        v45 = *((_DWORD *)v52 + 28) & 0x40000;
        v68 = v42;
        v69 = v43;
        v62[1] = v42;
        v62[2] = v43;
        v64 = v45;
        v67 = 0LL;
        v62[3] = 0;
        v65 = 0;
        v63 = 0LL;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v53, (struct _DEVBITMAPINFO *)v62, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
          || (v46 = *(void (__fastcall **)(unsigned __int64, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v44 + 2840)) == 0LL )
        {
LABEL_78:
          SURFMEM::~SURFMEM((SURFMEM *)&v53);
          return v16;
        }
        v46(((unsigned __int64)v53 + 24) & -(__int64)(v53 != 0LL), psoSrc, 0LL, pxlo, &v67, pptlSrc);
        v26 = v53;
        v48 = &gptl00;
        v49 = xloIdent;
      }
      if ( *((_DWORD *)p_pvScan0 + 24) <= 6u || !bUMPDSecurityGateEx() )
      {
        BltLnk(
          (struct SURFACE *)p_pvScan0,
          v26,
          v61,
          (struct ECLIPOBJ *)pco,
          (struct XLATE *)v49,
          prclTrg,
          v48,
          v56,
          pbo,
          pptlBrush,
          rop4);
        SURFMEM::~SURFMEM((SURFMEM *)&v53);
        return 1;
      }
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n",
          492);
      v16 = 1;
      goto LABEL_78;
    case 0x5555u:
      vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, 0xFFFFFFFF, 1);
      return 1;
    case 0x5A5Au:
      if ( pbo->iSolidColor != -1 )
      {
        vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, pbo->iSolidColor, 1);
        return 1;
      }
      if ( *((_DWORD *)p_pvScan0 + 24) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        vDIBPatBlt((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, v21, 2u);
        return 1;
      }
      goto LABEL_26;
  }
  if ( rop4 != 52394 )
  {
    if ( rop4 == 52428 )
    {
      if ( !*((_WORD *)v52 + 50) )
        return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
      v34 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v52 + 6) + 2840LL);
      if ( v34 )
        return v34(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
      return v16;
    }
    if ( rop4 == 61680 )
      goto LABEL_20;
    if ( rop4 != 0xFFFF )
      goto LABEL_26;
LABEL_35:
    iSolidColor = -(rop4 != 0);
LABEL_23:
    vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, iSolidColor, 0);
    return 1;
  }
  if ( v57 )
    goto LABEL_26;
  if ( pbo->pvRbrush )
    return 1;
  iTransColor = pbo->iSolidColor;
  x = pptlSrc->x;
  prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
  v37 = prclTrg->bottom - prclTrg->top;
  prclSrc.left = x;
  y = pptlSrc->y;
  prclSrc.bottom = y + v37;
  prclSrc.top = y;
  return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
}
