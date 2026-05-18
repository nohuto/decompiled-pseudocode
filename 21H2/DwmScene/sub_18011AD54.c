/*
 * XREFs of sub_18011AD54 @ 0x18011AD54
 * Callers:
 *     sub_18011AF58 @ 0x18011AF58 (sub_18011AF58.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall sub_18011AD54(__int64 a1, __int64 a2, __int64 a3)
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
