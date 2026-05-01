/*
 * XREFs of sub_1800308CC @ 0x1800308CC
 * Callers:
 *     sub_18002D560 @ 0x18002D560 (sub_18002D560.c)
 * Callees:
 *     sub_180011B7C @ 0x180011B7C (sub_180011B7C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800308CC(__int64 a1, __int64 *a2, int *a3)
{
  __int64 v5; // r14
  int v6; // esi
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rax
  void *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a2;
  if ( !*a2 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_21;
  }
  v13 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))v5)(v5, &unk_180051240, &v13) >= 0 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_2;
  }
  v8 = (volatile signed __int32 *)operator new(8uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = v8;
  if ( v8 )
  {
    *v8 = 1;
    *((_DWORD *)v8 + 1) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v6 = sub_180011B7C(v9);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, void *, _DWORD *))(*(_QWORD *)qword_18005AE20 + 24LL))(
             qword_18005AE20,
             v5,
             &unk_180051428,
             (_DWORD *)v10 + 1);
    if ( v6 < 0 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        if ( *((_DWORD *)v10 + 1) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005AE20 + 32LL))(qword_18005AE20);
        j_j__o_free(v10, 8LL);
      }
    }
    else
    {
      *(_QWORD *)a1 = v10;
      *(_BYTE *)(a1 + 8) = 1;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_21:
  *a3 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
