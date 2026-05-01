/*
 * XREFs of sub_18002C7DC @ 0x18002C7DC
 * Callers:
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 * Callees:
 *     sub_18000BF80 @ 0x18000BF80 (sub_18000BF80.c)
 *     sub_18002C890 @ 0x18002C890 (sub_18002C890.c)
 *     sub_18002C924 @ 0x18002C924 (sub_18002C924.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 */

__int64 __fastcall sub_18002C7DC(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *Block)
{
  __int64 *v6; // rbp
  int v8; // r14d
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax

  *(_QWORD *)a2 = 0LL;
  v6 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  v8 = a1;
  if ( v6 )
  {
    v9 = sub_18000BF80(a1, (unsigned __int64)(v6 + 3));
    v6[2] = v9;
    if ( (unsigned __int8)sub_18002C924(v8, a4, (int)v6 + 24, v9, (__int64)&Block) )
    {
      *(_QWORD *)a2 = Block;
      j_j_free(v6);
    }
    else
    {
      v10 = (_QWORD *)sub_18002C890(v8, (unsigned int)&Block, (_DWORD)Block, (_DWORD)v6, v6[2]);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *v10;
    }
  }
  return a2;
}
