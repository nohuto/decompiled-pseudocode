/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1402D02F0
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405FBF80 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405FC2D0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspQueryQuotaLimits @ 0x1406B48F0 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 *v10; // rbp
  unsigned __int8 v11; // dl
  char v12; // al

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = MiLockWorkingSetShared((__int64)v10);
  *a1 = v10[20] << 12;
  *a2 = v10[16] << 12;
  *a3 = v10[17] << 12;
  *a4 = v10[14] << 12;
  *a5 = v10[15] << 12;
  v12 = *((_BYTE *)v10 + 184);
  if ( v12 < 0 )
  {
    *a6 |= 4u;
    v12 = *((_BYTE *)v10 + 184);
  }
  if ( (v12 & 0x40) != 0 )
    *a6 |= 1u;
  MiUnlockWorkingSetShared((__int64)v10, v11);
  return 0LL;
}
