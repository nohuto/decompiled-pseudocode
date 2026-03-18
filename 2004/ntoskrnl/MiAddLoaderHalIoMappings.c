/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140A5271C
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
  MiWalkPageTables((__int16 *)v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v6[0]));
}
