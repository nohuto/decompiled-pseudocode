/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C5A68
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006F530 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x180076FF0 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x1800C6048 (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x1800C6473 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE850 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800E07D0 (AudioServerGetStreamVpoContext$dtor$0.c)
 *     asm_AudioServerInitializeStream @ 0x1800F2510 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
