/*
 * XREFs of _RtlWakeAddressAll@4 @ 0x4B2DF2B0
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 */

void __cdecl RtlWakeAddressAll(PVOID Address)
{
  signed __int32 v1; // [esp+0h] [ebp-4h] BYREF

  _InterlockedOr(&v1, 0);
  RtlpWakeByAddress(0);
}
