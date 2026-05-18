/*
 * XREFs of sub_180033DB0 @ 0x180033DB0
 * Callers:
 *     sub_180036CE8 @ 0x180036CE8 (sub_180036CE8.c)
 * Callees:
 *     sub_180032D8C @ 0x180032D8C (sub_180032D8C.c)
 */

__int64 __fastcall sub_180033DB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = sub_180032D8C(a1, (__int64)"{");
  v5 = sub_180032D8C(v4, (__int64)"pSysMem");
  v6 = sub_180032D8C(v5, (__int64)&unk_180143200);
  v7 = std::ostream::operator<<(v6, *(_QWORD *)a2);
  v8 = sub_180032D8C(v7, (__int64)",SysMemPitch");
  v9 = sub_180032D8C(v8, (__int64)&unk_180143200);
  v10 = std::ostream::operator<<(v9, *(unsigned int *)(a2 + 8));
  v11 = sub_180032D8C(v10, (__int64)",SysMemSlicePitch");
  v12 = sub_180032D8C(v11, (__int64)&unk_180143200);
  v13 = std::ostream::operator<<(v12, *(unsigned int *)(a2 + 12));
  v14 = sub_180032D8C(v13, (__int64)&unk_1801431FC);
  sub_180032D8C(v14, (__int64)&unk_1801431F8);
  return a1;
}
