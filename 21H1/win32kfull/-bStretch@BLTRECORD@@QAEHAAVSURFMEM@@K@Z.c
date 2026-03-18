/*
 * XREFs of ?bStretch@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EFAF2
 * Callers:
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vMirror@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x7B4CE (-vMirror@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall BLTRECORD::bStretch(BLTRECORD *this, struct SURFMEM *a2, ULONG iMode)
{
  int v4; // esi
  LONG v5; // ecx
  LONG v6; // edx
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  SURFACE *v10; // edx
  int v11; // ecx
  SURFOBJ *v12; // eax
  int v13; // eax
  SURFOBJ *v15; // [esp-28h] [ebp-68h]
  _DWORD v16[6]; // [esp+Ch] [ebp-34h] BYREF
  POINTL pptlHTOrg; // [esp+24h] [ebp-1Ch] BYREF
  RECTL prclDest; // [esp+2Ch] [ebp-14h] BYREF

  v16[0] = 1;
  v4 = 0;
  v16[3] = 0;
  v16[4] = 0;
  v5 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
  v6 = *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
  v7 = (*((_DWORD *)this + 42) & 0x10000) == 0;
  v16[1] = v5;
  v16[2] = v6;
  if ( v7 )
    v8 = 0;
  else
    v8 = *((_DWORD *)this + 12);
  v9 = *(_DWORD *)(v8 + 72) & 0x40000;
  prclDest.right = v5;
  v16[5] = v9;
  prclDest.left = 0;
  prclDest.top = 0;
  prclDest.bottom = v6;
  BLTRECORD::vMirror(this, (struct ERECTL *)&prclDest);
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v16, 0, 0, 0, 0, 0, 0, 1, 0, 0);
  v10 = *(SURFACE **)a2;
  if ( *(_DWORD *)a2 )
  {
    v7 = (*((_DWORD *)this + 42) & 0x10000) == 0;
    pptlHTOrg.x = 0;
    pptlHTOrg.y = 0;
    v11 = v7 ? 0 : *((_DWORD *)this + 12);
    v15 = v11 != 0 ? (SURFOBJ *)(v11 + 16) : 0;
    v12 = SURFACE::pSurfobj(v10);
    if ( EngStretchBlt(v12, v15, 0, 0, 0, 0, &pptlHTOrg, &prclDest, (RECTL *)((char *)this + 140), 0, iMode) )
    {
      *((_DWORD *)this + 42) &= ~0x20000u;
      v13 = *((_DWORD *)this + 12);
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 36) = 0;
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
      *((_DWORD *)this + 12) = *(_DWORD *)a2;
      return 1;
    }
  }
  return v4;
}
