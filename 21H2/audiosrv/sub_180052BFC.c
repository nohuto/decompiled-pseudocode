/*
 * XREFs of sub_180052BFC @ 0x180052BFC
 * Callers:
 *     sub_180052CE0 @ 0x180052CE0 (sub_180052CE0.c)
 * Callees:
 *     sub_180052C74 @ 0x180052C74 (sub_180052C74.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180052BFC(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi

  *a1 = 0LL;
  v2 = sub_18006A18C(24LL, &unk_18019F848);
  if ( v2 )
  {
    v3 = sub_180052C74(v2);
    v4 = (**(__int64 (__fastcall ***)(__int64, const IID *, _QWORD *))v3)(v3, &stru_18015B900, a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
