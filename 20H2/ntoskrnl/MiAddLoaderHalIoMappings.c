/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140A52D9C
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
