/*
 * XREFs of sub_1800EFD8C @ 0x1800EFD8C
 * Callers:
 *     sub_180035D60 @ 0x180035D60 (sub_180035D60.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D1744 @ 0x1800D1744 (sub_1800D1744.c)
 *     sub_1800F1240 @ 0x1800F1240 (sub_1800F1240.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EFD8C(__int64 **a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 *v9; // r14
  __int64 *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  sub_180048790(&v14, **a1);
  v4 = (__int64 *)(*a2 + 24);
  v5 = *(__int64 **)(*a2 + 32);
  v6 = 0LL;
  if ( *(__int64 **)(*a2 + 40) == v5 )
  {
    sub_1800D1744(v4, v5, &v14);
  }
  else
  {
    v7 = v14;
    v14 = 0LL;
    *v5 = v7;
    v4[1] += 8LL;
  }
  sub_18000F708(&v14);
  result = *a2;
  v9 = *(__int64 **)(*a2 + 48);
  v10 = *a1;
  v11 = (unsigned __int64)(*(_QWORD *)(result + 56) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *(_QWORD *)(result + 56) )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      v12 = *v9;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v10 + 184LL))(*v10);
      result = sub_1800F1240(v12, 0LL, v13);
      ++v9;
      ++v6;
    }
    while ( v6 != v11 );
  }
  return result;
}
