/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x14059368C
 * Callers:
 *     MmGetDumpRange @ 0x140593388 (MmGetDumpRange.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x140A678E0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD v4[2]; // [rsp+20h] [rbp-79h] BYREF
  __m128i v5[11]; // [rsp+30h] [rbp-69h] BYREF

  memset(v5, 0, sizeof(v5));
  v4[1] = 0LL;
  v5[9].m128i_i64[1] = (__int64)MiCrashdumpRemovePte;
  v5[10].m128i_i64[1] = (__int64)v4;
  v5[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  v4[0] = a1;
  if ( !(_DWORD)InitializationPhase
    || (KiBugCheckActive & 3) != 0
    || (struct _KTHREAD *)qword_140C52A08 == KeGetCurrentThread() )
  {
    v5[0].m128i_i32[0] = 67584;
    return MiWalkPageTables(v5);
  }
  else
  {
    v5[1].m128i_i64[1] = (__int64)MiGetAnyMultiplexedVm(0);
    v2 = v5[1].m128i_i64[1];
    v5[0].m128i_i32[0] = 6;
    v5[0].m128i_i8[7] = MiLockWorkingSetShared(v5[1].m128i_i64[1]);
    MiWalkPageTables(v5);
    return MiUnlockWorkingSetShared(v2, v5[0].m128i_u8[7]);
  }
}
