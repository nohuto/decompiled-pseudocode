/*
 * XREFs of sub_18001EB78 @ 0x18001EB78
 * Callers:
 *     sub_18001D4E0 @ 0x18001D4E0 (sub_18001D4E0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001EB78(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rdi

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v7 )
  {
    *v7 = &off_18004ADE8;
    v7[1] = 0LL;
    if ( v7 + 1 != a4 )
    {
      v7[1] = *a4;
      *a4 = 0LL;
    }
    v9 = a4 + 1;
    v7[2] = 0LL;
    if ( v7 + 2 != v9 )
    {
      v7[2] = *v9;
      *v9 = 0LL;
    }
    *v7 = off_18004ADB8;
    *((_DWORD *)v7 + 6) = 0;
    `eh vector constructor iterator'(
      v7 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      (void (*)(void *))sub_1800081D0);
    *((_DWORD *)v7 + 6) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  return sub_18001F024(a1, a2, v8, v7);
}
