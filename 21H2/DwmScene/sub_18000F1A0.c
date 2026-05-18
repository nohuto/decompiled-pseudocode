/*
 * XREFs of sub_18000F1A0 @ 0x18000F1A0
 * Callers:
 *     sub_18000F240 @ 0x18000F240 (sub_18000F240.c)
 * Callees:
 *     sub_18000F280 @ 0x18000F280 (sub_18000F280.c)
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000F1A0(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0xB8uLL, (const struct std::nothrow_t *)&unk_1801DE028);
  if ( v4 )
  {
    v6 = sub_18000F280(v4);
    v5 = sub_18001E0C4(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
