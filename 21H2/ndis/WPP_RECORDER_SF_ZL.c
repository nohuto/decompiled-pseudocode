/*
 * XREFs of WPP_RECORDER_SF_ZL @ 0x1C002EDA4
 * Callers:
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C002ECB4 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0098098 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rbx
  bool v9; // zf
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  const wchar_t *v13; // r8
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
      v11 = *a6;
    else
      v11 = 8LL;
    if ( a6 && *a6 )
      v12 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v12 = L"NULL";
    v13 = a6;
    if ( !a6 )
      v13 = L"\b";
    ndisWppFastTraceMessage(&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids, a4, v13, 2LL, v12, v11, va, 4LL, 0LL);
  }
  v9 = a6 == 0LL;
  if ( a6 )
    v9 = 0;
  if ( v9 )
    v6 = L"\b";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_3ecb09451b79381299710a0782e8cc63_Traceguids, v14, v6);
}
