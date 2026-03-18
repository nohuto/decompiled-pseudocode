/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1405336BC
 * Callers:
 *     MmGetDumpRange @ 0x1405332A0 (MmGetDumpRange.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1409AA634 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
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
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_140C4E508 == KeGetCurrentThread() )
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
  MiWalkPageTables((__int16 *)v6);
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
