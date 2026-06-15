/*
 * XREFs of sub_18013A8AC @ 0x18013A8AC
 * Callers:
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 *     sub_18013BE08 @ 0x18013BE08 (sub_18013BE08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013AC1C @ 0x18013AC1C (sub_18013AC1C.c)
 *     sub_18013ACA8 @ 0x18013ACA8 (sub_18013ACA8.c)
 */

__int64 __fastcall sub_18013A8AC(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v7 = sub_18013AC1C(a1, a2, &v9);
  if ( v7 >= 0
    && (v9 != 1
     || !(unsigned __int8)sub_18013ACA8(v6, a2, a3)
     || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2)) )
  {
    v7 = -2147024809;
    sub_1800F3AD4((__int64)L"Did not find starting element for %s", a3);
  }
  *a1 = (unsigned int)v7 >> 31;
  return (unsigned int)v7;
}
