/*
 * XREFs of sub_18002E4E0 @ 0x18002E4E0
 * Callers:
 *     sub_180031418 @ 0x180031418 (sub_180031418.c)
 * Callees:
 *     sub_18002D4BC @ 0x18002D4BC (sub_18002D4BC.c)
 */

__int64 __fastcall sub_18002E4E0(__int64 a1, __int64 a2)
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

  v4 = sub_18002D4BC(a1, (__int64)"{");
  v5 = sub_18002D4BC(v4, (__int64)"pSysMem");
  v6 = sub_18002D4BC(v5, (__int64)&unk_18013CEB0);
  v7 = std::ostream::operator<<(v6, *(_QWORD *)a2);
  v8 = sub_18002D4BC(v7, (__int64)",SysMemPitch");
  v9 = sub_18002D4BC(v8, (__int64)&unk_18013CEB0);
  v10 = std::ostream::operator<<(v9, *(unsigned int *)(a2 + 8));
  v11 = sub_18002D4BC(v10, (__int64)",SysMemSlicePitch");
  v12 = sub_18002D4BC(v11, (__int64)&unk_18013CEB0);
  v13 = std::ostream::operator<<(v12, *(unsigned int *)(a2 + 12));
  v14 = sub_18002D4BC(v13, (__int64)&unk_18013CEAC);
  sub_18002D4BC(v14, (__int64)&unk_18013CEA8);
  return a1;
}
