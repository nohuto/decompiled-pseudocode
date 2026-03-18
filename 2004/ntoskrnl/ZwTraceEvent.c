/*
 * XREFs of ZwTraceEvent @ 0x1403F4180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTraceEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
