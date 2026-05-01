/*
 * XREFs of ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x1801A9F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180138750 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ImmersiveIconsLogging *__fastcall ImmersiveIconsLogging::`vector deleting destructor'(
        ImmersiveIconsLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
