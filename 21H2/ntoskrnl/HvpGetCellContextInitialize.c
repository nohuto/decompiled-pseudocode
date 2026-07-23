/*
 * XREFs of HvpGetCellContextInitialize @ 0x140875E58
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x140251B94 (CmpValueEnumStackEntryInitialize.c)
 *     CmpDereferenceSecurityNode @ 0x1403F086C (CmpDereferenceSecurityNode.c)
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDC9C (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  *(_DWORD *)a1 = -1;
  return result;
}
