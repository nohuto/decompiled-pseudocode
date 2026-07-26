/*
 * XREFs of WPP_RECORDER_SF_qq_guid_ @ 0x1C0061FCC
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C0060180 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qq_guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8)
{
  int v10; // [rsp+20h] [rbp-48h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids, 0x93u, &a6, 8LL, &a7, 8LL, a8, 16LL, 0LL);
  LOWORD(v10) = 147;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids, v10, &a6);
}
