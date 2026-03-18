/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028B5B4
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028B350 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0069C88 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028B818 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028B92C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 */

__int64 __fastcall BLTRECORD::bRotate(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // r15d
  int v9; // r14d
  int v10; // r15d
  struct SURFACE *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-39h] BYREF
  int v17; // [rsp+68h] [rbp-31h] BYREF
  int v18; // [rsp+6Ch] [rbp-2Dh]
  int v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+74h] [rbp-25h]
  _DWORD v21[4]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+94h] [rbp-5h]
  POINTFIX pptfx; // [rsp+98h] [rbp-1h] BYREF
  int v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A4h] [rbp+Bh]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]
  int v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B4h] [rbp+1Bh]

  BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v17);
  v6 = 0;
  v7 = v17;
  v8 = v18;
  v21[1] = v19 - v17;
  v21[3] = 0;
  v21[2] = v20 - v18;
  v24 = 0;
  v21[0] = 1;
  v22 = 0LL;
  v23 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    v9 = 16 * v7;
    v10 = 16 * v8;
    pptfx.x = this[7].right - v9;
    pptfx.y = this[7].bottom - v10;
    v26 = this[8].left - v9;
    v27 = this[8].top - v10;
    v28 = this[8].right - v9;
    v29 = this[8].bottom - v10;
    v30 = this[9].left - v9;
    v31 = this[9].top - v10;
    BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
    pptlBrushOrg = 0LL;
    v11 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    if ( EngPlgBlt(
           (SURFOBJ *)(v12 + 24),
           (SURFOBJ *)(((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL,
           &pptlBrushOrg,
           &pptfx,
           this + 12,
           0LL,
           a3) )
    {
      this[13].bottom &= ~0x20000u;
      v13 = *(_QWORD *)&this[5].left;
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
      v14 = *(_QWORD *)a2;
      this[12].left = 0;
      this[12].top = 0;
      v6 = 1;
      *(_QWORD *)&this[5].left = v14;
    }
  }
  return v6;
}
