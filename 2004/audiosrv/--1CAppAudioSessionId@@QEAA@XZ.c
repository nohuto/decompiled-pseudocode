/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x180002474
 * Callers:
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$6 @ 0x180075ED0 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$6.c)
 *     _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession___CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____::NewNode_::_1_::dtor$3 @ 0x18007AD30 (_ATL--CAtlMap_CAudioSessionInstanceId_CAudioSession___CAudioSessionInstanceIdTraits_ea_18007AD30.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 4) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
