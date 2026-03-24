/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x1402D24B4
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402AD0E8 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A2D8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _KPROCESS *Process; // rbp
  unsigned int Address; // edi
  unsigned __int8 v8; // r10
  _BYTE v10[48]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  Process = KeGetCurrentThread()->ApcState.Process;
  MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], a2, a3, a4);
  Address = (unsigned int)MiLocateAddress(a1);
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v8);
  return MiDecommitPages(a1, (unsigned int)((a1 + a2 - 1) >> 9) & 0xFFFFFFF8, (_DWORD)Process, Address, 0, (__int64)v10);
}
