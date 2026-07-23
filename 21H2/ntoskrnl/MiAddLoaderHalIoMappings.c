/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140A553A4
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  _QWORD v9[22]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v9, 0, sizeof(v9));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9[4] = a1;
  v9[5] = a2;
  LOWORD(v9[0]) = 2055;
  v9[3] = AnyMultiplexedVm;
  v9[19] = MiAddLoaderHalIoPte;
  BYTE6(v9[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v5, v6, v7);
  MiWalkPageTables((__int64)v9);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v9[0]));
}
