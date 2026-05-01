/*
 * XREFs of sub_18000ED0C @ 0x18000ED0C
 * Callers:
 *     sub_18000C520 @ 0x18000C520 (sub_18000C520.c)
 *     sub_18000CB60 @ 0x18000CB60 (sub_18000CB60.c)
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 * Callees:
 *     sub_180011B7C @ 0x180011B7C (sub_180011B7C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000ED0C(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( a2 )
  {
    v11 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))a2)(a2, &unk_180051240, &v11) < 0 )
    {
      v6 = (volatile signed __int32 *)operator new(8uLL, (const struct std::nothrow_t *)&unk_18005AF88);
      v7 = v6;
      if ( v6 )
      {
        *v6 = 1;
        *((_DWORD *)v6 + 1) = 0;
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
      {
        v8 = sub_180011B7C();
        if ( v8 >= 0 )
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, _DWORD *))(*(_QWORD *)qword_18005AE20 + 24LL))(
                 qword_18005AE20,
                 a2,
                 &xmmword_180050E58,
                 (_DWORD *)v7 + 1);
        if ( v8 < 0 )
        {
          if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
          {
            if ( *((_DWORD *)v7 + 1) )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005AE20 + 32LL))(qword_18005AE20);
            j_j__o_free(v7, 8LL);
          }
        }
        else
        {
          *(_QWORD *)a1 = v7;
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      else
      {
        v8 = -2147024882;
      }
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return (unsigned int)v8;
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  return v4;
}
