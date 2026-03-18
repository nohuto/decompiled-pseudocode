/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003E918
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180040578 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800402AC (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800A64D8 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A733C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+20h] [rbp-59h] BYREF
  HGDIOBJ ho; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v5[3]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v6; // [rsp+60h] [rbp-19h]
  int *v7; // [rsp+70h] [rbp-9h] BYREF
  int v8; // [rsp+78h] [rbp-1h] BYREF

  ho = 0LL;
  v3 = 56;
  v6 = 0LL;
  v2 = *((_QWORD *)this + 11);
  v5[1] = (unsigned __int64)&ho;
  v5[0] = 0LL;
  v5[2] = 0LL;
  if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, int *, _OWORD *))CRedirectedGDISurface::GetInformation)(
              v2,
              0LL,
              &v3,
              v5) >= 0 )
  {
    if ( !ho )
      return;
    v8 = 0;
    v7 = &v8;
    CRegion::SetHRGN((CRegion *)&v7, (HRGN)ho);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v7, *((_BYTE *)this + 130));
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v7);
  }
  if ( ho )
    DeleteObject(ho);
}
