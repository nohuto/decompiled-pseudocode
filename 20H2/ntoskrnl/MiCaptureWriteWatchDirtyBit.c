/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1402309EC
 * Callers:
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiMakeCombineCandidateClean @ 0x140369ADC (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 * Callees:
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiGetVadMandatoryPageSize @ 0x14022FFE0 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     MiLockVadCore @ 0x14030F5BC (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140311AA0 (MiUnlockVadCore.c)
 */

__int64 **__fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 **a3)
{
  __int64 **result; // rax
  __int64 **v4; // rsi
  __int64 LockedVadEvent; // rdi
  __int64 v6; // rcx
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx

  result = (__int64 **)*(unsigned int *)(a1 + 1124);
  v4 = a3;
  if ( ((unsigned __int8)result & 0x20) == 0 )
  {
    if ( a3 || (result = MiLocateAddress(a2), (v4 = result) != 0LL) )
    {
      result = (__int64 **)*((unsigned int *)v4 + 12);
      if ( ((unsigned __int8)result & 4) == 0 )
      {
        result = (__int64 **)((unsigned int)result & 0x300000);
        if ( (_DWORD)result == 3145728 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v4, 4LL);
          VadMandatoryPageSize = MiGetVadMandatoryPageSize(v6);
          v9 = (v8 >> 12) - (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32));
          v10 = v9 / VadMandatoryPageSize;
          MiLockVadCore(v4, v9 % VadMandatoryPageSize);
          LOBYTE(v11) = 2;
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v10);
          return (__int64 **)MiUnlockVadCore(v4, v11);
        }
      }
    }
  }
  return result;
}
