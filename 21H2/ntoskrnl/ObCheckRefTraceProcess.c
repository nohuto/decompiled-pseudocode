/*
 * XREFs of ObCheckRefTraceProcess @ 0x14066D3F8
 * Callers:
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 * Callees:
 *     PsGetProcessImageFileName @ 0x140238FD0 (PsGetProcessImageFileName.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

NTSTATUS __fastcall ObCheckRefTraceProcess(__int64 a1)
{
  NTSTATUS result; // eax
  const char *ProcessImageFileName; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  String1 = 0LL;
  if ( (ObpTraceFlags & 0x20) == 0 )
    return 0;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  if ( !DestinationString.Length )
    return 0;
  result = RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v5 = KeGetCurrentThread();
    if ( v5->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    RtlFreeUnicodeString(&String1);
    return 0;
  }
  return result;
}
