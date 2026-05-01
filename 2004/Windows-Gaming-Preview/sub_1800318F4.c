/*
 * XREFs of sub_1800318F4 @ 0x1800318F4
 * Callers:
 *     sub_180030140 @ 0x180030140 (sub_180030140.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_180031560 @ 0x180031560 (sub_180031560.c)
 *     sub_180032388 @ 0x180032388 (sub_180032388.c)
 *     sub_180032834 @ 0x180032834 (sub_180032834.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800318F4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK *v8; // rbx
  volatile signed __int64 *v9; // rsi
  int v10; // ebx

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = (RTL_SRWLOCK *)operator new(0x70uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    sub_180032388(v7);
    v8->Ptr = &off_18004BE50;
    v8[1].Ptr = off_18004BE30;
    v8[2].Ptr = off_18004BDF8;
    v8[3].Ptr = off_18004BDB0;
    InitializeSRWLock(v8 + 9);
    v8[10].Ptr = 0LL;
    v8[11].Ptr = 0LL;
    v8[12].Ptr = 0LL;
    BYTE5(v8[13].Ptr) = 0;
    v6 = (__int64)v8;
    v9 = (volatile signed __int64 *)v8;
  }
  if ( v9 )
  {
    v10 = sub_180032834(v6, a1);
    if ( v10 >= 0 )
      v10 = sub_180031560(v6, a2, a3);
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    sub_18000D490(v9);
  return (unsigned int)v10;
}
