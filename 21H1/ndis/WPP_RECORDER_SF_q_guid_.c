/*
 * XREFs of WPP_RECORDER_SF_q_guid_ @ 0x1C0061DF0
 * Callers:
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115508 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_q_guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, __int64 a7)
{
  int v9; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids, 0x8Du, &a6, 8LL, a7, 16LL, 0LL);
  LOWORD(v9) = 141;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids, v9, &a6);
}
