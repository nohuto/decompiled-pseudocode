/*
 * XREFs of sub_18001E51C @ 0x18001E51C
 * Callers:
 *     sub_18001B2D8 @ 0x18001B2D8 (sub_18001B2D8.c)
 * Callees:
 *     sub_180026660 @ 0x180026660 (sub_180026660.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E51C(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v2 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    ((void (*)(void))sub_180026660)();
  }
  *a1 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v4 = v3;
  if ( v3 )
  {
    v5 = qword_18005ADB0;
    v3[4] = 1LL;
    *v3 = off_18004AC18;
    v3[1] = off_18004ABF8;
    v3[2] = off_18004ABD8;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *v4 = off_18004AD30;
    v4[5] = 0LL;
    v4[1] = off_18004AD10;
    v4[2] = off_18004ACF0;
    InitializeSRWLock((PSRWLOCK)v4 + 6);
    InitializeSRWLock((PSRWLOCK)v4 + 7);
    v6 = v4[4];
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v4 + 4, v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_11:
    *a1 = v4;
    sub_180026660(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
