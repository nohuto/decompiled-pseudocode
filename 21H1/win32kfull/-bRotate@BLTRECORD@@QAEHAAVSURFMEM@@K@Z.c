/*
 * XREFs of ?bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EC88D
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vBound@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1ECA6C (-vBound@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z @ 0x1ECB43 (-vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 */

int __thiscall BLTRECORD::bRotate(BLTRECORD *this, struct SURFMEM *a2, ULONG iMode)
{
  int v4; // ebx
  int v5; // esi
  bool v6; // zf
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  SURFOBJ *v10; // eax
  int v11; // ecx
  SURFOBJ *v13; // [esp-28h] [ebp-90h]
  _DWORD v14[6]; // [esp+Ch] [ebp-5Ch] BYREF
  int v15; // [esp+24h] [ebp-44h] BYREF
  int v16; // [esp+28h] [ebp-40h]
  int v17; // [esp+2Ch] [ebp-3Ch]
  int v18; // [esp+30h] [ebp-38h]
  POINTL pptlBrushOrg; // [esp+34h] [ebp-34h] BYREF
  SURFACE *v20; // [esp+3Ch] [ebp-2Ch]
  SURFMEM *v21; // [esp+40h] [ebp-28h]
  POINTFIX pptfx; // [esp+44h] [ebp-24h] BYREF
  int v23; // [esp+4Ch] [ebp-1Ch]
  int v24; // [esp+50h] [ebp-18h]
  int v25; // [esp+54h] [ebp-14h]
  int v26; // [esp+58h] [ebp-10h]
  int v27; // [esp+5Ch] [ebp-Ch]
  int v28; // [esp+60h] [ebp-8h]

  v21 = a2;
  BLTRECORD::vBound(this, (struct ERECTL *)&v15);
  v4 = v15;
  v5 = 0;
  v14[3] = 0;
  v14[1] = v17 - v15;
  v6 = (*((_DWORD *)this + 42) & 0x10000) == 0;
  v14[0] = 1;
  v14[2] = v18 - v16;
  v14[4] = 0;
  if ( v6 )
    v7 = 0;
  else
    v7 = *((_DWORD *)this + 12);
  v14[5] = *(_DWORD *)(v7 + 72) & 0x40000;
  SURFMEM::bCreateDIB(v21, (struct _DEVBITMAPINFO *)v14, 0, 0, 0, 0, 0, 0, 1, 0, 0);
  v20 = *(SURFACE **)v21;
  if ( v20 )
  {
    v8 = 16 * v4;
    pptfx.x = *((_DWORD *)this + 17) - v8;
    pptfx.y = *((_DWORD *)this + 18) - 16 * v16;
    v23 = *((_DWORD *)this + 19) - v8;
    v24 = *((_DWORD *)this + 20) - 16 * v16;
    v25 = *((_DWORD *)this + 21) - v8;
    v26 = *((_DWORD *)this + 22) - 16 * v16;
    v27 = *((_DWORD *)this + 23) - v8;
    v28 = *((_DWORD *)this + 24) - 16 * v16;
    BLTRECORD::vMirror(this, &pptfx);
    v6 = (*((_DWORD *)this + 42) & 0x10000) == 0;
    pptlBrushOrg.x = 0;
    pptlBrushOrg.y = 0;
    v9 = v6 ? 0 : *((_DWORD *)this + 12);
    v13 = v9 != 0 ? (SURFOBJ *)(v9 + 16) : 0;
    v10 = SURFACE::pSurfobj(v20);
    if ( EngPlgBlt(v10, v13, 0, 0, 0, 0, &pptlBrushOrg, &pptfx, (RECTL *)((char *)this + 140), 0, iMode) )
    {
      *((_DWORD *)this + 42) &= ~0x20000u;
      if ( *((_DWORD *)this + 12) )
        DEC_SHARE_REF_CNT(*((_DWORD *)this + 12));
      v11 = *(_DWORD *)v21;
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 12) = v11;
      return 1;
    }
  }
  return v5;
}
