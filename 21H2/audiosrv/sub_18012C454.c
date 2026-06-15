/*
 * XREFs of sub_18012C454 @ 0x18012C454
 * Callers:
 *     sub_18012D4A4 @ 0x18012D4A4 (sub_18012D4A4.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012C6F0 @ 0x18012C6F0 (sub_18012C6F0.c)
 *     sub_18012D2B8 @ 0x18012D2B8 (sub_18012D2B8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 sub_18012C454(__int64 *a1, int *a2, int a3, ...)
{
  LPVOID v6; // rax
  int v7; // edi
  __int64 v8; // rbx
  int v9; // r9d
  size_t Size; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 *v14; // [rsp+90h] [rbp+28h]
  void **v15; // [rsp+98h] [rbp+30h]
  _DWORD *v16; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, __int64 *);
  v15 = va_arg(va1, void **);
  v16 = va_arg(va1, _DWORD *);
  *a1 = 0LL;
  v6 = sub_18006A18C(0x88uLL);
  if ( v6 )
  {
    v8 = sub_18012C6F0(v6);
    v12 = v8;
    LODWORD(Size) = *v16;
    v7 = sub_18012D2B8(v8, *a2, a3, v9, *v14, *v15, Size);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    sub_1800461B8((__int64 *)va);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
