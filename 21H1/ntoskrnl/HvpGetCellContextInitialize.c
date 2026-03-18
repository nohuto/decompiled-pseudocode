/*
 * XREFs of HvpGetCellContextInitialize @ 0x1408715C8
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x140322D04 (CmpValueEnumStackEntryInitialize.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404E82BC (CmpQueryKeyDataFromKeyNodeStack.c)
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
