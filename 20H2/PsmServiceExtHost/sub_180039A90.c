/*
 * XREFs of sub_180039A90 @ 0x180039A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039B04 @ 0x180039B04 (sub_180039B04.c)
 *     sub_180064A2C @ 0x180064A2C (sub_180064A2C.c)
 *     sub_180065A10 @ 0x180065A10 (sub_180065A10.c)
 *     sub_1800668CC @ 0x1800668CC (sub_1800668CC.c)
 *     sub_18006693C @ 0x18006693C (sub_18006693C.c)
 */

__int64 __fastcall sub_180039A90(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 result; // rax

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = a1;
  if ( !(_DWORD)a1 && !a3 && !v4 )
    return sub_180064A2C(&byte_1800B4010);
  if ( (a2 & 0x40000000) != 0 )
    return sub_180065A10(&byte_1800B4010);
  if ( a3 || v4 == 254 )
    return sub_180039B04(&byte_1800B4010);
  result = sub_1800668CC(a1, v4, v3);
  if ( (_DWORD)result )
    return sub_18006693C(v5, v4, v3);
  return result;
}
