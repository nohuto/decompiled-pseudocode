/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140042494
 * Callers:
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x14002BCC2 (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x14002C6C0 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x14002D432 (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x1400426A6 (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140043954 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x140045485 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14004D96C (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
