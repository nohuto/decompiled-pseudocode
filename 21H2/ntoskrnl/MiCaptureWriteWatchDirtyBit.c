/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1402358D4
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x14033A5B0 (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     MiGetVadMandatoryPageSize @ 0x14028ECC8 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     MiUnlockVadCore @ 0x1403106A4 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1403106E0 (MiLockVadCore.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 Address; // rsi
  __int64 LockedVadEvent; // rdi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v7; // rt2
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  Address = a3;
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) == 0 )
  {
    if ( a3
      || (ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                          + 284)),
          Address = MiLocateAddress(a2),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                            + 284)),
          Address) )
    {
      if ( (*(_DWORD *)(Address + 48) & 0x600000) == 0x600000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(Address, 4LL);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize();
        v7 = ((a2 >> 12)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)))
           % VadMandatoryPageSize;
        v8 = ((a2 >> 12)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)))
           / VadMandatoryPageSize;
        MiLockVadCore(Address, v7);
        LOBYTE(v9) = 2;
        _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v8);
        MiUnlockVadCore(Address, v9);
      }
    }
  }
}
