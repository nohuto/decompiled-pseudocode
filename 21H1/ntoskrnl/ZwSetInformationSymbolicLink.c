/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x1403F5670
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140782DDC (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationSymbolicLink(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
