/*
 * XREFs of ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004BFF4
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02B5EA8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02B6418 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02B70C4 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004C050 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(DISPLAYSTATECHECKER *this)
{
  int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 3514); ++i )
  {
    DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v1 += 3480;
  }
  return (unsigned int)(v1 + 72);
}
