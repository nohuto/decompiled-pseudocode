/*
 * XREFs of HvpGetCellContextInitialize @ 0x140875CF8
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x1402D3894 (CmpValueEnumStackEntryInitialize.c)
 *     CmpDereferenceSecurityNode @ 0x1403F06FC (CmpDereferenceSecurityNode.c)
 *     CmDeleteLayeredKey @ 0x1404ED078 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDA5C (CmpQueryKeyDataFromKeyNodeStack.c)
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
