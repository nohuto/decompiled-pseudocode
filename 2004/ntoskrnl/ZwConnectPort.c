/*
 * XREFs of ZwConnectPort @ 0x1403F49C0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
