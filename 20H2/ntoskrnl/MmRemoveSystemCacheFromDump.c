/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x14053708C
 * Callers:
 *     MmGetDumpRange @ 0x140536C70 (MmGetDumpRange.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1409B05A4 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rbx
  LONG *v4; // rax
  LONG *SharedVm; // rax
  _QWORD v6[22]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[5] = -1LL;
  v6[19] = MiCrashdumpRemovePte;
  v6[21] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v3 = (__int64)AnyMultiplexedVm;
  v6[3] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_140C4E588 == KeGetCurrentThread() )
  {
    BYTE6(v6[0]) = 17;
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(SharedVm) )
      KeBugCheckEx(0x1Au, 0x50000uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    LOWORD(v6[0]) = 6;
    BYTE6(v6[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  MiWalkPageTables((__int64)v6);
  if ( BYTE6(v6[0]) == 17 )
  {
    MiCheckProcessShadow(v3, 2u);
    v4 = MiGetSharedVm(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  }
  else
  {
    MiUnlockWorkingSetShared(v3, BYTE6(v6[0]));
  }
}
