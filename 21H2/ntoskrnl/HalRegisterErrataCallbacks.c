/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140A465B0
 * Callers:
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 * Callees:
 *     EmpProviderRegister @ 0x14079D1E0 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140005640, 6u, &v1);
}
