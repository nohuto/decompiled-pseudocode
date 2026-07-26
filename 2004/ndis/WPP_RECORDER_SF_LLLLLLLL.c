/*
 * XREFs of WPP_RECORDER_SF_LLLLLLLL @ 0x1C00723E4
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006F2E4 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LLLLLLLL(
        __int64 a1,
        _DWORD a2,
        _DWORD a3,
        _DWORD a4,
        int a5,
        char a6,
        int a7,
        char a8,
        int a9,
        ...)
{
  int v11; // [rsp+28h] [rbp-A1h]
  int v12; // [rsp+B8h] [rbp-11h] BYREF
  int v13; // [rsp+C0h] [rbp-9h] BYREF
  int v14[4]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v15; // [rsp+130h] [rbp+67h] BYREF
  va_list va; // [rsp+130h] [rbp+67h]
  __int64 v17; // [rsp+138h] [rbp+6Fh]
  __int64 v18; // [rsp+140h] [rbp+77h] BYREF
  va_list va1; // [rsp+140h] [rbp+77h]
  va_list va2; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v12 = 1;
  v13 = 52;
  v14[0] = 182;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    ndisWppFastTraceMessage(
      &WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      0xA8u,
      &a6,
      4LL,
      v14,
      4LL,
      &a8,
      4LL,
      &v13,
      4LL,
      va,
      4LL,
      &v12,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v11) = 168;
  return WppAutoLogTrace(a1, 5LL, 24LL, &WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids, v11, &a6);
}
