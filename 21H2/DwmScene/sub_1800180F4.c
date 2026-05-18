/*
 * XREFs of sub_1800180F4 @ 0x1800180F4
 * Callers:
 *     sub_1800181D4 @ 0x1800181D4 (sub_1800181D4.c)
 * Callees:
 *     sub_1800229F4 @ 0x1800229F4 (sub_1800229F4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800180F4(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_1801DE028);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &ISpectreSampler::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &off_180140EC0;
    if ( qword_18021F678 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18021F678 + 8LL))(qword_18021F678);
    *v5 = &off_180140EF0;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v6 = sub_1800229F4(v5, a2);
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
