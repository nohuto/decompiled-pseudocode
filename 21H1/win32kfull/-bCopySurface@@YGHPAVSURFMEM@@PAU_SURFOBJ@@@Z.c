/*
 * XREFs of ?bCopySurface@@YGHPAVSURFMEM@@PAU_SURFOBJ@@@Z @ 0x1D1105
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall bCopySurface(SURFMEM *a1, SURFOBJ *a2)
{
  ULONG iBitmapFormat; // ecx
  int result; // eax
  SURFACE *v6; // ecx
  LONG cy; // eax
  SURFOBJ *v8; // eax
  _DWORD v9[6]; // [esp+Ch] [ebp-2Ch] BYREF
  RECTL prclDest; // [esp+24h] [ebp-14h] BYREF

  v9[3] = 0;
  v9[4] = 0;
  v9[1] = a2->sizlBitmap.cx;
  v9[2] = a2->sizlBitmap.cy;
  iBitmapFormat = a2->iBitmapFormat;
  v9[5] = (int)*(a2 != 0 ? &a2[1].hsurf : (HSURF *)72) & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    v9[0] = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    v9[0] = 3;
  }
  else
  {
    v9[0] = iBitmapFormat;
  }
  result = SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)v9, 0, 0, 0, 0, 0, 0, 1, 0, 0);
  if ( result )
  {
    v6 = *(SURFACE **)a1;
    prclDest.right = a2->sizlBitmap.cx;
    cy = a2->sizlBitmap.cy;
    prclDest.left = 0;
    prclDest.top = 0;
    prclDest.bottom = cy;
    v8 = SURFACE::pSurfobj(v6);
    return EngCopyBits(v8, a2, 0, xloIdent, &prclDest, (POINTL *)&prclDest);
  }
  return result;
}
