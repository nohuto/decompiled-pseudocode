/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x1400324A8
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$28 @ 0x140021D00 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$28.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x140032898 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents_::_1_::dtor$1 @ 0x14004EF75 (_Windows--Media--Devices--Internal--AudioDeviceBroker--InitializeEvents_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
