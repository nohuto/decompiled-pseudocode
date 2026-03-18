/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800D59D8
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180094924 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18003F594 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180040A90 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180041614 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  __int64 v2; // rcx
  unsigned int *v3; // r8
  int v4; // [rsp+20h] [rbp-59h] BYREF
  HGDIOBJ ho; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v6[3]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+60h] [rbp-19h]
  int *v8; // [rsp+70h] [rbp-9h] BYREF
  int v9; // [rsp+78h] [rbp-1h] BYREF

  ho = 0LL;
  v4 = 56;
  v7 = 0LL;
  v2 = *((_QWORD *)this + 11);
  v6[1] = (unsigned __int64)&ho;
  v6[0] = 0LL;
  v6[2] = 0LL;
  if ( (int)CRedirectedGDISurface::GetInformation(v2, 0, &v4, (__int64)v6) >= 0 )
  {
    if ( !ho )
      return;
    v9 = 0;
    v8 = &v9;
    CRegion::SetHRGN((CRegion *)&v8, (HRGN)ho, v3);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v8, *((_BYTE *)this + 130));
    FastRegion::CRegion::FreeMemory((void **)&v8);
  }
  if ( ho )
    DeleteObject(ho);
}
