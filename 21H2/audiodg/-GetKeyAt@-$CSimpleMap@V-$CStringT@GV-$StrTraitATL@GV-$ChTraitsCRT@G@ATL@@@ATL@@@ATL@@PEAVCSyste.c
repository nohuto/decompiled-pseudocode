/*
 * XREFs of ?GetKeyAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@H@Z @ 0x140041CA4
 * Callers:
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x140041BE0 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14003E948 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

char *__fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetKeyAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= (int)qword_140090288 )
  {
    ATL::_AtlRaiseException(0xC000008C);
    JUMPOUT(0x140041CD2LL);
  }
  return (char *)qword_140090278 + 8 * a2;
}
