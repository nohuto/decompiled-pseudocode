/*
 * XREFs of sub_1800C90C4 @ 0x1800C90C4
 * Callers:
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 * Callees:
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 *     sub_1800C5F04 @ 0x1800C5F04 (sub_1800C5F04.c)
 *     sub_1800C7FC4 @ 0x1800C7FC4 (sub_1800C7FC4.c)
 */

__int64 *__fastcall sub_1800C90C4(__int64 *a1, __int64 *a2, int a3, int a4)
{
  int v4; // esi
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ebx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, __int64); // rax
  const void *v14; // rsi
  __int64 v15; // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v7 = 0;
  v8 = *(_DWORD *)(*a1 - 16);
  if ( a4 >= 0 )
    v7 = a4;
  v9 = sub_1800C5F04(v4, v7);
  v10 = *a1;
  v11 = *(_DWORD *)(*a1 - 16);
  if ( v9 > v8 )
    v7 = v11 - v4;
  v12 = 0;
  if ( v4 <= v11 )
    v12 = v7;
  if ( v4 || v12 != v11 )
  {
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))sub_1800C7FC4(a1);
    v14 = (const void *)(v10 + 2LL * v4);
    if ( !v13 )
      sub_1800B8610(-2147467259);
    if ( !v14 && v12 )
      sub_1800B8610(-2147024809);
    v15 = (**v13)(v13, (unsigned int)v12, 2LL);
    if ( !v15 )
      sub_1800BABDC();
    *a2 = v15 + 24;
    sub_1800448E4(a2, v12);
    sub_18003447C((void *)*a2, 2LL * v12, v14, 2LL * v12);
  }
  else
  {
    *a2 = (__int64)(sub_180006C80((volatile signed __int32 *)(v10 - 24)) + 6);
  }
  return a2;
}
