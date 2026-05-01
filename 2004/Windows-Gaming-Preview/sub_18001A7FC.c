/*
 * XREFs of sub_18001A7FC @ 0x18001A7FC
 * Callers:
 *     sub_18001986C @ 0x18001986C (sub_18001986C.c)
 *     sub_180019A90 @ 0x180019A90 (sub_180019A90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A7FC(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  v6 = 8LL * a2;
  if ( v4 )
    v7 = o_realloc(v4, v6);
  else
    v7 = _o_malloc(v6);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 56) = v7;
    *(_DWORD *)(a1 + 44) = a2;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
