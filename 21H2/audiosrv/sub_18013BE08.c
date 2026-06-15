/*
 * XREFs of sub_18013BE08 @ 0x18013BE08
 * Callers:
 *     sub_18013AA94 @ 0x18013AA94 (sub_18013AA94.c)
 * Callees:
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_1800F3B8C @ 0x1800F3B8C (sub_1800F3B8C.c)
 *     sub_18013A8AC @ 0x18013A8AC (sub_18013A8AC.c)
 *     sub_18013AA14 @ 0x18013AA14 (sub_18013AA14.c)
 *     sub_18013AC1C @ 0x18013AC1C (sub_18013AC1C.c)
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 */

__int64 __fastcall sub_18013BE08(unsigned int *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  int v11; // ebx
  __int64 v12; // rcx
  int v14[6]; // [rsp+40h] [rbp-18h] BYREF

  v11 = sub_18013AC1C(a1, a2, v14);
  if ( v11 >= 0 )
  {
    if ( v14[0] != 17 )
    {
      sub_1800F3AD4((__int64)L"XML declaration not found");
      return (unsigned int)-2147024809;
    }
    sub_1800F3B8C((__int64)L"XML declaration read");
  }
  if ( v11 >= 0 )
  {
    v11 = sub_18013A8AC(a1, a2, (__int64)L"ConstraintModel");
    if ( v11 >= 0 )
    {
      v11 = sub_18013AD18(a1, a2, a3, a4, a5, a6, a7);
      if ( v11 >= 0 )
        return (unsigned int)sub_18013AA14(v12, a2);
    }
  }
  return (unsigned int)v11;
}
