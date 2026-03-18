/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140A479D0
 * Callers:
 *     MiInitializeDriverImages @ 0x140A46EB8 (MiInitializeDriverImages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
  LODWORD(SharedVm) = MiWalkPageTables((__int16 *)v6);
  MiUnlockWorkingSetExclusive(v1, BYTE6(v6[0]));
  return (_DWORD)SharedVm != 4;
}
