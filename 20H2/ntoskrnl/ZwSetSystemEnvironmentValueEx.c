/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1403FB6B0
 * Callers:
 *     BiDeleteEfiVariable @ 0x14097416C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
