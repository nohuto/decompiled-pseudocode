/*
 * XREFs of ZwConnectPort @ 0x1403F9570
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407A4600 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
