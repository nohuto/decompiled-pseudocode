/*
 * XREFs of sub_18003BF5C @ 0x18003BF5C
 * Callers:
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003BF5C(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 16);
  result = 0LL;
  if ( v1 != *(_DWORD *)(a1 + 8) )
  {
    result = *(_QWORD *)a1 + 16LL * v1;
    *(_DWORD *)(a1 + 16) = v1 + 1;
  }
  return result;
}
