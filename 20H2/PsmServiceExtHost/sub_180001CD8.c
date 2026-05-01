/*
 * XREFs of sub_180001CD8 @ 0x180001CD8
 * Callers:
 *     sub_180001C3C @ 0x180001C3C (sub_180001C3C.c)
 * Callees:
 *     sub_180001DB4 @ 0x180001DB4 (sub_180001DB4.c)
 *     sub_180001E34 @ 0x180001E34 (sub_180001E34.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180001CD8(int a1, __int64 a2, __int64 a3, int a4, __int64 *Block)
{
  __int64 *v5; // rdi
  unsigned __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v12; // rcx

  *(_QWORD *)a2 = 0LL;
  v5 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v9 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                                 * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (v5[3] ^ ((unsigned __int64)v5[3] >> 33))) >> 33))) >> 33);
    v5[2] = v9;
    if ( (unsigned __int8)sub_180001E34(a1, a4, (int)v5 + 24, v9, (__int64)&Block) )
    {
      v12 = v5[4];
      *(_QWORD *)a2 = Block;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      j_j_free(v5);
    }
    else
    {
      v10 = (_QWORD *)sub_180001DB4(a1, (unsigned int)&Block, (_DWORD)Block, (_DWORD)v5, v5[2]);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *v10;
    }
  }
  return a2;
}
