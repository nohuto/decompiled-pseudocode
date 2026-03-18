/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x1403303B4
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14035A4FC (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405988A8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  __int64 **Address; // rdi
  unsigned __int8 v6; // r10
  _QWORD v8[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  Process = KeGetCurrentThread()->ApcState.Process;
  MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  Address = MiLocateAddress(a1);
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v6);
  return MiDecommitPages(
           a1,
           (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (__int64)Process,
           (__int64)Address,
           0,
           v8);
}
