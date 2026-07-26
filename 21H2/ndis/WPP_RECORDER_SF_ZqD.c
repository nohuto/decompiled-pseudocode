/*
 * XREFs of WPP_RECORDER_SF_ZqD @ 0x1C002A9A8
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0103C1C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010517C (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZqD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rbx
  bool v9; // zf
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  const wchar_t *v13; // r8
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  v6 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
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
    ndisWppFastTraceMessage(
      &WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      a4,
      v13,
      2LL,
      v12,
      v11,
      va,
      8LL,
      va1,
      4LL,
      0LL);
  }
  v9 = a6 == 0LL;
  if ( a6 )
    v9 = 0;
  if ( v9 )
    v6 = L"\b";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, &WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids, v14, v6);
}
