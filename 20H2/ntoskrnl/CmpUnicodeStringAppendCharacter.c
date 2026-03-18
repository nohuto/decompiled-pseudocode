/*
 * XREFs of CmpUnicodeStringAppendCharacter @ 0x1405CBACC
 * Callers:
 *     CmpDoWritethroughReparse @ 0x14060C070 (CmpDoWritethroughReparse.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1408733F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpUnicodeStringAppendCharacter(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( (int)v2 + 2 > (unsigned int)a1[1] )
    return 2147483653LL;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v2 >> 1)) = 92;
  result = 0LL;
  *a1 += 2;
  return result;
}
