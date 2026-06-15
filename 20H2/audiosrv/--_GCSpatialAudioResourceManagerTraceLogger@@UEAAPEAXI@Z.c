/*
 * XREFs of ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x180109B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180109A08 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 */

CSpatialAudioResourceManagerTraceLogger *__fastcall CSpatialAudioResourceManagerTraceLogger::`scalar deleting destructor'(
        CSpatialAudioResourceManagerTraceLogger *this,
        char a2)
{
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
