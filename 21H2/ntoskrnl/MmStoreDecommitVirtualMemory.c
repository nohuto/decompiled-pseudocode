/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x140250884
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14022B444 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A508 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rbp
  int Address; // eax
  char v6; // r10
  __int64 v7; // rdx
  int v8; // edi
  _BYTE v10[48]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  Process = KeGetCurrentThread()->ApcState.Process;
  MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  Address = MiLocateAddress(a1);
  LOBYTE(v7) = v6;
  v8 = Address;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v7);
  return MiDecommitPages(
           a1,
           (unsigned int)((unsigned __int64)(a1 + a2 - 1) >> 9) & 0xFFFFFFF8,
           (_DWORD)Process,
           v8,
           0,
           (__int64)v10);
}
