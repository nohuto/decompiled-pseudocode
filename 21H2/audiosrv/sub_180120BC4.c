/*
 * XREFs of sub_180120BC4 @ 0x180120BC4
 * Callers:
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180120E34 @ 0x180120E34 (sub_180120E34.c)
 *     sub_180121318 @ 0x180121318 (sub_180121318.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180120BC4(_QWORD *a1, _QWORD *a2, unsigned int *a3, _QWORD *a4)
{
  LPVOID v8; // rax
  int v9; // edi
  __int64 v10; // rbx

  *a1 = 0LL;
  v8 = sub_18006A18C(0x60uLL);
  if ( v8 )
  {
    v10 = sub_180120E34(v8);
    v9 = sub_180121318(v10, *a2, *a3, *a4, 0LL);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(__int64, const IID *, _QWORD *))v10)(v10, &stru_18015B940, a1);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
