/*
 * XREFs of HvpGetCellContextInitialize @ 0x14087840C
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x140331554 (CmpValueEnumStackEntryInitialize.c)
 *     CmpDereferenceSecurityNode @ 0x1403EFD44 (CmpDereferenceSecurityNode.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EC17C (CmpQueryKeyDataFromKeyNodeStack.c)
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
