/*
 * XREFs of WPP_RECORDER_SF_ZZL @ 0x1C0029C44
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103D90 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011FCA8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ZZL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6)
{
  const wchar_t *v6; // rdi
  bool v9; // zf
  const wchar_t *v11; // rax
  const wchar_t *v12; // r8
  int v13; // [rsp+20h] [rbp-88h]

  v6 = (const wchar_t *)a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 && *(_WORD *)a6 )
      v11 = *(const wchar_t **)(a6 + 8);
    else
      v11 = L"NULL";
    v12 = (const wchar_t *)a6;
    if ( !a6 )
      v12 = L"\b";
    HIWORD(v13) = WORD1(v11);
    ndisWppFastTraceMessage(&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids, a4, v12);
  }
  v9 = a6 == 0;
  if ( a6 )
    v9 = 0;
  if ( v9 )
    v6 = L"\b";
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids, v13, v6);
}
