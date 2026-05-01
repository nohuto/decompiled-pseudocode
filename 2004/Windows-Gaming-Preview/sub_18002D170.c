/*
 * XREFs of sub_18002D170 @ 0x18002D170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003022C @ 0x18003022C (sub_18003022C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002D170(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rsi
  char v7; // r12
  _DWORD *v8; // rbx
  int *v9; // r14
  __m128i v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v14; // [rsp+98h] [rbp+20h]

  v13 = a2;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v5 = 0;
  }
  else
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  v6 = 0LL;
  v7 = 0;
  if ( v5 < 0 )
    goto LABEL_30;
  v8 = (_DWORD *)(a1 + 160);
  v14 = (_DWORD *)(a1 + 160);
  v9 = (int *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 160) == 1 )
  {
    if ( *v9 >= 0 )
      ++*v9;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 168));
  }
  v5 = sub_18003022C(a1 + 72, &v13, &v12);
  if ( v5 >= 0 )
  {
    if ( v12 )
    {
      v11 = *(__m128i *)(v12 + 8);
      v7 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
      v6 = *(_QWORD *)(v12 + 8);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v11.m128i_i64[0]);
        v8 = v14;
      }
      else if ( v11.m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11.m128i_i64[0] + 8LL))(v11.m128i_i64[0]);
      }
      v5 = 0;
    }
    else
    {
      v5 = -2147483637;
    }
  }
  if ( v8 )
  {
    if ( *v8 == 1 )
      --*v9;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 168));
  }
  if ( v5 < 0 )
    goto LABEL_30;
  v5 = 0;
  if ( v7 )
  {
    *a3 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD *))(*(_QWORD *)qword_18005AE20 + 40LL))(
           qword_18005AE20,
           *(unsigned int *)(v6 + 4),
           &unk_180051428,
           a3);
    if ( v5 >= 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    {
      if ( *(_DWORD *)(v6 + 4) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005AE20 + 32LL))(qword_18005AE20);
      j_j__o_free(v6, 8LL);
    }
  }
  else
  {
    *a3 = v6;
  }
  if ( v5 < 0 )
LABEL_30:
    *a3 = 0LL;
  return (unsigned int)v5;
}
