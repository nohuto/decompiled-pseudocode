/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1403FAD90
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1407A48A8 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x14097416C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
