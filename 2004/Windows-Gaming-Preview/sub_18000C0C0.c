/*
 * XREFs of sub_18000C0C0 @ 0x18000C0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D8A8 @ 0x18000D8A8 (sub_18000D8A8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000C0C0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v6; // rbp
  _DWORD *v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  int v9; // edi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+28h] [rbp-30h]
  __m128i v13; // [rsp+30h] [rbp-28h]
  _DWORD *v14; // [rsp+60h] [rbp+8h]

  v4 = a2;
  *a3 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v6 = a1 + 104;
  v7 = (_DWORD *)(a1 + 104);
  v14 = (_DWORD *)(a1 + 104);
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v8->Ptr) >= 0 )
      ++LODWORD(v8->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 72) )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v13 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v4);
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
    if ( v12 )
    {
      v11 = v13.m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)v13.m128i_i64[0]);
      v7 = v14;
    }
    else
    {
      v11 = v13.m128i_i64[0];
      if ( v13.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13.m128i_i64[0] + 8LL))(v13.m128i_i64[0]);
    }
    v9 = 0;
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v6 )
  {
    if ( *v7 == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  if ( v9 >= 0 )
    return (unsigned int)sub_18000D8A8(&v11, a3);
  return (unsigned int)v9;
}
