/*
 * XREFs of sub_180015684 @ 0x180015684
 * Callers:
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_180014CF4 @ 0x180014CF4 (sub_180014CF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180015684(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 88);
  v5 = 0;
  v6 = 8LL * a2;
  if ( v4 )
    v7 = o_realloc(v4, v6);
  else
    v7 = _o_malloc(v6);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 88) = v7;
    *(_DWORD *)(a1 + 76) = a2;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
