/*
 * XREFs of _RtlWakeAddressAll@4 @ 0x4B2DF2B0
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 */

int __thiscall RtlWakeAddressAll(void *this, int a2)
{
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  _InterlockedOr((volatile signed __int32 *)&v3, 0);
  return RtlpWakeByAddress(0);
}
