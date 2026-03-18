/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C006A060
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C006A17C (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C006C034 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID DXGQUOTAALLOCATOR<1,1936868166>::operator new()
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x40uLL, 0x73724346u);
}
