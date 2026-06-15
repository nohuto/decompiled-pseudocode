/*
 * XREFs of ??_GCSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x18010A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *__fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::`scalar deleting destructor'(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this,
        char a2)
{
  *(_QWORD *)this = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
