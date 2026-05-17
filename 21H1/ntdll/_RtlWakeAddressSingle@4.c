/*
 * XREFs of _RtlWakeAddressSingle@4 @ 0x4B36A930
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 */

char __thiscall RtlWakeAddressSingle(void *this, unsigned int a2)
{
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  _InterlockedOr((volatile signed __int32 *)&v3, 0);
  return RtlpWakeByAddress(a2, 0, 0);
}
