/*
 * XREFs of sub_180055D08 @ 0x180055D08
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180055DA0 @ 0x180055DA0 (sub_180055DA0.c)
 *     sub_180055E44 @ 0x180055E44 (sub_180055E44.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055D08(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi

  pv = 0LL;
  v3 = sub_18006A18C(112LL, &unk_18019F848);
  if ( v3 )
  {
    v4 = sub_180055E44(v3);
    v5 = sub_180055DA0(v4, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(__int64, _DWORD *, PVOID *))v4)(v4, dword_18015BA30, &pv);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
