/*
 * XREFs of sub_18012A5D4 @ 0x18012A5D4
 * Callers:
 *     sub_18012BA50 @ 0x18012BA50 (sub_18012BA50.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012A75C @ 0x18012A75C (sub_18012A75C.c)
 *     sub_18012B740 @ 0x18012B740 (sub_18012B740.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012A5D4(__int64 *a1, __int64 a2, unsigned int *a3)
{
  LPVOID v6; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_18006A18C(0x228uLL);
  if ( v6 )
  {
    v8 = sub_18012A75C(v6);
    v10 = v8;
    v11 = 0LL;
    v7 = sub_18012B740(v8, a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    sub_1800461B8(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
