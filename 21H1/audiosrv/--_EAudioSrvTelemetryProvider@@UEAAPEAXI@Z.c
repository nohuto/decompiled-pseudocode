/*
 * XREFs of ??_EAudioSrvTelemetryProvider@@UEAAPEAXI@Z @ 0x18006DD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800B7558 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioSrvTelemetryProvider *__fastcall AudioSrvTelemetryProvider::`vector deleting destructor'(
        AudioSrvTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
