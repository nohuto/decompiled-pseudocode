/*
 * XREFs of sub_18001EC54 @ 0x18001EC54
 * Callers:
 *     sub_18001DDD8 @ 0x18001DDD8 (sub_18001DDD8.c)
 *     sub_18001E1D8 @ 0x18001E1D8 (sub_18001E1D8.c)
 * Callees:
 *     sub_1800261BC @ 0x1800261BC (sub_1800261BC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001EC54(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // edi
  __int64 v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v5 = v4;
  if ( v4 )
  {
    v7 = qword_18005ADB0;
    v4[3] = 1;
    *(_QWORD *)v4 = off_18004ADF8;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = off_18004AE18;
    v6 = sub_1800261BC(v5, *a2);
    if ( v6 >= 0 )
    {
      _InterlockedIncrement(v5 + 3);
      *a1 = v5;
      v6 = 0;
    }
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
