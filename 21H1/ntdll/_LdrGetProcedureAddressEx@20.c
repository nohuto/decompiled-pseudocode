/*
 * XREFs of _LdrGetProcedureAddressEx@20 @ 0x4B2A6AE0
 * Callers:
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 * Callees:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 */

int __stdcall LdrGetProcedureAddressEx(int a1, int a2, int a3, int a4, int a5)
{
  void *retaddr; // [esp+4h] [ebp+4h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
