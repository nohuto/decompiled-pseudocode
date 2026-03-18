/*
 * XREFs of PiDcCompareUpdateProperties @ 0x140752550
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 */

__int64 __fastcall PiDcCompareUpdateProperties(struct _RTL_AVL_TABLE *Table, PVOID FirstStruct, PVOID SecondStruct)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = memcmp(FirstStruct, SecondStruct, 0x14uLL);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
