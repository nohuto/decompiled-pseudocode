/*
 * XREFs of WPP_RECORDER_SF_DDZ @ 0x1C0065D44
 * Callers:
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C01066B0 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C0106770 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C0116348 (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rax
  int v14; // [rsp+20h] [rbp-68h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( a8 )
      v10 = *a8;
    else
      v10 = 8LL;
    if ( a8 && *a8 )
      v11 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v11 = L"NULL";
    v12 = a8;
    if ( !a8 )
      v12 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_225861cab2d5393449c0e8d0bcddebbb_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      v12,
      2LL,
      v11,
      v10,
      0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_225861cab2d5393449c0e8d0bcddebbb_Traceguids, v14, &a6);
}
