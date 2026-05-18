/*
 * XREFs of sub_180017A4C @ 0x180017A4C
 * Callers:
 *     sub_180017B2C @ 0x180017B2C (sub_180017B2C.c)
 * Callees:
 *     sub_180012EA8 @ 0x180012EA8 (sub_180012EA8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180017A4C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_1801D7CD8);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &ISpectreMaterial::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &off_18013ABE0;
    if ( qword_180218548 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218548 + 8LL))(qword_180218548);
    *v5 = &off_18013AC58;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v6 = sub_180012EA8((__int64)v5, a2);
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
