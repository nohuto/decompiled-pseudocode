/*
 * XREFs of sub_18002CE7C @ 0x18002CE7C
 * Callers:
 *     sub_180028944 @ 0x180028944 (sub_180028944.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002CE7C(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v5 )
  {
    *v5 = &off_180048EE8;
    sub_180011A50(v5 + 1);
    v6 = qword_18005ADB0;
    *v5 = off_18004B688;
    v5[1] = off_18004B640;
    *((_DWORD *)v5 + 15) = 1;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v5[8] = 0LL;
    if ( v5 + 8 != a2 )
    {
      v5[8] = *a2;
      *a2 = 0LL;
    }
    v2 = v5;
    v5[9] = a2[1];
    *v5 = off_18004C2E8;
    v5[1] = off_18004B640;
  }
  result = a1;
  *a1 = v2;
  return result;
}
