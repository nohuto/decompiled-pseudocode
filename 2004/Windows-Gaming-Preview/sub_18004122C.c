/*
 * XREFs of sub_18004122C @ 0x18004122C
 * Callers:
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003F04C @ 0x18003F04C (sub_18003F04C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004122C(__int64 a1, __int64 a2, _QWORD *a3)
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
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _WORD *v18; // rdi
  int v19; // edx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v21; // [rsp+70h] [rbp+18h] BYREF
  _WORD *v22; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    sub_180003268(
      retaddr,
      944,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  v7 = *(_QWORD *)(a1 + 752);
  if ( !v7 )
  {
    v21 = 260;
    v10 = 0LL;
    v14 = operator new(0x208uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    if ( v14 )
    {
      j_j__o_free(0LL, v13);
      v10 = v14;
      v22 = v14;
      v11 = sub_18003F04C(v4, v15, v14, &v21);
      if ( v11 == -2147024774 )
      {
        v16 = 2LL * v21;
        if ( !is_mul_ok(v21, 2uLL) )
          v16 = -1LL;
        v18 = operator new(v16, (const struct std::nothrow_t *)&unk_18005AF88);
        if ( v18 != v14 )
        {
          j_j__o_free(v14, v17);
          v10 = v18;
          v22 = v18;
        }
        if ( !v10 )
        {
          v19 = 974;
LABEL_25:
          v11 = -2147024882;
          goto LABEL_26;
        }
        v11 = sub_18003F04C(v4, v17, v10, &v21);
      }
      if ( v11 >= 0 )
      {
        *a3 = v10;
        goto LABEL_23;
      }
      v19 = 980;
LABEL_26:
      sub_180003268(
        retaddr,
        v19,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v11);
      goto LABEL_27;
    }
    v19 = 966;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             0LL,
             &v21);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v21;
  if ( !is_mul_ok(v21, 2uLL) )
    v8 = -1LL;
  v9 = operator new(v8, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = v9;
  v22 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _WORD *, unsigned int *))(**(_QWORD **)(a1 + 752) + 40LL))(
            *(_QWORD *)(a1 + 752),
            v4,
            v9,
            &v21);
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
    953,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    -2147024882);
LABEL_27:
  j_j__o_free(v10, v12);
  return (unsigned int)v11;
}
