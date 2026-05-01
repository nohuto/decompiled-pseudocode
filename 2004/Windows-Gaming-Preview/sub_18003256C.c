/*
 * XREFs of sub_18003256C @ 0x18003256C
 * Callers:
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003256C(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // ebp
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned int i; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v16 = 0LL;
  v5 = operator new(0x90uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &off_18004C4C8;
    v5[2] = 1;
    v5[3] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v16 = v6;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 56LL))(a2, &v17);
    v8 = 0;
    if ( v7 >= 0 )
    {
      do
      {
        if ( !v17 || v8 >= 0x10 )
          break;
        v15 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v15);
        v9 = v15;
        if ( v7 >= 0 )
        {
          if ( v6[3] == 16 )
          {
            v7 = -2147024882;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            *(_QWORD *)&v6[2 * v6[3]++ + 4] = v9;
            v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 64LL))(a2, &v17);
            v9 = v15;
          }
        }
        if ( v9 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++v8;
      }
      while ( v7 >= 0 );
      if ( v7 >= 0 && *(_DWORD **)(a1 + 72) != v6 )
      {
        _InterlockedIncrement(v6 + 2);
        v10 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v6;
        if ( v10 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v10 = &off_18004C4C8;
            for ( i = 0; i < *(_DWORD *)(v10 + 12); ++i )
            {
              v12 = *(_QWORD *)(v10 + 8LL * i + 16);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
            j_j__o_free(v10, 144LL);
          }
        }
      }
    }
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v6 = &off_18004C4C8;
    if ( v6[3] )
    {
      do
      {
        v13 = *(_QWORD *)&v6[2 * v4 + 4];
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        ++v4;
      }
      while ( v4 < v6[3] );
    }
    j_j__o_free(v6, 144LL);
  }
  return (unsigned int)v7;
}
