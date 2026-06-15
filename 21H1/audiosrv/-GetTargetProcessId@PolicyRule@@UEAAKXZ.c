/*
 * XREFs of ?GetTargetProcessId@PolicyRule@@UEAAKXZ @ 0x180112CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@XZ @ 0x1801012F0 (-GetHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@.c)
 */

__int64 __fastcall PolicyRule::GetTargetProcessId(PolicyRule *this)
{
  _QWORD *Head; // rax

  if ( (*((_BYTE *)this + 80) & 2) == 0 )
    return 0LL;
  Head = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::GetHead((_QWORD *)this + 2);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Head + 40LL))(*Head);
}
