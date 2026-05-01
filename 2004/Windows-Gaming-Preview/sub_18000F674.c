/*
 * XREFs of sub_18000F674 @ 0x18000F674
 * Callers:
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 *     sub_18000DE3C @ 0x18000DE3C (sub_18000DE3C.c)
 *     sub_180030490 @ 0x180030490 (sub_180030490.c)
 *     sub_18003067C @ 0x18003067C (sub_18003067C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F674(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 88);
  v5 = 0;
  v6 = 16LL * a2;
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
