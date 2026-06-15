/*
 * XREFs of sub_1800F6F4C @ 0x1800F6F4C
 * Callers:
 *     sub_1800F717C @ 0x1800F717C (sub_1800F717C.c)
 * Callees:
 *     sub_180064E28 @ 0x180064E28 (sub_180064E28.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F7230 @ 0x1800F7230 (sub_1800F7230.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F6F4C(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi

  *a1 = 0LL;
  v6 = sub_18006A18C(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    sub_180064E28((__int64)v6);
    *v7 = &off_18014ABE8;
    v7[2] = 0LL;
    v7[3] = 0LL;
    *((_DWORD *)v7 + 8) = 0;
    v8 = sub_1800F7230(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
