/*
 * XREFs of sub_18013A944 @ 0x18013A944
 * Callers:
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 *     sub_18013B170 @ 0x18013B170 (sub_18013B170.c)
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_18013AC1C @ 0x18013AC1C (sub_18013AC1C.c)
 *     sub_18013ACA8 @ 0x18013ACA8 (sub_18013ACA8.c)
 */

__int64 __fastcall sub_18013A944(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v11 = sub_18013AC1C(a1, a2, &v14);
  if ( v11 >= 0 )
  {
    v12 = v14;
    v11 = -2147024809;
    if ( v14 == 1 )
    {
      if ( (unsigned __int8)sub_18013ACA8(v10, a2, a3)
        && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2) )
      {
        *a6 = 1;
LABEL_10:
        v11 = 0;
        goto LABEL_13;
      }
      v12 = v14;
    }
    if ( v12 == 15 && (unsigned __int8)sub_18013ACA8(v10, a2, a4) )
    {
      *a6 = 0;
      goto LABEL_10;
    }
    if ( !a5 )
      sub_1800F3AD4((__int64)L"Was expecting start element %s or end element for %s - not found", a3, a4);
  }
LABEL_13:
  *a1 = (unsigned int)v11 >> 31;
  return (unsigned int)v11;
}
