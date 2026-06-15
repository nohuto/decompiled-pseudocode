/*
 * XREFs of sub_1800BBCBC @ 0x1800BBCBC
 * Callers:
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_1800BC7E0 @ 0x1800BC7E0 (sub_1800BC7E0.c)
 *     sub_1800C5CB0 @ 0x1800C5CB0 (sub_1800C5CB0.c)
 *     sub_180103778 @ 0x180103778 (sub_180103778.c)
 * Callees:
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 */

__int64 __fastcall sub_1800BBCBC(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_1800BC578(a1);
  return result;
}
