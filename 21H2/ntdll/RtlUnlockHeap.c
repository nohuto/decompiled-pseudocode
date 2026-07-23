/*
 * XREFs of RtlUnlockHeap @ 0x18005FA30
 * Callers:
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005F5D0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18005F650 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1801093C0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18005FAC0 (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapUnlock @ 0x18005FBCC (RtlpHpHeapUnlock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapUnlockEvent @ 0x18010A8E0 (RtlpLogHeapUnlockEvent.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  _RTL_CRITICAL_SECTION *v2; // rcx
  _DWORD *SharedData; // rcx
  __int64 v4; // rcx

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapUnlock(HeapHandle, 0LL);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180166448)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v2 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 208);
      RtlLeaveCriticalSection(v2);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  if ( *(_BYTE *)v4 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(HeapHandle);
  }
  return 1;
}
