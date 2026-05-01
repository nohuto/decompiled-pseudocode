/*
 * XREFs of sub_180031878 @ 0x180031878
 * Callers:
 *     sub_1800317B0 @ 0x1800317B0 (sub_1800317B0.c)
 * Callees:
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall sub_180031878(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rax
  void **v8; // rcx
  char v9; // bl
  void *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  void *Block[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (_QWORD *)*a1 == a1 + 2 )
    v4 = 7LL;
  else
    v4 = (__int64)(a1[2] - *a1) >> 1;
  v5 = 2 * v4 + 1;
  if ( v5 < a3 )
    v5 = a3;
  if ( v5 > 0x3FFFFFFFFFFFFFF7LL )
    v5 = 0x3FFFFFFFFFFFFFF7LL;
  if ( a3 > v5 )
  {
    Block[1] = 0LL;
    v8 = Block;
    v7 = 0LL;
    v9 = 2;
  }
  else
  {
    v6 = v5 + 1;
    v11[1] = (void *)v6;
    if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
      v7 = 0LL;
    else
      v7 = operator new(2 * v6, (const struct std::nothrow_t *)&unk_1800967D8);
    v11[0] = v7;
    v8 = v11;
    v9 = 1;
  }
  *v8 = 0LL;
  *a2 = v7;
  a2[1] = v8[1];
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( Block[0] )
      j_j_free(Block[0]);
  }
  if ( (v9 & 1) != 0 && v11[0] )
    j_j_free(v11[0]);
  return a2;
}
