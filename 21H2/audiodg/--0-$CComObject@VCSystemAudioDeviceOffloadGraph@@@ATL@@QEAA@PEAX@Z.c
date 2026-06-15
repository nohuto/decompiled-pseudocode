/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x140044FB0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140045640 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x140045068 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::CComObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *a1)
{
  CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmix'};
  *((_QWORD *)a1 + 37) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 38) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmixInternal'};
  *((_QWORD *)a1 + 46) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)a1 + 47) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)a1 + 48) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
