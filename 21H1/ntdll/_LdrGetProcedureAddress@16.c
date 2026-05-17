/*
 * XREFs of _LdrGetProcedureAddress@16 @ 0x4B2AB7F0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 */

int __stdcall LdrGetProcedureAddress(int a1, int a2, int a3, int a4)
{
  void *retaddr; // [esp+4h] [ebp+4h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
