/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1403F61C0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x140795578 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x14096E39C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
