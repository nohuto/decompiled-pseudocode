/*
 * XREFs of sub_18012BCD4 @ 0x18012BCD4
 * Callers:
 *     sub_18012C318 @ 0x18012C318 (sub_18012C318.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012BE44 @ 0x18012BE44 (sub_18012BE44.c)
 *     sub_18012C25C @ 0x18012C25C (sub_18012C25C.c)
 */

__int64 __fastcall sub_18012BCD4(__int64 *a1, unsigned int *a2, __int64 a3, unsigned __int16 *a4)
{
  LPVOID v8; // rax
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = sub_18006A18C(0x78uLL);
  if ( v8 )
  {
    v10 = sub_18012BE44(v8);
    v11 = *a4;
    v12 = *a2;
    v13 = v10;
    v15 = v10;
    v9 = sub_18012C25C(v10, v12, a3, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v9 = 0;
    }
    sub_1800461B8(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
