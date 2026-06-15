/*
 * XREFs of sub_180118B74 @ 0x180118B74
 * Callers:
 *     unknown_libname_342 @ 0x180116E98 (unknown_libname_342.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180118B74(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 2) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *a1;
        CoTaskMemFree(*(LPVOID *)(v4 + *a1));
        *(_QWORD *)(v4 + v5) = 0LL;
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)a1 + 2) );
      v2 = *a1;
    }
    result = _o_free(v2);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
  return result;
}
