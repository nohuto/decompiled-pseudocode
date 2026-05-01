/*
 * XREFs of sub_18001E7F8 @ 0x18001E7F8
 * Callers:
 *     sub_18001CA70 @ 0x18001CA70 (sub_18001CA70.c)
 * Callees:
 *     sub_1800241C8 @ 0x1800241C8 (sub_1800241C8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18001E7F8(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // r8
  _QWORD *v9; // rbx
  int v10; // edi
  void *v11; // rax
  __int64 v12; // rbx

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v7 )
  {
    *v7 = &off_18004ADE8;
    v7[1] = 0LL;
    if ( v7 + 1 != a4 )
    {
      v7[1] = *a4;
      *a4 = 0LL;
    }
    v8 = a4 + 1;
    v7[2] = 0LL;
    if ( v7 + 2 != a4 + 1 )
    {
      v7[2] = *v8;
      *v8 = 0LL;
    }
    v9 = a4 + 2;
    v7[3] = 0LL;
    if ( v7 + 3 != v9 )
    {
      v7[3] = *v9;
      *v9 = 0LL;
    }
    *v7 = off_18004ADC8;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(
      v7 + 5,
      8uLL,
      1uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      (void (*)(void *))sub_1800081D0);
    *((_DWORD *)v7 + 8) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  if ( !v7 )
    return (unsigned int)-2147024882;
  v11 = operator new(0x158uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v12 = 0LL;
  if ( v11 )
    v12 = sub_1800241C8(
            v11,
            a1,
            L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>",
            0LL);
  if ( !v12 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v12 + 256) = v7;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 104LL))(v12 + 8);
  if ( v10 >= 0 )
  {
    *a2 = v12 + 176;
    v12 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 16LL))(v12 + 8);
  return (unsigned int)v10;
}
