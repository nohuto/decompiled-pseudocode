/*
 * XREFs of HvpGetCellContextInitialize @ 0x1408728BC
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x140360954 (CmpValueEnumStackEntryInitialize.c)
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404E88EC (CmpQueryKeyDataFromKeyNodeStack.c)
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
