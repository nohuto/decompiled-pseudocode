/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18004108C
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180040F7C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180041614 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180041D40 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18017A574 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // esi
  signed __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  void *lpMem; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v10[18]; // [rsp+38h] [rbp-60h] BYREF

  v2 = 0;
  lpMem = v10;
  v10[0] = 0;
  CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)&lpMem);
  CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&lpMem, 1);
  if ( *(_DWORD *)a2 == 3 )
  {
    v6 = *((_QWORD *)a2 + 4);
    if ( v6 >= 0 )
    {
      if ( v6 )
      {
        v7 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
               (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 12) + 96LL),
               v6);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x28Au, 0LL);
      }
    }
    else
    {
      *((_QWORD *)this + 17) = *((_QWORD *)this + 10);
      *((_BYTE *)this + 126) = 1;
      *((_QWORD *)this + 18) = *((_QWORD *)a2 + 4);
    }
  }
  if ( v10 != lpMem )
    operator delete(lpMem);
  return v2;
}
