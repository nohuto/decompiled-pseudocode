/*
 * XREFs of sub_1800188A0 @ 0x1800188A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019400 @ 0x180019400 (sub_180019400.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800188A0(_DWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rbp
  _QWORD *v10; // rcx

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v7 = v6;
  if ( v6 )
  {
    v8 = qword_18005ADB0;
    v6[4] = 1LL;
    *v6 = off_180049AB8;
    v6[1] = off_180049A98;
    v6[2] = off_180049A60;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *v7 = off_180049B88;
    v7[1] = off_180049B68;
    v7[2] = off_180049B30;
    v7[5] = a1;
    if ( a1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    *((_DWORD *)v7 + 12) = 0;
    *((_DWORD *)v7 + 13) = a1[22];
  }
  else
  {
    v5 = -2147024882;
    v7 = 0LL;
  }
  v9 = 0LL;
  v10 = v7;
  if ( v5 >= 0 )
  {
    v4 = v7;
    v10 = 0LL;
    v9 = v7;
  }
  if ( v10 )
    ((void (*)(void))sub_180019400)();
  if ( v5 >= 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a2 = v4;
  }
  if ( v9 )
    sub_180019400(v4);
  return (unsigned int)v5;
}
