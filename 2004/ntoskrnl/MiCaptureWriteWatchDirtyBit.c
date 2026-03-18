/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x14024B47C
 * Callers:
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiMakeCombineCandidateClean @ 0x140367AFC (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 * Callees:
 *     MiGetVadMandatoryPageSize @ 0x140221B70 (MiGetVadMandatoryPageSize.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     MiLockVadCore @ 0x14033C8DC (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140340CF0 (MiUnlockVadCore.c)
 */

__int64 __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 LockedVadEvent; // rdi
  __int64 v6; // rcx
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx

  result = *(unsigned int *)(a1 + 1124);
  v4 = a3;
  if ( (result & 0x20) == 0 )
  {
    if ( a3 || (result = MiLocateAddress(a2), (v4 = result) != 0) )
    {
      result = *(unsigned int *)(v4 + 48);
      if ( (result & 4) == 0 )
      {
        result &= 0x300000u;
        if ( (_DWORD)result == 3145728 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v4, 4LL);
          VadMandatoryPageSize = MiGetVadMandatoryPageSize(v6);
          v9 = (v8 >> 12) - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32));
          v10 = v9 / VadMandatoryPageSize;
          MiLockVadCore(v4, v9 % VadMandatoryPageSize);
          LOBYTE(v11) = 2;
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v10);
          return MiUnlockVadCore(v4, v11);
        }
      }
    }
  }
  return result;
}
