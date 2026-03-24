/*
 * XREFs of ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02BBA34
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BB7D8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004DE94 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02BAD88 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
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
