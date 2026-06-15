/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x18004CDD0
 * Callers:
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$0 @ 0x180079FFF (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$0.c)
 *     _EndpointCollection::EndpointCollection_::_1_::dtor$0 @ 0x18007A0D3 (_EndpointCollection--EndpointCollection_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$0 @ 0x18007A123 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$0 @ 0x18007A1BF (_PhoneTopology--PhoneTopology_--_1_--dtor$0.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$0 @ 0x18007A672 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$0.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$0 @ 0x18007B160 (_CAudioStream--CAudioStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
