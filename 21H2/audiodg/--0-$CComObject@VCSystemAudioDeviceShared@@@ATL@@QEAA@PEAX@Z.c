/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x1400128BC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400127B4 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140012964 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(__int64 a1)
{
  *(_DWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 376) = 0LL;
  *(_OWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_BYTE *)(a1 + 416) = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase((CSystemAudioDeviceSharedBase *)a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 24) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  *(_QWORD *)(a1 + 296) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *(_QWORD *)(a1 + 304) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
