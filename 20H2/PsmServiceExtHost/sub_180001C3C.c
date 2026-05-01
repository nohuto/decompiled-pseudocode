/*
 * XREFs of sub_180001C3C @ 0x180001C3C
 * Callers:
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 * Callees:
 *     sub_180001CD8 @ 0x180001CD8 (sub_180001CD8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180001C3C(int a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *Block; // rbx
  int v9; // r8d
  __int64 v10; // rcx

  Block = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_1800967D8);
  if ( Block )
  {
    Block[3] = *a3;
    v10 = *a4;
    Block[4] = *a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    Block = 0LL;
  }
  sub_180001CD8(a1, a2, v9, 0, Block);
  return a2;
}
