/*
 * XREFs of ??1?$CAutoPtr@V?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18011958C
 * Callers:
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$0 @ 0x18007B281 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$1 @ 0x18007B293 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$7 @ 0x18007B49B (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$7.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$8 @ 0x18007B4B4 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$0 @ 0x18011BB51 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>>::~CAutoPtr<ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>>(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      free(*(void **)v1);
      *(_QWORD *)v1 = 0LL;
    }
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)(v1 + 12) = 0;
    operator delete((void *)v1, (const struct std::nothrow_t *)0x10);
  }
  *a1 = 0LL;
}
