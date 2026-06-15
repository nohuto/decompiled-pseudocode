/*
 * XREFs of ??0TraceLoggingThreadActivityIdSetter@@QEAA@AEBU_GUID@@@Z @ 0x1800DB41C
 * Callers:
 *     asm_AudioServerInitializeStream @ 0x1800F2510 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     <none>
 */

TraceLoggingThreadActivityIdSetter *__fastcall TraceLoggingThreadActivityIdSetter::TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this,
        const struct _GUID *a2)
{
  *(struct _GUID *)this = *a2;
  *((struct _GUID *)this + 1) = *a2;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
