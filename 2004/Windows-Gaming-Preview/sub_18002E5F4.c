/*
 * XREFs of sub_18002E5F4 @ 0x18002E5F4
 * Callers:
 *     sub_18002C390 @ 0x18002C390 (sub_18002C390.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002E5F4(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v9 = v7;
  if ( v7 )
  {
    *v7 = &off_18004ADE8;
    v7[1] = *a4;
    v10 = a4 + 1;
    v7[2] = 0LL;
    if ( v7 + 2 != a4 + 1 )
    {
      v7[2] = *v10;
      *v10 = 0LL;
    }
    v7[3] = a4[2];
    *v7 = off_18004D140;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(
      v7 + 5,
      8uLL,
      1uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      (void (*)(void *))sub_1800081D0);
    *((_DWORD *)v9 + 8) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  return sub_180031038(a1, a2, v8, v9);
}
