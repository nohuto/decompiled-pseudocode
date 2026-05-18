/*
 * XREFs of sub_18011571C @ 0x18011571C
 * Callers:
 *     sub_18011584C @ 0x18011584C (sub_18011584C.c)
 * Callees:
 *     sub_18006DFC4 @ 0x18006DFC4 (sub_18006DFC4.c)
 *     sub_180070114 @ 0x180070114 (sub_180070114.c)
 *     sub_180115510 @ 0x180115510 (sub_180115510.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

__int64 __fastcall sub_18011571C(__int64 *a1, __int64 a2, size_t *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  const void *v8; // rdx
  const void *v9; // rcx
  size_t v10; // r14
  size_t v11; // r8
  int v12; // eax
  bool v13; // sf
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v17[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = sub_180070114(a1, a3);
  v7 = v6;
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_14;
  v8 = v6 + 4;
  if ( (unsigned __int64)v6[7] >= 0x10 )
    v8 = (const void *)v6[4];
  v9 = a3;
  if ( a3[3] >= 0x10 )
    v9 = (const void *)*a3;
  v10 = v6[6];
  v11 = a3[2];
  if ( v10 < v11 )
    v11 = v6[6];
  v12 = memcmp(v9, v8, v11);
  v13 = v12 < 0;
  if ( v12 )
    goto LABEL_12;
  if ( a3[2] < v10 )
    goto LABEL_14;
  if ( a3[2] <= v10 )
  {
    v13 = 0;
LABEL_12:
    if ( !v13 )
      goto LABEL_13;
LABEL_14:
    v14 = *a1;
    v17[0] = (__int64)a3;
    v15 = sub_180115510((__int64)a1, v14, (__int64)&unk_1801D73D5, v17);
    sub_18006DFC4((__int64 **)a1, v17, v7, v15 + 4, v15);
    *(_QWORD *)a2 = v17[0];
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
LABEL_13:
  *(_QWORD *)a2 = v7;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
