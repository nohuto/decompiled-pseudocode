/*
 * XREFs of sub_180036340 @ 0x180036340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180036340(__int64 a1, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  unsigned __int64 v6; // r8
  _DWORD *result; // rax

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 )
    return 0LL;
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < a3 )
      return 0LL;
    v6 = a3 * (__int64)v5;
    if ( v6 > 0xFFFFFFFFFFFFFFE7uLL )
      return 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  result = HeapAlloc(*(HANDLE *)(*(_QWORD *)(a1 + 8) + 8LL), 0, v6 + 24);
  if ( result )
  {
    result[2] = 0;
    result[3] = v5 - 1;
    *(_QWORD *)result = a1;
    result[4] = 1;
    return result;
  }
  return 0LL;
}
