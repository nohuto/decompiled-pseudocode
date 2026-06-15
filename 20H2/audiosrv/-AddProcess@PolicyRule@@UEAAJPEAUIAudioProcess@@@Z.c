/*
 * XREFs of ?AddProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@@Z @ 0x180111180
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x18011114C (-AddHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@.c)
 */

__int64 __fastcall PolicyRule::AddProcess(PolicyRule *this, struct IAudioProcess *a2, __int64 a3)
{
  ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::AddHead(
    (__int64 *)this + 2,
    (__int64)a2,
    a3);
  return 0LL;
}
