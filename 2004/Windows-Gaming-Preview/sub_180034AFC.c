/*
 * XREFs of sub_180034AFC @ 0x180034AFC
 * Callers:
 *     sub_180030270 @ 0x180030270 (sub_180030270.c)
 * Callees:
 *     sub_180034F18 @ 0x180034F18 (sub_180034F18.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1800453CC (memset.c)
 */

__int64 __fastcall sub_180034AFC(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v9; // rax
  void *v10; // rax

  v5 = (unsigned int)a2;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    j_j__o_free(v6, a2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  if ( !a3 )
  {
LABEL_11:
    *(_DWORD *)(a1 + 24) = v5;
    sub_180034F18(a1);
    *a4 = 1;
    return 0LL;
  }
  v9 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v9 = -1LL;
  v10 = operator new(v9, (const struct std::nothrow_t *)&unk_18005AF88);
  *(_QWORD *)(a1 + 8) = v10;
  if ( v10 )
  {
    if ( (unsigned int)v5 > 0x1FFFFFFF )
      return 2147549183LL;
    memset(v10, 0, 8 * v5);
    goto LABEL_11;
  }
  *a4 = 0;
  return 0LL;
}
