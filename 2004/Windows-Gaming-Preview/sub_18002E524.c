/*
 * XREFs of sub_18002E524 @ 0x18002E524
 * Callers:
 *     sub_18002BA10 @ 0x18002BA10 (sub_18002BA10.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002E524(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
    v7[1] = *(_QWORD *)a4;
    v10 = (_QWORD *)(a4 + 8);
    v7[2] = 0LL;
    if ( v7 + 2 != (_QWORD *)(a4 + 8) )
    {
      v7[2] = *v10;
      *v10 = 0LL;
    }
    *((_DWORD *)v7 + 6) = *(_DWORD *)(a4 + 16);
    *v7 = off_18004D160;
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
