/*
 * XREFs of WPP_RECORDER_SF_Z @ 0x1C0012F18
 * Callers:
 *     NdisReadConfiguration @ 0x1C00289C0 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C0029330 (NdisOpenProtocolConfiguration.c)
 *     NdisRegisterProtocolDriver @ 0x1C002E430 (NdisRegisterProtocolDriver.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C002ECB4 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C002F680 (NdisFRegisterFilterDriver.c)
 *     NdisWdfReadConfiguration @ 0x1C005F410 (NdisWdfReadConfiguration.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1C0076424 (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0098098 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     NdisRegisterProtocol @ 0x1C0098A30 (NdisRegisterProtocol.c)
 *     NdisOpenFile @ 0x1C00BD840 (NdisOpenFile.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C0108F7C (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisHandleBindNotification @ 0x1C01178E8 (ndisHandleBindNotification.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0124A38 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C01259DC (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0125B5C (-ReferenceWdi@@YA_NXZ.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0126DD8 (ndisIfUpdateStringIfNeeded.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C01392D4 (ndisHandleProtocolReconfigNotification.c)
 *     ndisFindRootDevice @ 0x1C013A3B8 (ndisFindRootDevice.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C013A698 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Z(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6)
{
  unsigned __int64 v8; // rdi
  unsigned int v10; // r14d
  const wchar_t *v11; // rbx
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-58h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v11 = a6;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= a2 )
  {
    if ( a6 )
      v15 = *a6;
    else
      v15 = 8LL;
    if ( a6 && *a6 )
      v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v16 = L"NULL";
    v17 = a6;
    if ( !a6 )
      v17 = L"\b";
    ndisWppFastTraceMessage(a5, a4, v17, 2LL, v16, v15, 0LL);
  }
  v13 = a6 == 0LL;
  if ( a6 )
    v13 = 0;
  if ( v13 )
    v11 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v18, v11);
}
