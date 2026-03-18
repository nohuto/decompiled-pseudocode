/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1403F3A00
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14034F888 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
