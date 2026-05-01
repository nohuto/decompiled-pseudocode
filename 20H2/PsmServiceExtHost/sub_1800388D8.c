/*
 * XREFs of sub_1800388D8 @ 0x1800388D8
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     sub_1800393C8 @ 0x1800393C8 (sub_1800393C8.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_1800667F4 @ 0x1800667F4 (sub_1800667F4.c)
 */

char __fastcall sub_1800388D8(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  void *v8; // rcx
  char v9; // al
  __int64 v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 < 0xA )
  {
    sub_1800667F4(retaddr);
    __debugbreak();
  }
  v8 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
    sub_18003850C(v8);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2 + a3;
  *(_QWORD *)(a1 + 40) = a2 + a4;
  *(_BYTE *)(a1 + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_13;
  if ( *(_WORD *)a2 || (v9 = 0, *(_WORD *)(a2 + 2) > *(_WORD *)a1) )
    v9 = 1;
  *(_BYTE *)(a1 + 57) = v9;
  if ( *(_WORD *)a2
    || *(_WORD *)(a2 + 2) != *(_WORD *)a1
    || *(_WORD *)(a2 + 4) != *(_WORD *)(a1 + 2)
    || *(_BYTE *)(a2 + 8) != *(_BYTE *)(a1 + 4)
    || *(_WORD *)(a2 + 6) != *(_WORD *)(a1 + 6)
    || (LOBYTE(v10) = *(_BYTE *)(a1 + 8), *(_BYTE *)(a2 + 9) != (_BYTE)v10) )
  {
LABEL_13:
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = *(_WORD *)a1;
    *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + 2);
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(a1 + 4);
    *(_WORD *)(a2 + 6) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(a2 + 9) = *(_BYTE *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24) + 10LL;
    *(_QWORD *)(a1 + 32) = v10;
  }
  return v10;
}
