/*
 * XREFs of PsLookupProcessByProcessId @ 0x1405E0070
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1405D1AC8 (PfpRpControlRequestUpdate.c)
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14064CB58 (PspOneDirectionSecurityDomainCombine.c)
 *     PfpCopyEvent @ 0x140653FB0 (PfpCopyEvent.c)
 *     PnpLogVetoInformation @ 0x14071E794 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140763F74 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x140780344 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x14086A7A0 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x14092FB94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093A910 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1409D9A34 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140204518 (PsIsProcessInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  __int64 v10; // rbp
  bool v11; // zf
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v6 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v6 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (__int64)CurrentServerSilo;
    if ( (*(_DWORD *)(v6 + 1124) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v6, (__int64)CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v6, 0x746C6644u);
      v6 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v13, 0);
    if ( (*(_QWORD *)(v6 + 1080) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v6 + 1080);
    if ( (*(_DWORD *)(v6 + 1124) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v6, v10) )
      goto LABEL_14;
  }
LABEL_4:
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4, v7, v8);
  if ( !v6 )
    return -1073741813;
  *v2 = (PEPROCESS)v6;
  return 0;
}
