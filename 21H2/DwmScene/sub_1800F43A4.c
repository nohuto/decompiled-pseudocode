/*
 * XREFs of sub_1800F43A4 @ 0x1800F43A4
 * Callers:
 *     sub_1800F16A4 @ 0x1800F16A4 (sub_1800F16A4.c)
 * Callees:
 *     sub_180020AC0 @ 0x180020AC0 (sub_180020AC0.c)
 *     sub_180067E98 @ 0x180067E98 (sub_180067E98.c)
 *     get_srw_lock @ 0x1800F2BE8 (get_srw_lock.c)
 *     sub_1800F3F50 @ 0x1800F3F50 (sub_1800F3F50.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800F43A4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  void **v5; // rsi
  _QWORD *v6; // rax
  const void **v7; // rax
  const void *v8; // r12
  signed __int64 v9; // rbx
  char *v10; // r14
  __int64 *v11; // rdx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = get_srw_lock(*a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 24) = a2[1];
  v5 = (void **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v6 = operator new(0x28uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 88) = v6;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = sub_180067E98(*a2);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242);
  v7 = (const void **)(*a2 + 80);
  if ( (const void **)(a1 + 32) != v7 )
  {
    v8 = *v7;
    v9 = *(_QWORD *)(*a2 + 88) - *(_QWORD *)(*a2 + 80);
    v10 = (char *)*v5;
    if ( v9 >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 2) )
    {
      sub_180020AC0((__int64 *)(a1 + 32), v9 >> 2);
      v10 = (char *)*v5;
    }
    memmove(v10, v8, v9);
    *(_QWORD *)(a1 + 40) = &v10[v9];
  }
  v11 = (__int64 *)(*a2 + 104);
  if ( (__int64 *)(a1 + 56) != v11 )
    sub_1800F3F50((__int64 *)(a1 + 56), *v11, *(_QWORD *)(*a2 + 112));
  return a1;
}
