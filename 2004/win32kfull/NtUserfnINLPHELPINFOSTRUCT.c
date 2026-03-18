/*
 * XREFs of NtUserfnINLPHELPINFOSTRUCT @ 0x1C0206020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPHELPINFOSTRUCT(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v6; // rbx
  __m128i v8; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v8 = *(__m128i *)a4;
  v9 = *(_OWORD *)(a4 + 16);
  v10 = *(_QWORD *)(a4 + 32);
  if ( _mm_cvtsi128_si32(v8) == 40 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __m128i *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v8,
             a5);
  v6 = 0LL;
  UserSetLastError(87LL, MmUserProbeAddress, a3);
  return v6;
}
