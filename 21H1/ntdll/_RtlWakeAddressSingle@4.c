/*
 * XREFs of _RtlWakeAddressSingle@4 @ 0x4B36A930
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 */

void __cdecl RtlWakeAddressSingle(PVOID Address)
{
  signed __int32 v1; // [esp+0h] [ebp-4h] BYREF

  _InterlockedOr(&v1, 0);
  RtlpWakeByAddress((unsigned int)Address, 0, 0);
}
