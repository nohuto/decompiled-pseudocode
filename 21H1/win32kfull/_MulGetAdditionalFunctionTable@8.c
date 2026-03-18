/*
 * XREFs of _MulGetAdditionalFunctionTable@8 @ 0x2068DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulGetAdditionalFunctionTable(_DWORD *a1, _DWORD *a2)
{
  *a1 = &drvfnMulti;
  *a2 = 28;
  return 0;
}
