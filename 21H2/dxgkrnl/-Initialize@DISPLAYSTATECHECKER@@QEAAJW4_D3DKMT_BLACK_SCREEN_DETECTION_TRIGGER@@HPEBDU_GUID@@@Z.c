/*
 * XREFs of ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02BB3E4
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02BBFA0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C004E040 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C0133D8C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02BB38C (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::Initialize(__int64 a1, __int64 a2, int a3, const char *a4, __int128 *a5)
{
  __int128 v6; // xmm0
  struct DXGGLOBAL *Global; // rax

  *(_DWORD *)a1 = 0;
  *(_BYTE *)a1 = a2;
  v6 = *a5;
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (a3 << 8)) & 0x100;
  *(_OWORD *)(a1 + 20) = v6;
  if ( a4 )
    RtlStringCchCopyA((char *)(a1 + 4), a2, a4);
  else
    *(_BYTE *)(a1 + 4) = 0;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback,
    a1,
    4);
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ ((unsigned int)DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters((DISPLAYSTATECHECKER *)a1) << 9)) & 0x1FE00;
  return 0LL;
}
