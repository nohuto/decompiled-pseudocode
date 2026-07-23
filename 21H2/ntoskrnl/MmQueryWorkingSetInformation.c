/*
 * XREFs of MmQueryWorkingSetInformation @ 0x14027DCC0
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E7AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059EBB0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspQueryQuotaLimits @ 0x140689EEC (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 *v10; // rbp
  __int64 v11; // rdx
  char v12; // al

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  LOBYTE(v11) = MiLockWorkingSetShared(v10);
  *a1 = v10[20] << 12;
  *a2 = v10[15] << 12;
  *a3 = v10[16] << 12;
  *a4 = v10[14] << 12;
  *a5 = v10[19] << 12;
  v12 = *((_BYTE *)v10 + 184);
  if ( v12 < 0 )
  {
    *a6 |= 4u;
    v12 = *((_BYTE *)v10 + 184);
  }
  if ( (v12 & 0x40) != 0 )
    *a6 |= 1u;
  MiUnlockWorkingSetShared(v10, v11);
  return 0LL;
}
