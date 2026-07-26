/*
 * XREFs of WPP_RECORDER_SF_dqZ @ 0x1C00967E8
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C009039C (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  __int64 v9; // rdx
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rax
  int v13; // [rsp+20h] [rbp-68h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
  {
    if ( a8 )
      v9 = *a8;
    else
      v9 = 8LL;
    if ( a8 && *a8 )
      v10 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v10 = L"NULL";
    v11 = a8;
    if ( !a8 )
      v11 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      0x80u,
      &a6,
      4LL,
      &a7,
      8LL,
      v11,
      2LL,
      v10,
      v9,
      0LL);
  }
  LOWORD(v13) = 128;
  return WppAutoLogTrace(a1, 3LL, 14LL, &WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids, v13, &a6);
}
