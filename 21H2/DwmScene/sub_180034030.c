/*
 * XREFs of sub_180034030 @ 0x180034030
 * Callers:
 *     sub_180033E78 @ 0x180033E78 (sub_180033E78.c)
 * Callees:
 *     sub_180032D8C @ 0x180032D8C (sub_180032D8C.c)
 */

__int64 __fastcall sub_180034030(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_180032D8C(a1, (__int64)"{");
  v5 = sub_180032D8C(v4, (__int64)"Count");
  v6 = sub_180032D8C(v5, (__int64)&unk_180143200);
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_180032D8C(v7, (__int64)",Quality");
  v9 = sub_180032D8C(v8, (__int64)&unk_180143200);
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_180032D8C(v10, (__int64)&unk_1801431FC);
  sub_180032D8C(v11, (__int64)&unk_1801431F8);
  return a1;
}
