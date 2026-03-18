/*
 * XREFs of ZwCompleteConnectPort @ 0x1403F4980
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCompleteConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
