/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C4EC8
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000CBC0 (AudioServerIsFormatSupported.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006EB70 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x180076630 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x1800C54A8 (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x1800C58D3 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DDC80 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800DFC00 (AudioServerGetStreamVpoContext$dtor$0.c)
 *     asm_AudioServerInitializeStream @ 0x1800F1940 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
