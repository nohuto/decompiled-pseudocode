/*
 * XREFs of TR_Disable_Internal @ 0x1C0001578
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C0004DBC (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00384A0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C00386E0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003B3B0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1C0001468 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003FAF0 (TR_FreeSecureTransferSegments.c)
 */

void __fastcall TR_Disable_Internal(__int64 a1, char a2)
{
  __int64 v4; // rsi
  _QWORD **v5; // rdx
  _QWORD **v6; // rdx
  struct _MDL *v7; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  (*(void (**)(void))(*(_QWORD *)(a1 + 32) + 40LL))();
  _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 280) )
      TR_FreeSecureTransferSegments(a1);
    v5 = (_QWORD **)(a1 + 208);
    if ( *v5 != v5 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88, v5);
    v6 = (_QWORD **)(a1 + 224);
    if ( *v6 != v6 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88, v6);
    v7 = *(struct _MDL **)(a1 + 120);
    if ( v7 )
    {
      IoFreeMdl(v7);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
}
