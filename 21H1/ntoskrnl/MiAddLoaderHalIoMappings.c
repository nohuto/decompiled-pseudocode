/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140A4CA1C
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rdi
  _QWORD v6[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[4] = a1;
  v6[5] = a2;
  LOWORD(v6[0]) = 2055;
  v6[3] = AnyMultiplexedVm;
  v6[19] = MiAddLoaderHalIoPte;
  BYTE6(v6[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int64)v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v6[0]));
}
