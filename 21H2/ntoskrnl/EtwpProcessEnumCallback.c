/*
 * XREFs of EtwpProcessEnumCallback @ 0x140814660
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x14081454C (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x1406F6CA4 (EtwpEnumerateAddressSpace.c)
 *     EtwpIsProcessZombie @ 0x140814978 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x1408149AC (EtwpTraceProcessRundown.c)
 *     PsEnumProcessThreads @ 0x140814B24 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x140814BA0 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x140814C74 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x1409EA130 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1409EA9A0 (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1409EAFC8 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  int *v5; // rdi
  char v7; // r13
  char v8; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // bp
  _DWORD *v13; // r9
  int v14; // eax
  int v15; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r15d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  unsigned int v22; // ebp
  unsigned int j; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v27; // rdx
  _OWORD v28[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(int **)a2;
  memset(v28, 0, sizeof(v28));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  if ( *(_QWORD *)(v2 + 1096) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v27 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(BugCheckParameter1) )
  {
    v12 = 1;
    if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v12;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v5 )
        {
          if ( v3 )
          {
            v14 = *v5;
            if ( (*v5 & 1) != 0 )
            {
              EtwpTraceProcessRundown(BugCheckParameter1);
              v14 = *v5;
            }
            if ( (v14 & 2) != 0 && (*(_BYTE *)(BugCheckParameter1 + 992) & 1) == 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v19 = KeNumberProcessors_0;
                for ( i = 0; i < v19; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            v15 = *v5;
            if ( (*v5 & 0xC004) != 0 )
            {
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
              v15 = *v5;
            }
            if ( (v15 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v3;
              EtwpSysModuleRunDown(v2, v10);
            }
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          }
          else
          {
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
            v17 = *v5;
            if ( (*v5 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              EtwpSysModuleRunDown(v2, 0LL);
              v17 = *v5;
            }
            if ( (v17 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
            if ( (v5[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
              EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
            if ( (*v5 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v22 = KeNumberProcessors_0;
                for ( j = 0; j < v22; ++j )
                {
                  v24 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v24 + 24), a2);
                  v25 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v25 + 13112), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            v18 = *v5;
            if ( (*v5 & 8) != 0 )
            {
              EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
              v18 = *v5;
            }
            if ( (v18 & 1) != 0 )
              EtwpTraceProcessRundown(BugCheckParameter1);
          }
        }
        if ( v7 )
        {
          KiUnstackDetachProcess((__int64)v28, 0LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28, v13);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    EtwpTraceProcessRundown(v11);
  return 0LL;
}
