/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x1400447BC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140044A9C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x14004488C (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::CComAggObject<CSystemAudioDeviceShared>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  CSystemAudioDeviceShared::CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  *(_QWORD *)(a1 + 320) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *(_QWORD *)(a1 + 328) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  *(_QWORD *)(a1 + 392) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
