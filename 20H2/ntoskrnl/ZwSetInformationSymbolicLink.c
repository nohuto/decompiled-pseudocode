/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x1403FB4D0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationSymbolicLink(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
