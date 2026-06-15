/*
 * XREFs of sub_18013A6A4 @ 0x18013A6A4
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 * Callees:
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013A54C @ 0x18013A54C (sub_18013A54C.c)
 *     sub_18013A5F8 @ 0x18013A5F8 (sub_18013A5F8.c)
 */

__int64 __fastcall sub_18013A6A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  int v7; // ebx

  v7 = sub_18013A5F8(a1, a2, a3);
  if ( v7 >= 0 )
  {
    v7 = sub_18013A54C(v6, a4, a5);
    if ( v7 < 0 )
      sub_1800F3AD4((__int64)L"Repeated consumers in multiple XMLs not allowed");
  }
  else
  {
    sub_1800F3AD4((__int64)L"Repeated resource types in multiple XMLs not allowed");
  }
  return (unsigned int)v7;
}
