/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x140538DCC
 * Callers:
 *     MmGetDumpRange @ 0x1405389B0 (MmGetDumpRange.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1409AE3D4 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v6; // rbx
  LONG *v7; // rax
  LONG *SharedVm; // rax
  _QWORD v9[22]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[5] = -1LL;
  v9[19] = MiCrashdumpRemovePte;
  v9[21] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v6 = (__int64)AnyMultiplexedVm;
  v9[3] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_140C4E748 == KeGetCurrentThread() )
  {
    BYTE6(v9[0]) = 17;
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(SharedVm) )
      KeBugCheckEx(0x1Au, 0x50000uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    LOWORD(v9[0]) = 6;
    BYTE6(v9[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v3, v4, v5);
  }
  MiWalkPageTables((__int64)v9);
  if ( BYTE6(v9[0]) == 17 )
  {
    MiCheckProcessShadow(v6, 2u);
    v7 = MiGetSharedVm(v6);
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  }
  else
  {
    MiUnlockWorkingSetShared(v6, BYTE6(v9[0]));
  }
}
