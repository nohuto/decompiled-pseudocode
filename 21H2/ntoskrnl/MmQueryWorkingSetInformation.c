/*
 * XREFs of MmQueryWorkingSetInformation @ 0x14025C750
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E57C (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E980 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspQueryQuotaLimits @ 0x14062027C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 *v10; // rbp
  unsigned __int8 v11; // dl
  char v12; // al

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v11 = MiLockWorkingSetShared((__int64)v10, (__int64)a2, (__int64)a3, a4);
  *a1 = v10[20] << 12;
  *a2 = v10[15] << 12;
  *a3 = v10[16] << 12;
  *(_QWORD *)a4 = v10[14] << 12;
  *a5 = v10[19] << 12;
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
