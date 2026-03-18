/*
 * XREFs of ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02EFA40
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02EF7B8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004D134 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02EEC64 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F00E8 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(DISPLAYSTATECHECKER *this)
{
  unsigned int BlackScreenDiagDataSize; // esi
  __int64 v3; // r9
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v4; // rax
  struct _DXGK_DIAG_HEADER *v5; // rbx
  __int64 v6; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v4 = (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, 256LL, v3);
  v5 = v4;
  if ( v4 )
  {
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(this, v4, BlackScreenDiagDataSize);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    DxgkWriteDiagEntry(v5, CurrentProcessSessionId);
    v10 = 0x3800000033LL;
    v13 = 0LL;
    DWORD2(v13) = 0;
    *(_QWORD *)&v13 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v14 = 0LL;
    if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
      LODWORD(v14) = v14 | 1;
    v9 = PsGetCurrentProcessSessionId(v8);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v10, v9);
    operator delete[](v5);
  }
  else
  {
    WdLogSingleEntry1(3LL, 496LL);
  }
}
