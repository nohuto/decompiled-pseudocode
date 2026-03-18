/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140A42174
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4165C (MiInitializeDriverImages.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  __int16 v2; // dx
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  _QWORD v6[22]; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v7[304]; // [rsp+D0h] [rbp-148h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, 0x128uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[5] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  v6[3] = AnyMultiplexedVm;
  v6[21] = v7;
  LOWORD(v6[0]) = v2;
  v6[19] = MiCreatePteWsle;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE6(v6[0]) = v4;
  LODWORD(SharedVm) = MiWalkPageTables((__int64)v6);
  MiUnlockWorkingSetExclusive(v1, BYTE6(v6[0]));
  return (_DWORD)SharedVm != 4;
}
