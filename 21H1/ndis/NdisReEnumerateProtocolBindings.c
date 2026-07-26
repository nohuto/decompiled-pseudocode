/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C0098280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C0028C4C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C0029D78 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0096808 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C0105344 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C0105528 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?BeginBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C0122838 (-BeginBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // r9d

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x21u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 103) + 1LL) = 1;
    Ndis::BindEngine::BeginBindOperation();
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
      (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_ab9eac71fb9c8da41666fde08c951755_::_lambda_invoker_cdecl_);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
        (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v3, 0xAu, v4);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x23u,
        (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
        NdisProtocolHandle);
    if ( byte_1C00E6082 < 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        v2,
        &ReferenceProtocolFailed,
        (const GUID *)&NDIS_PROVIDER_ID,
        0,
        1,
        (char)NdisProtocolHandle);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x24u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      NdisProtocolHandle);
}
