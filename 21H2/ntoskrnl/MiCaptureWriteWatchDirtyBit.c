/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x14027C6CC
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x140369F3C (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     MiLockVadCore @ 0x14022DD18 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140230F50 (MiUnlockVadCore.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiGetVadMandatoryPageSize @ 0x140322CD0 (MiGetVadMandatoryPageSize.c)
 */

__int64 __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 LockedVadEvent; // rdi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbx

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
          LockedVadEvent = MiLocateLockedVadEvent(v4);
          VadMandatoryPageSize = MiGetVadMandatoryPageSize();
          v8 = ((v7 >> 12) - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)))
             / VadMandatoryPageSize;
          MiLockVadCore(v4);
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v8);
          return MiUnlockVadCore(v4, 2u);
        }
      }
    }
  }
  return result;
}
