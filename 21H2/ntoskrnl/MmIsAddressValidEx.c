/*
 * XREFs of MmIsAddressValidEx @ 0x14030C4F0
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B9758 (MiFreedUnusedPfnPagesWorker.c)
 *     KiIsAddressRangeValid @ 0x1403CA26C (KiIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x140502360 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405029D0 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x14050414C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405041C4 (IopGetMaxValidMemorySizeDown.c)
 *     IopGetMaxValidSectionSize @ 0x140504238 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140504280 (IopGetMaxValidSectionSizeDown.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140517B98 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x140518454 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x140518870 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x140518A6C (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x140518B40 (KiValidateComponentName.c)
 *     MmIsAddressValid @ 0x140536B70 (MmIsAddressValid.c)
 *     MmIsSpecialPoolAddress @ 0x1405374F0 (MmIsSpecialPoolAddress.c)
 *     MiAddPartitionToCrashDump @ 0x140537B50 (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1405382DC (MiAddUnicodeStringToCrashDump.c)
 *     MiDbgCopyMemory @ 0x1405458A4 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x1405466BC (MiDbgWriteCheck.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405489B4 (MiKernelWriteToExecutableMemory.c)
 *     RtlMarkHiberPhase @ 0x140592CE4 (RtlMarkHiberPhase.c)
 *     EtwpIsValidImageAddress @ 0x1405D193C (EtwpIsValidImageAddress.c)
 *     ViFreeTrackedPool @ 0x1409D5288 (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

char __fastcall MmIsAddressValidEx(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v10 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = 4LL;
    while ( 1 )
    {
      v3 = *(&v9 + v2--);
      v4 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v4 & 1) == 0 )
          return 0;
        if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v7 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
            v8 = v4 | 0x20;
            if ( (v7 & 0x20) == 0 )
              v8 = v4;
            LOBYTE(v4) = v8;
            if ( (v7 & 0x42) != 0 )
              LOBYTE(v4) = v8 | 0x42;
          }
        }
      }
      if ( (v4 & 1) == 0 )
        return 0;
      if ( (v4 & 0x80u) != 0LL )
        break;
      if ( !v2 )
        return 1;
    }
    if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL )
      return 1;
  }
  return 0;
}
