/*
 * XREFs of ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140041B4C
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F210 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400418C0 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x140041A50 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14003E7B8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

char *__fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= (int)qword_140090378 )
  {
    ATL::_AtlRaiseException(0xC000008C);
    JUMPOUT(0x140041B7ALL);
  }
  return (char *)qword_140090370 + 8 * a2;
}
