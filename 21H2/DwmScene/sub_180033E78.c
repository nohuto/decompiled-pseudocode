/*
 * XREFs of sub_180033E78 @ 0x180033E78
 * Callers:
 *     sub_180036BB8 @ 0x180036BB8 (sub_180036BB8.c)
 * Callees:
 *     sub_180032D8C @ 0x180032D8C (sub_180032D8C.c)
 *     sub_180034030 @ 0x180034030 (sub_180034030.c)
 */

__int64 __fastcall sub_180033E78(__int64 a1, unsigned int *a2)
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
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = sub_180032D8C(a1, (__int64)"{");
  v5 = sub_180032D8C(v4, (__int64)"Width");
  v6 = sub_180032D8C(v5, (__int64)&unk_180143200);
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_180032D8C(v7, (__int64)",Height");
  v9 = sub_180032D8C(v8, (__int64)&unk_180143200);
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_180032D8C(v10, (__int64)",ArraySize");
  v12 = sub_180032D8C(v11, (__int64)&unk_180143200);
  v13 = std::ostream::operator<<(v12, a2[3]);
  v14 = sub_180032D8C(v13, (__int64)",Format");
  v15 = sub_180032D8C(v14, (__int64)&unk_180143200);
  v16 = std::ostream::operator<<(v15, a2[4]);
  v17 = sub_180032D8C(v16, (__int64)",SampleDesc");
  v18 = sub_180032D8C(v17, (__int64)&unk_180143200);
  v19 = sub_180034030(v18, a2 + 5);
  v20 = sub_180032D8C(v19, (__int64)",Usage");
  v21 = sub_180032D8C(v20, (__int64)&unk_180143200);
  v22 = std::ostream::operator<<(v21, a2[7]);
  v23 = sub_180032D8C(v22, (__int64)",BindFlags");
  v24 = sub_180032D8C(v23, (__int64)&unk_180143200);
  v25 = std::ostream::operator<<(v24, a2[8]);
  v26 = sub_180032D8C(v25, (__int64)",CPUAccessFlags");
  v27 = sub_180032D8C(v26, (__int64)&unk_180143200);
  v28 = std::ostream::operator<<(v27, a2[9]);
  v29 = sub_180032D8C(v28, (__int64)",MiscFlags");
  v30 = sub_180032D8C(v29, (__int64)&unk_180143200);
  v31 = std::ostream::operator<<(v30, a2[10]);
  v32 = sub_180032D8C(v31, (__int64)&unk_1801431FC);
  sub_180032D8C(v32, (__int64)&unk_1801431F8);
  return a1;
}
