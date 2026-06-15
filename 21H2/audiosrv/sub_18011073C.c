/*
 * XREFs of sub_18011073C @ 0x18011073C
 * Callers:
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180110F18 @ 0x180110F18 (sub_180110F18.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011073C(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  LPVOID v6; // rax
  LPVOID v7; // rbx
  int v8; // edi

  *a1 = 0LL;
  v6 = sub_18006A18C(0x158uLL);
  v7 = v6;
  if ( v6 )
  {
    sub_180110F18(v6);
    *(_QWORD *)v7 = &off_18014AF40;
    v8 = ((__int64 (__fastcall *)(LPVOID, _QWORD, _QWORD))sub_1801149D0)(v7, *a2, *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(LPVOID, __int64 *, _QWORD *))v7)(v7, &qword_18015EB88, a1);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
