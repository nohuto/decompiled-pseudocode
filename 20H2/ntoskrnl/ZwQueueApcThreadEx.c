/*
 * XREFs of ZwQueueApcThreadEx @ 0x1403FAE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueueApcThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
