/*
 * XREFs of KiCollectTriageDumpDataBlocks @ 0x140567630
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     KiIsAddressRangeValid @ 0x1403D7FD4 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KiMarkBugCheckRegions @ 0x1403EBAC8 (KiMarkBugCheckRegions.c)
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x140567DA0 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1405680F4 (KiSaveCurrentEtwTraceBuffer.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 */

unsigned __int8 __fastcall KiCollectTriageDumpDataBlocks(int a1, char a2)
{
  unsigned __int8 result; // al
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // [rsp+30h] [rbp-18h]

  if ( !a2 )
  {
    IoSaveBugCheckProgress(2);
    KiInvokeBugCheckAddTriageDumpDataCallbacks();
    IoSaveBugCheckProgress(5);
    KiSaveCurrentEtwTraceBuffer();
  }
  result = IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  switch ( a1 )
  {
    case 265:
      result = KiMarkBugCheckRegions(qword_140C2BD88, qword_140C2BD90, qword_140C2BD98, qword_140C2BDA0);
      if ( qword_140C2BDA0 == 47 )
      {
        v4 = qword_140C2BD98;
        result = MmIsAddressValidEx(qword_140C2BD98 + 1928);
        if ( result )
        {
          v5 = *(_QWORD *)(v4 + 1928);
          v6 = 4096LL;
LABEL_13:
          result = IoAddTriageDumpDataBlock(v5, (PVOID)v6);
        }
      }
      break;
    case 395:
      if ( qword_140C2BD88 == 396 )
      {
        if ( KdpBreakpointChangeCount )
          IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
        result = IoAddTriageDumpDataBlock((ULONG)&VslpTraceLog, (PVOID)0xA08);
        if ( VslpHotpatchLog )
        {
          IoAddTriageDumpDataBlock((ULONG)&VslpHotpatchLog, (PVOID)8);
          LODWORD(v5) = VslpHotpatchLog;
          v6 = 327688LL;
          goto LABEL_13;
        }
      }
      break;
    case 239:
      PopInternalAddToDumpFile(0LL, 0LL, 0LL);
      if ( CriticalProcessExceptionData )
      {
        IoAddTriageDumpDataBlock((ULONG)&CriticalProcessExceptionData, (PVOID)0x30);
        if ( (_WORD)xmmword_140C15CB0 )
          IoAddTriageDumpDataBlock(DWORD2(xmmword_140C15CB0), (PVOID)(unsigned __int16)xmmword_140C15CB0);
      }
      result = (unsigned __int8)wil_details_FeatureReporting_ReportUsageToService(
                                  (__int64)&Feature_User_Stack_Minidumps__private_reporting,
                                  0x1B8424Bu,
                                  0,
                                  0,
                                  (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
                                  0,
                                  v11);
      break;
  }
  if ( (_BYTE)KiKernelCetEnabled )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (__int64)CurrentThread->KernelShadowStackBase - 4096;
    v9 = (CurrentThread->KernelShadowStackLimit.AllFields & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v8 - v9 >= 0x1000 )
      v10 = 4096;
    else
      v10 = v8 - v9;
    if ( KiIsAddressRangeValid(v9, v10) )
      IoAddTriageDumpDataBlock(v9, (PVOID)v10);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetEnabled, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KiKernelCetAuditModeEnabled, (PVOID)1);
    IoAddTriageDumpDataBlock((ULONG)&KeKernelCetWrssEnabledScenarios, (PVOID)1);
    return IoAddTriageDumpDataBlock((ULONG)&KiKernelCetLogging, (PVOID)0x1C);
  }
  return result;
}
