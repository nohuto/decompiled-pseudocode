/*
 * XREFs of ZwCreateKeyedEvent @ 0x1403F9790
 * Callers:
 *     ExpKeyedEventInitialization @ 0x140A7236C (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateKeyedEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
