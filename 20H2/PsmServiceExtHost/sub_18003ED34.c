/*
 * XREFs of sub_18003ED34 @ 0x18003ED34
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_18003EDB4 @ 0x18003EDB4 (sub_18003EDB4.c)
 *     sub_18003EE64 @ 0x18003EE64 (sub_18003EE64.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003ED34(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  int v6; // edi

  v4 = operator new(0x130uLL, (const struct std::nothrow_t *)&unk_1800967D8);
  if ( v4 )
    v5 = sub_18003EE64(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = sub_18003EDB4(v5, a1);
    if ( v6 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
