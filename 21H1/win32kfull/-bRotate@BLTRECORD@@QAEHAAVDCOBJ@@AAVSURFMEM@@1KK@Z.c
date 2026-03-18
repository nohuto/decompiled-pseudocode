/*
 * XREFs of ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EC88D (-bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1ECA6C (-vBound@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z @ 0x1ECB43 (-vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 */

int __thiscall BLTRECORD::bRotate(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct SURFMEM *a3,
        struct SURFMEM *a4,
        unsigned int a5,
        ULONG iMode)
{
  int result; // eax
  int v8; // esi
  int v9; // ecx
  SURFOBJ *v10; // eax
  int v11; // edx
  int v12; // [esp+10h] [ebp-54h] BYREF
  int v13; // [esp+14h] [ebp-50h]
  int v14; // [esp+18h] [ebp-4Ch]
  int v15; // [esp+1Ch] [ebp-48h]
  int v16; // [esp+20h] [ebp-44h]
  int v17; // [esp+24h] [ebp-40h]
  int v18; // [esp+28h] [ebp-3Ch] BYREF
  int v19; // [esp+2Ch] [ebp-38h]
  POINTL pptlBrushOrg; // [esp+30h] [ebp-34h] BYREF
  SURFMEM *v21; // [esp+38h] [ebp-2Ch]
  POINTFIX pptfx; // [esp+3Ch] [ebp-28h] BYREF
  int v23; // [esp+44h] [ebp-20h]
  int v24; // [esp+48h] [ebp-1Ch]
  int v25; // [esp+4Ch] [ebp-18h]
  int v26; // [esp+50h] [ebp-14h]
  int v27; // [esp+54h] [ebp-10h]
  int v28; // [esp+58h] [ebp-Ch]

  v21 = a3;
  if ( (a5 & 0x10000) == 0 || (result = BLTRECORD::bRotate(this, a4, iMode)) != 0 )
  {
    BLTRECORD::vBound(this, (struct ERECTL *)&v18);
    v8 = 0;
    v9 = *((_DWORD *)this + 11);
    v13 = pptlBrushOrg.x - v18;
    v14 = pptlBrushOrg.y - v19;
    v15 = 0;
    v16 = 0;
    v12 = *(_DWORD *)(v9 + 60);
    v17 = *(_DWORD *)(v9 + 72) & 0x40000;
    SURFMEM::bCreateDIB(v21, (struct _DEVBITMAPINFO *)&v12, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( *(_DWORD *)v21 )
    {
      pptfx.x = *((_DWORD *)this + 17) - 16 * v18;
      pptfx.y = *((_DWORD *)this + 18) - 16 * v19;
      v23 = *((_DWORD *)this + 19) - 16 * v18;
      v24 = *((_DWORD *)this + 20) - 16 * v19;
      v25 = *((_DWORD *)this + 21) - 16 * v18;
      v26 = *((_DWORD *)this + 22) - 16 * v19;
      v27 = *((_DWORD *)this + 23) - 16 * v18;
      v28 = *((_DWORD *)this + 24) - 16 * v19;
      BLTRECORD::vMirror(this, &pptfx);
      ERECTL::bOffsetAdd(
        (BLTRECORD *)((char *)this + 124),
        (const struct _POINTL *)(*(_DWORD *)a2 + 1048 + 8 * (*(_DWORD *)(*(_DWORD *)a2 + 28) & 1)),
        0);
      pptlBrushOrg.x = 0;
      pptlBrushOrg.y = 0;
      v10 = SURFACE::pSurfobj(*(SURFACE **)v21);
      if ( EngPlgBlt(
             v10,
             v11 != 0 ? (SURFOBJ *)(v11 + 16) : 0,
             0,
             0,
             0,
             0,
             &pptlBrushOrg,
             &pptfx,
             (RECTL *)((char *)this + 124),
             0,
             iMode) )
      {
        v8 = 1;
        *((_DWORD *)this + 11) = *(_DWORD *)v21;
        *((_DWORD *)this + 31) = -*(_DWORD *)(*(_DWORD *)a2 + 8 * (*(_DWORD *)(*(_DWORD *)a2 + 28) & 1) + 1048);
        *((_DWORD *)this + 32) = -*(_DWORD *)(*(_DWORD *)a2 + 8 * (*(_DWORD *)(*(_DWORD *)a2 + 28) & 1) + 1052);
        *((_DWORD *)this + 33) = v13 - *(_DWORD *)(*(_DWORD *)a2 + 8 * (*(_DWORD *)(*(_DWORD *)a2 + 28) & 1) + 1048);
        *((_DWORD *)this + 34) = v14 - *(_DWORD *)(*(_DWORD *)a2 + 8 * (*(_DWORD *)(*(_DWORD *)a2 + 28) & 1) + 1052);
      }
    }
    return v8;
  }
  return result;
}
