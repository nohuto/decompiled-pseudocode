/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140B08434
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rdi
  __m128i v6[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[0].m128i_i32[0] = 2055;
  v6[2].m128i_i64[0] = a1;
  v6[9].m128i_i64[1] = (__int64)MiAddLoaderHalIoPte;
  v6[2].m128i_i64[1] = a2;
  v6[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v6[0].m128i_i8[7] = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables(v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6[0].m128i_u8[7]);
}
