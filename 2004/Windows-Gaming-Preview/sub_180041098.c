/*
 * XREFs of sub_180041098 @ 0x180041098
 * Callers:
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003EBB8 @ 0x18003EBB8 (sub_18003EBB8.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180041098(__int64 a1, __int64 a2, _QWORD *a3)
{
  DWORD v4; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _WORD *v9; // rax
  _WORD *v10; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  _WORD *v14; // rsi
  int v15; // eax
  int v16; // r9d
  int v17; // edx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF
  _WORD *v20; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    sub_180003268(
      retaddr,
      910,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  v7 = *(_QWORD *)(a1 + 752);
  if ( !v7 )
  {
    v19 = 4096;
    v10 = 0LL;
    v14 = operator new(0x2000uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    if ( v14 )
    {
      j_j__o_free(0LL, v13);
      v10 = v14;
      v20 = v14;
      v15 = sub_18003EBB8(v4, v14, &v19);
      v11 = v15;
      if ( v15 >= 0 )
      {
        *a3 = v14;
        goto LABEL_15;
      }
      v16 = v15;
      v17 = 934;
    }
    else
    {
      v11 = -2147024882;
      v16 = -2147024882;
      v17 = 931;
    }
    sub_180003268(
      retaddr,
      v17,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v16);
    goto LABEL_18;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(
             v7,
             a2,
             0LL,
             &v19);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v19;
  if ( !is_mul_ok(v19, 2uLL) )
    v8 = -1LL;
  v9 = operator new(v8, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = v9;
  v20 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _WORD *, unsigned int *))(**(_QWORD **)(a1 + 752) + 32LL))(
            *(_QWORD *)(a1 + 752),
            v4,
            v9,
            &v19);
    if ( v11 < 0 )
      goto LABEL_18;
    *a3 = v10;
LABEL_15:
    j_j__o_free(0LL, v12);
    return 0LL;
  }
  v11 = -2147024882;
  sub_180003268(
    retaddr,
    919,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    -2147024882);
LABEL_18:
  j_j__o_free(v10, v12);
  return (unsigned int)v11;
}
