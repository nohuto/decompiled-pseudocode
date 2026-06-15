/*
 * XREFs of sub_180036410 @ 0x180036410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180036410(__int64 a1, void *a2, int a3, unsigned int a4)
{
  int v5; // r8d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  SIZE_T v8; // r9
  void *v9; // rcx
  _DWORD *result; // rax

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v5 = a3 + 1;
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v5 > (int)v6 )
    return 0LL;
  v7 = a4 * (unsigned __int64)v6;
  if ( v7 > 0xFFFFFFFF || (unsigned int)v7 > 0xFFFFFFE7 )
    return 0LL;
  v8 = (unsigned int)(v7 + 24);
  v9 = *(void **)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( a2 )
  {
    if ( !v8 )
    {
      HeapFree(v9, 0, a2);
      return 0LL;
    }
    result = HeapReAlloc(v9, 0, a2, v8);
  }
  else
  {
    result = HeapAlloc(v9, 0, (unsigned int)v8);
  }
  if ( !result )
    return 0LL;
  result[3] = v6 - 1;
  return result;
}
