/*
 * XREFs of sub_180115484 @ 0x180115484
 * Callers:
 *     sub_180115688 @ 0x180115688 (sub_180115688.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall sub_180115484(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, char *); // rcx

  v5 = operator new(0x68uLL);
  v6 = v5;
  v5[8] = *(_DWORD *)a3;
  *((_QWORD *)v5 + 12) = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, char *))(a3 + 64);
  if ( v7 )
    *((_QWORD *)v5 + 12) = (**v7)(v7, (char *)v5 + 40);
  *(_QWORD *)v6 = a2;
  *((_QWORD *)v6 + 1) = a2;
  *((_QWORD *)v6 + 2) = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
