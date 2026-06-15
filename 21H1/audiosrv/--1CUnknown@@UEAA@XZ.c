/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x18004D520
 * Callers:
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$0 @ 0x18007A9BF (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$0.c)
 *     _EndpointCollection::EndpointCollection_::_1_::dtor$0 @ 0x18007AA93 (_EndpointCollection--EndpointCollection_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$0 @ 0x18007AAE3 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$0 @ 0x18007AB7F (_PhoneTopology--PhoneTopology_--_1_--dtor$0.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$0 @ 0x18007B032 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$0.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$0 @ 0x18007BB20 (_CAudioStream--CAudioStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
