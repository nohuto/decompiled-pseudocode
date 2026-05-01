/*
 * XREFs of sub_18002F700 @ 0x18002F700
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003111C @ 0x18003111C (sub_18003111C.c)
 *     sub_1800381F0 @ 0x1800381F0 (sub_1800381F0.c)
 *     sub_1800384A0 @ 0x1800384A0 (sub_1800384A0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F700(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  void *v8; // rax
  int v9; // edi
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = operator new(0x90uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    if ( v8 )
    {
      v10 = sub_18003111C(v8);
      v9 = sub_1800381F0(v10, &stru_180051438, &v11);
      if ( v10 )
        sub_1800384A0(v10);
      v7 = v11;
      if ( v9 >= 0 )
        v9 = (**v11)(v11, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
    return (unsigned int)v9;
  }
}
