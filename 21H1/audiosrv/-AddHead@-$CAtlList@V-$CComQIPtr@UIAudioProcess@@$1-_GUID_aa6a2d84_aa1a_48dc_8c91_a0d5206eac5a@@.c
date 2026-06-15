/*
 * XREFs of ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x180111D1C
 * Callers:
 *     ?AddProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@@Z @ 0x180111D50 (-AddProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?RuntimeClassInitialize@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180113CA0 (-RuntimeClassInitialize@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 *     ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180115490 (-RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule.c)
 *     ?RuntimeClassInitialize@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180115A30 (-RuntimeClassInitialize@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@@ATL@@AEAAPEAVCNode@12@PEAUIAudioProcess@@PEAV312@1@Z @ 0x180112DBC (-NewNode@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::AddHead(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::NewNode(
             a1,
             a2,
             a3,
             *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
