/*
 * XREFs of sub_18000C340 @ 0x18000C340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E028 @ 0x18000E028 (sub_18000E028.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000C340(__int64 a1, int a2, _DWORD *a3, _BYTE *a4)
{
  __int64 v5; // r12
  char *v7; // rdi
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  RTL_SRWLOCK *v10; // r14
  int v11; // esi
  __int64 v12; // rdx
  __int32 v13; // ecx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  char *v16; // rax
  unsigned int v17; // r12d
  char v18; // al
  char *v19; // rbx
  __m128i v21; // [rsp+30h] [rbp-58h]
  _DWORD *v22; // [rsp+90h] [rbp+8h]
  int v23; // [rsp+98h] [rbp+10h]

  v23 = a2;
  v5 = (__int64)a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (_DWORD *)(a1 + 104);
  v22 = (_DWORD *)(a1 + 104);
  v10 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
    a2 = v23;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = *(unsigned int *)(a1 + 72);
    v15 = 16 * v14;
    if ( !is_mul_ok(v14, 0x10uLL) )
      v15 = -1LL;
    v16 = (char *)operator new(v15, (const struct std::nothrow_t *)&unk_18005AF88);
    v7 = v16;
    if ( v16 )
    {
      for ( ; v14; --v14 )
      {
        *(_QWORD *)v16 = 0LL;
        v16[8] = 0;
        v16 += 16;
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 72) )
      {
        v11 = 0;
        do
        {
          v12 = 2LL * v17;
          v21 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v17);
          v18 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
          v7[16 * v17 + 8] = v18;
          if ( v18 )
          {
            *(_QWORD *)&v7[16 * v17] = v21.m128i_i64[0];
            _InterlockedIncrement((volatile signed __int32 *)v21.m128i_i64[0]);
          }
          else
          {
            v13 = v21.m128i_i32[0];
            *(_QWORD *)&v7[16 * v17] = v21.m128i_i64[0];
            if ( v21.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21.m128i_i64[0] + 8LL))(v21.m128i_i64[0]);
          }
          v8 = (unsigned int)(v8 + 1);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(a1 + 72) );
        v9 = v22;
      }
    }
    else
    {
      v11 = -2147024882;
    }
    v5 = (__int64)a3;
  }
  else
  {
    v11 = sub_18000E028(-1, *(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 72), a2, v5, (__int64)a4);
  }
  if ( v9 )
  {
    if ( *v9 == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 >= 0 )
  {
    if ( !(_DWORD)v8 )
      goto LABEL_35;
    v11 = sub_18000E028(v13, (_DWORD)v7, v8, v23, v5, (__int64)a4);
  }
  if ( (_DWORD)v8 )
  {
    v19 = v7;
    do
    {
      sub_18000EC88(v19);
      v19 += 16;
      --v8;
    }
    while ( v8 );
  }
LABEL_35:
  j_j__o_free(v7, v12);
  return (unsigned int)v11;
}
