/*
 * XREFs of sub_180040E80 @ 0x180040E80
 * Callers:
 *     sub_18003F9D0 @ 0x18003F9D0 (sub_18003F9D0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003EE0C @ 0x18003EE0C (sub_18003EE0C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180040E80(__int64 a1, __int64 a2, _QWORD *a3)
{
  DWORD v4; // ebp
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _WORD *v9; // rax
  _WORD *v10; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  _WORD *v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rdi
  int v18; // edx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF
  _WORD *v21; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    sub_180003268(
      retaddr,
      868,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  v7 = *(_QWORD *)(a1 + 752);
  if ( !v7 )
  {
    v20 = 260;
    v10 = 0LL;
    v14 = operator new(0x208uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    if ( v14 )
    {
      j_j__o_free(0LL, v13);
      v10 = v14;
      v21 = v14;
      v11 = sub_18003EE0C(v4, v14, &v20, 0LL, 0LL);
      if ( v11 == -2147024774 )
      {
        v15 = 2LL * v20;
        if ( !is_mul_ok(v20, 2uLL) )
          v15 = -1LL;
        v17 = operator new(v15, (const struct std::nothrow_t *)&unk_18005AF88);
        if ( v17 != v14 )
        {
          j_j__o_free(v14, v16);
          v10 = v17;
          v21 = v17;
        }
        if ( !v10 )
        {
          v18 = 896;
LABEL_25:
          v11 = -2147024882;
          goto LABEL_26;
        }
        v11 = sub_18003EE0C(v4, v10, &v20, 0LL, 0LL);
      }
      if ( v11 >= 0 )
      {
        *a3 = v10;
        goto LABEL_23;
      }
      v18 = 900;
LABEL_26:
      sub_180003268(
        retaddr,
        v18,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v11);
      goto LABEL_27;
    }
    v18 = 890;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
             v7,
             a2,
             0LL,
             &v20);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v20;
  if ( !is_mul_ok(v20, 2uLL) )
    v8 = -1LL;
  v9 = operator new(v8, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = v9;
  v21 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _WORD *, unsigned int *))(**(_QWORD **)(a1 + 752) + 24LL))(
            *(_QWORD *)(a1 + 752),
            v4,
            v9,
            &v20);
    if ( v11 < 0 )
      goto LABEL_27;
    *a3 = v10;
LABEL_23:
    j_j__o_free(0LL, v12);
    return 0LL;
  }
  v11 = -2147024882;
  sub_180003268(
    retaddr,
    877,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    -2147024882);
LABEL_27:
  j_j__o_free(v10, v12);
  return (unsigned int)v11;
}
