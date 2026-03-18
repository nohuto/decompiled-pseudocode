/*
 * XREFs of ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02EF308
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F0140 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C004D374 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ @ 0x1C004ED08 (-GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02EF2B0 (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::Initialize(__int64 a1, __int64 a2, int a3, const char *a4, __int128 *a5)
{
  struct DXGGLOBAL *Global; // rax
  struct LongPowerButtonHoldListener *LongPowerButtonHoldListener; // rax
  __int128 v9; // xmm0
  struct DXGGLOBAL *v10; // rax

  *(_DWORD *)a1 = 0;
  *(_BYTE *)a1 = a2;
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (a3 << 8)) & 0x100;
  if ( (_DWORD)a2 == 8 )
  {
    Global = DXGGLOBAL_GetGlobal();
    LongPowerButtonHoldListener = DisplayDiagnostics::GetLongPowerButtonHoldListener((struct DXGGLOBAL *)((char *)Global + 304640));
    if ( LongPowerButtonHoldListener )
      v9 = *(_OWORD *)((char *)LongPowerButtonHoldListener + 72);
    else
      v9 = *a5;
    *(_OWORD *)(a1 + 20) = v9;
  }
  else
  {
    *(_OWORD *)(a1 + 20) = *a5;
  }
  if ( a4 )
    RtlStringCchCopyA((char *)(a1 + 4), a2, a4);
  else
    *(_BYTE *)(a1 + 4) = 0;
  v10 = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v10,
    (__int64 (__fastcall *)(_QWORD *, __int64))DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback,
    a1,
    4LL);
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ ((unsigned int)DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters((DISPLAYSTATECHECKER *)a1) << 9)) & 0x1FE00;
  return 0LL;
}
