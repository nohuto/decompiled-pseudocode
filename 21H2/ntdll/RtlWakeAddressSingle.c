/*
 * XREFs of RtlWakeAddressSingle @ 0x180063B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWakeAddressSingle(__int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  return RtlpWakeByAddress(a1, 0LL);
}
