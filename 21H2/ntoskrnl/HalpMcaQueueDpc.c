/*
 * XREFs of HalpMcaQueueDpc @ 0x14024EA78
 * Callers:
 *     HalpTimerClockInterrupt @ 0x1402CEE40 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D4A10 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HalpMcaQueueDpc(char a1, char a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  ULONG_PTR v4; // rcx

  if ( a1 )
  {
    result = McaWmiCallback;
    if ( McaWmiCallback )
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))McaWmiCallback(1496727831LL, 1LL);
  }
  if ( a2 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD))KiProcessorBlock[0];
    v4 = *(_QWORD *)(KiProcessorBlock[0] + 128);
    if ( v4 )
    {
      *(_QWORD *)(KiProcessorBlock[0] + 128) = 0LL;
      return (__int64 (__fastcall *)(_QWORD, _QWORD))KiInsertQueueDpc(v4, 0);
    }
  }
  return result;
}
