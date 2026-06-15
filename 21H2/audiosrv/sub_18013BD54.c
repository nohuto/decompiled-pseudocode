/*
 * XREFs of sub_18013BD54 @ 0x18013BD54
 * Callers:
 *     sub_18013B948 @ 0x18013B948 (sub_18013B948.c)
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013AC1C @ 0x18013AC1C (sub_18013AC1C.c)
 */

__int64 __fastcall sub_18013BD54(_DWORD *a1, __int64 a2, _WORD *a3, unsigned int a4)
{
  __int64 v5; // rdi
  int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+24h] [rbp-14h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0;
  v5 = a4;
  v7 = sub_18013AC1C(a1, a2, &v10);
  if ( v7 >= 0 )
  {
    if ( v10 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)a2 + 128LL))(a2, &v11, &v9);
      if ( v7 >= 0 )
      {
        if ( v9 > (unsigned int)v5 )
        {
          v7 = -2147024809;
          sub_1800F3AD4((__int64)L"Length of entry %d longer than expected length %d", v9, (unsigned int)v5);
        }
        if ( v7 >= 0 )
          return (unsigned int)sub_180057300(a3, v5, v11);
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v7;
}
