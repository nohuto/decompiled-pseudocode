/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x14025B15C
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x1402C8854 (MiMakeVaRangeNoAccess.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x140369D8C (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 * Callees:
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiLockVadCore @ 0x1402AF9B8 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x1402B2DA0 (MiUnlockVadCore.c)
 *     MiLocateLockedVadEvent @ 0x1402FE3CC (MiLocateLockedVadEvent.c)
 *     MiGetVadMandatoryPageSize @ 0x140317F80 (MiGetVadMandatoryPageSize.c)
 */

__int64 __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 LockedVadEvent; // rdi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx

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
          VadMandatoryPageSize = MiGetVadMandatoryPageSize();
          v8 = (v7 >> 12) - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32));
          v9 = v8 / VadMandatoryPageSize;
          MiLockVadCore(v4, v8 % VadMandatoryPageSize);
          LOBYTE(v10) = 2;
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v9);
          return MiUnlockVadCore(v4, v10);
        }
      }
    }
  }
  return result;
}
