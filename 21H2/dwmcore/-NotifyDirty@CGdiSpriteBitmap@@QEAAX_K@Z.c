/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x1800335E4
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18009C4EC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x1801C2200 (-ProcessNotifyDirty@CGdiSpriteBitmap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_NOT.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800336BC (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18009B798 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18009C5FC (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::NotifyDirty(CGdiSpriteBitmap *this, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // [rsp+20h] [rbp-59h] BYREF
  HGDIOBJ ho; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v6[3]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+60h] [rbp-19h]
  int *v8; // [rsp+70h] [rbp-9h] BYREF
  int v9; // [rsp+78h] [rbp-1h] BYREF

  ho = 0LL;
  v4 = 56;
  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  v3 = *((_QWORD *)this + 11);
  *(_QWORD *)&v6[0] = a2;
  *((_QWORD *)&v6[0] + 1) = &ho;
  if ( (int)CRedirectedGDISurface::GetInformation(v3, 0LL, &v4, v6) >= 0 )
  {
    if ( !ho )
      return;
    v9 = 0;
    v8 = &v9;
    CRegion::SetHRGN((CRegion *)&v8, (HRGN)ho);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v8, 1);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v8);
  }
  if ( ho )
    DeleteObject(ho);
}
