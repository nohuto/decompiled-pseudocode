/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C5B58
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006F630 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x1800770F0 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x1800C6138 (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x1800C6563 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE910 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800E0890 (AudioServerGetStreamVpoContext$dtor$0.c)
 *     asm_AudioServerInitializeStream @ 0x1800F25D0 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
