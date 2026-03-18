/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028B350
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028B5B4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028B818 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C028B92C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct SURFMEM *a3,
        struct SURFMEM *a4,
        unsigned int a5,
        ULONG iMode)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  LONG x; // r15d
  LONG y; // r12d
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-59h] BYREF
  int v20; // [rsp+68h] [rbp-51h]
  int v21; // [rsp+6Ch] [rbp-4Dh]
  int v22; // [rsp+70h] [rbp-49h] BYREF
  int v23; // [rsp+74h] [rbp-45h]
  int v24; // [rsp+78h] [rbp-41h]
  int v25; // [rsp+7Ch] [rbp-3Dh]
  __int64 v26; // [rsp+80h] [rbp-39h]
  int v27; // [rsp+88h] [rbp-31h]
  int v28; // [rsp+8Ch] [rbp-2Dh]
  POINTFIX pptfx; // [rsp+90h] [rbp-29h] BYREF
  int v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ch] [rbp-1Dh]
  int v32; // [rsp+A0h] [rbp-19h]
  int v33; // [rsp+A4h] [rbp-15h]
  int v34; // [rsp+A8h] [rbp-11h]
  int v35; // [rsp+ACh] [rbp-Dh]

  v6 = 0;
  if ( (a5 & 0x10000) == 0 || (result = BLTRECORD::bRotate(this, a4, iMode), (_DWORD)result) )
  {
    BLTRECORD::vBound(this, (struct ERECTL *)&pptlBrushOrg);
    v11 = *((_QWORD *)this + 9);
    x = pptlBrushOrg.x;
    y = pptlBrushOrg.y;
    v23 = v20 - pptlBrushOrg.x;
    v24 = v21 - pptlBrushOrg.y;
    v25 = 0;
    v28 = 0;
    v26 = 0LL;
    v22 = *(_DWORD *)(v11 + 96);
    v27 = *(_DWORD *)(v11 + 112) & 0x40000;
    SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)&v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( *(_QWORD *)a3 )
    {
      v14 = 16 * x;
      v15 = 16 * y;
      pptfx.x = *((_DWORD *)this + 30) - v14;
      pptfx.y = *((_DWORD *)this + 31) - v15;
      v30 = *((_DWORD *)this + 32) - v14;
      v31 = *((_DWORD *)this + 33) - v15;
      v32 = *((_DWORD *)this + 34) - v14;
      v33 = *((_DWORD *)this + 35) - v15;
      v34 = *((_DWORD *)this + 36) - v14;
      v35 = *((_DWORD *)this + 37) - v15;
      BLTRECORD::vMirror(this, &pptfx);
      ERECTL::bOffsetAdd(
        (BLTRECORD *)((char *)this + 176),
        (const struct _POINTL *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016),
        0);
      v16 = *((_QWORD *)this + 9);
      v17 = *(_QWORD *)a3;
      pptlBrushOrg = 0LL;
      if ( EngPlgBlt(
             (SURFOBJ *)((v17 + 24) & -(__int64)(v17 != 0)),
             (SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0)),
             0LL,
             0LL,
             0LL,
             0LL,
             &pptlBrushOrg,
             &pptfx,
             (RECTL *)this + 11,
             0LL,
             iMode) )
      {
        v6 = 1;
        *((_QWORD *)this + 9) = *(_QWORD *)a3;
        *((_DWORD *)this + 44) = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016);
        v18 = v23;
        *((_DWORD *)this + 45) = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1020);
        *((_DWORD *)this + 46) = v18 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1016);
        *((_DWORD *)this + 47) = v24 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1020);
      }
    }
    return v6;
  }
  return result;
}
