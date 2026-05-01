/*
 * XREFs of sub_180067AF0 @ 0x180067AF0
 * Callers:
 *     sub_180001DB4 @ 0x180001DB4 (sub_180001DB4.c)
 *     sub_18002C890 @ 0x18002C890 (sub_18002C890.c)
 * Callees:
 *     sub_180002738 @ 0x180002738 (sub_180002738.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall sub_180067AF0(__int64 a1, unsigned __int8 a2)
{
  char v2; // r14
  void *v5; // rbp
  void *v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rdi
  _QWORD *v9; // r11
  _QWORD *v10; // r10
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v2 = 0;
  if ( a2 <= 0x38u )
  {
    v5 = (unsigned __int64)(8LL << a2) > 0xFFFFFFFFFFFFFFFLL
       ? 0LL
       : operator new(16 * (8LL << a2), (const struct std::nothrow_t *)&unk_1800967D8);
    if ( v5 )
    {
      v6 = *(void **)(a1 + 16);
      v2 = 1;
      if ( v6 )
        j_j_free(v6);
      *(_QWORD *)(a1 + 16) = v5;
      *(_BYTE *)(a1 + 32) = a2;
      sub_180002738(a1);
      v7 = *(_QWORD **)a1;
      v8 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
      while ( 1 )
      {
        v9 = v7;
        if ( v7 == (_QWORD *)a1 )
          break;
        v10 = v7;
        v7 = (_QWORD *)*v7;
        v11 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (v8 & v10[2]));
        v12 = (_QWORD *)v11[1];
        if ( v12 )
        {
          v13 = (_QWORD *)*v12;
          if ( v13 != v10 )
          {
            v14 = (_QWORD *)v7[1];
            *(_QWORD *)v10[1] = v7;
            v7[1] = v10[1];
            v10[1] = v13[1];
            *(_QWORD *)v13[1] = v10;
            *v14 = v13;
            v13[1] = v14;
          }
        }
        else
        {
          *v11 = v10;
        }
        v11[1] = v9;
      }
    }
  }
  return v2;
}
