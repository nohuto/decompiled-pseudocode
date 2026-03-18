/*
 * XREFs of ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02B6E68
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02B7630 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02B5EA8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1C02B6340 (-CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02B6F20 (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02B70C4 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02B727C (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int i; // esi
  unsigned __int64 v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0;
  v2 = 512;
  v3 = *(_DWORD *)this;
  v12 = 512;
  if ( (_BYTE)v3 == 8 && (v3 & 0x100) != 0 )
    DISPLAYSTATECHECKER::LogDisplayBlackBoxData(this, &v13);
  DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(this);
  if ( (*(_DWORD *)this & 0x100) != 0 )
  {
    DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
      this,
      v6,
      (unsigned __int8)*(_DWORD *)this,
      v7,
      v10,
      v11,
      (enum DxgkrnlLiveDumpFailureReason *)&v12);
    v2 = v12;
    for ( i = 0; i < *((_DWORD *)this + 3514); ++i )
    {
      if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::CreateMiniportBlackboxLiveDump(
                  (DISPLAYSTATECHECKER *)((char *)this + 3504 * i + 40),
                  v8) < 0 )
        v2 |= 0x1000u;
    }
  }
  DISPLAYSTATECHECKER::LogDisplayTelemetryDiagData(this, a2, v2);
}
