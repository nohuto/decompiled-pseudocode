/*
 * XREFs of sub_18003A184 @ 0x18003A184
 * Callers:
 *     sub_18003A154 @ 0x18003A154 (sub_18003A154.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_18003A22C @ 0x18003A22C (sub_18003A22C.c)
 */

char __fastcall sub_18003A184(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  char *v4; // rax
  char *v5; // rsi
  rsize_t v6; // r14
  void *v7; // rcx

  if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)a1 >= a2 )
  {
LABEL_6:
    LOBYTE(v4) = 1;
    return (char)v4;
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  v4 = (char *)sub_18003A22C(0, v3);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    memcpy_s(v4, v3, *(const void *const *)a1, v6);
    v7 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v5;
    if ( v7 )
      sub_18003850C(v7);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = &v5[v6];
    *(_QWORD *)(a1 + 16) = &v5[v3];
    goto LABEL_6;
  }
  return (char)v4;
}
