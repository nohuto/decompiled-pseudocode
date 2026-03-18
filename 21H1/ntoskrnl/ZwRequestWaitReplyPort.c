/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1403F2770
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140312098 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
