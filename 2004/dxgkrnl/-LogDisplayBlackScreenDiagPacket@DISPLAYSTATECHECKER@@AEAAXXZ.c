/*
 * XREFs of ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02BB604
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BB3A8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004D004 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02BA958 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(DISPLAYSTATECHECKER *this)
{
  SIZE_T BlackScreenDiagDataSize; // rsi
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentProcessSessionId; // eax

  BlackScreenDiagDataSize = (unsigned int)DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v3 = (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, PagedPool);
  v7 = v3;
  if ( v3 )
  {
    memset(v3, 0, BlackScreenDiagDataSize);
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(this, v7, BlackScreenDiagDataSize);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
    DxgkWriteDiagEntry(v7, CurrentProcessSessionId);
    operator delete[](v7);
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = 471LL;
    WdLogEvent5_WdWarning(v8);
  }
}
