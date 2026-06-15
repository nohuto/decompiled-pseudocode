/*
 * XREFs of ??_GAudioDgTelemetryProvider@@UEAAPEAXI@Z @ 0x140033520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1400334A4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AudioDgTelemetryProvider *__fastcall AudioDgTelemetryProvider::`scalar deleting destructor'(
        AudioDgTelemetryProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
