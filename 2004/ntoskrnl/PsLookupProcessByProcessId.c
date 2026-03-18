/*
 * XREFs of PsLookupProcessByProcessId @ 0x140666370
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B5B38 (PspOneDirectionSecurityDomainCombine.c)
 *     PfpCopyEvent @ 0x1406CE610 (PfpCopyEvent.c)
 *     PfpRpControlRequestUpdate @ 0x1406E99F0 (PfpRpControlRequestUpdate.c)
 *     PnpLogVetoInformation @ 0x140720534 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140765994 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x14077F968 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x14086BAF0 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x140930E44 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093BBB0 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1409D9A94 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027D828 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
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
