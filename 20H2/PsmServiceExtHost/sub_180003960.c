/*
 * XREFs of sub_180003960 @ 0x180003960
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003578 @ 0x180003578 (sub_180003578.c)
 *     sub_180007268 @ 0x180007268 (sub_180007268.c)
 *     sub_180007FF8 @ 0x180007FF8 (sub_180007FF8.c)
 *     sub_18000803C @ 0x18000803C (sub_18000803C.c)
 *     sub_180025EC8 @ 0x180025EC8 (sub_180025EC8.c)
 *     sub_180027C9C @ 0x180027C9C (sub_180027C9C.c)
 */

__int64 __fastcall sub_180003960(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  result = *(unsigned int *)(a1 + 16);
  if ( (int)result > 0 && (int)result <= 2 )
  {
    sub_18000803C(a2);
    v5 = sub_180003578(a2, *(_QWORD *)a1);
    v6 = v5;
    if ( v5 )
    {
      sub_180007FF8(v5);
      *(_BYTE *)(v6 + 185) |= 4u;
      sub_180025EC8(v6);
      sub_180027C9C(v6);
    }
    return sub_180007268(a2);
  }
  return result;
}
