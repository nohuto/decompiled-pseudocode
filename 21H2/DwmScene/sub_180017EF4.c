/*
 * XREFs of sub_180017EF4 @ 0x180017EF4
 * Callers:
 *     sub_180017FD4 @ 0x180017FD4 (sub_180017FD4.c)
 * Callees:
 *     sub_180012F88 @ 0x180012F88 (sub_180012F88.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180017EF4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_1801DE028);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &ISpectreMaterial::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &off_180140D70;
    if ( qword_18021F678 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18021F678 + 8LL))(qword_18021F678);
    *v5 = &off_180140DE8;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v6 = sub_180012F88((__int64)v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
