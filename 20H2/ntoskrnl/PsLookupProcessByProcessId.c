/*
 * XREFs of PsLookupProcessByProcessId @ 0x14063B130
 * Callers:
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     EtwpPsProvTraceProcess @ 0x14063252C (EtwpPsProvTraceProcess.c)
 *     PfpCopyEvent @ 0x14064B5D0 (PfpCopyEvent.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B309C (PspOneDirectionSecurityDomainCombine.c)
 *     PfpRpControlRequestUpdate @ 0x1406F33F4 (PfpRpControlRequestUpdate.c)
 *     PnpLogVetoInformation @ 0x14072E524 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x1407749C4 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x14078D278 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x140871578 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x140936C74 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409419E0 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DFAB4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14023F168 (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rbp
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v5 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = CurrentServerSilo;
    if ( (*(_DWORD *)(v5 + 1124) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v5, 0x746C6644u);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 1080) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 1080));
    if ( (*(_DWORD *)(v5 + 1124) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PEPROCESS)v5;
  return 0;
}
