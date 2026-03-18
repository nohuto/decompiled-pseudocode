/*
 * XREFs of ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004CF44
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02B9408 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02B9978 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02BA624 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004CFA0 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
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
