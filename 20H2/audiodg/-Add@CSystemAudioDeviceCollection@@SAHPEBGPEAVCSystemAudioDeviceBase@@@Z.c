/*
 * XREFs of ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140003834
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400029D0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140042F40 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x1400036F4 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudi.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400038F8 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140003AB0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x140041810 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x140041B84 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemAudioDeviceCollection::Add(const unsigned __int16 *a1, struct CSystemAudioDeviceBase *a2)
{
  unsigned __int16 v3; // dx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  HINSTANCE StringResourceInstance; // rax
  struct CSystemAudioDeviceBase *v9; // [rsp+48h] [rbp+10h] BYREF
  char *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h]

  v9 = a2;
  EnterCriticalSection(&g_CritSecSadMap);
  v11 = &g_CritSecSadMap;
  v10 = (char *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  if ( !a1 )
  {
    LODWORD(v4) = 0;
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v10, a1, (unsigned int)v4);
    goto LABEL_6;
  }
  if ( (unsigned __int64)a1 >= 0x10000 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a1[v4] );
    goto LABEL_5;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a1, v3);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v10,
      StringResourceInstance,
      (unsigned __int16)a1);
LABEL_6:
  v6 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
         v5,
         (const void **)&v10,
         &v9);
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 24));
  LeaveCriticalSection(&g_CritSecSadMap);
  return v6;
}
