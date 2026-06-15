/*
 * XREFs of ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140001D64
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010710 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400425F0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140001DDC (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceCollection::Remove(struct CSystemAudioDeviceBase *a1)
{
  int v2; // edx
  struct CSystemAudioDeviceBase **v3; // rax

  EnterCriticalSection(&g_CritSecSadMap);
  v2 = 0;
  if ( (int)qword_140090288 <= 0 )
  {
LABEL_7:
    v2 = -1;
  }
  else
  {
    v3 = (struct CSystemAudioDeviceBase **)qword_140090280;
    while ( *v3 != a1 )
    {
      ++v2;
      ++v3;
      if ( v2 >= (int)qword_140090288 )
        goto LABEL_7;
    }
  }
  if ( v2 != -1 )
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt();
  LeaveCriticalSection(&g_CritSecSadMap);
}
