/*
 * XREFs of WPP_RECORDER_SF_qqZZ @ 0x1C0029570
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012BB74 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012CDE8 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCloseAdapter @ 0x1C013A890 (NdisCloseAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9)
{
  __int64 v12; // r10
  const wchar_t *v13; // r9
  const wchar_t *v14; // rdx
  __int64 v15; // r8
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rax
  int v18; // [rsp+20h] [rbp-98h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
      v12 = *a9;
    else
      v12 = 8LL;
    if ( a9 && *a9 )
      v13 = (const wchar_t *)*((_QWORD *)a9 + 1);
    else
      v13 = L"NULL";
    v14 = a9;
    if ( !a9 )
      v14 = L"\b";
    if ( a8 )
      v15 = *a8;
    else
      v15 = 8LL;
    if ( a8 && *a8 )
      v16 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v16 = L"NULL";
    v17 = a8;
    if ( !a8 )
      v17 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v17, 2LL, v16, v15, v14, 2LL, v13, v12, 0LL);
  }
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, 9LL, a5, v18, &a6);
}
