/*
 * XREFs of EtwpProcessEnumCallback @ 0x140780460
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140780344 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x1406389A4 (EtwpEnumerateAddressSpace.c)
 *     EtwpTraceProcessRundown @ 0x14078073C (EtwpTraceProcessRundown.c)
 *     EtwpIsProcessZombie @ 0x1407808B4 (EtwpIsProcessZombie.c)
 *     PsEnumProcessThreads @ 0x1407808E8 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x140780970 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x1407809B8 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x140939188 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x14093988C (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140939EB4 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v2; // r15
  char v3; // r12
  int *v5; // rdi
  char v7; // r13
  char v8; // r14
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  struct _KPROCESS *v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  char v14; // bp
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r14d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  unsigned int v23; // r14d
  unsigned int j; // ebp
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
  if ( *(_QWORD *)(v2 + 1112) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v27 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(BugCheckParameter1) )
  {
    v14 = 1;
    if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v14;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v5 )
        {
          if ( v3 )
          {
            v18 = *v5;
            if ( (*v5 & 1) != 0 )
            {
              EtwpTraceProcessRundown((PEPROCESS)BugCheckParameter1);
              v18 = *v5;
            }
            if ( (v18 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v20 = KeNumberProcessors_0;
                for ( i = 0; i < v20; ++i )
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
            v19 = *v5;
            if ( (*v5 & 0xC004) != 0 )
            {
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
              v19 = *v5;
            }
            if ( (v19 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
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
            v15 = *v5;
            if ( (*v5 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              EtwpSysModuleRunDown(v2, 0LL);
              v15 = *v5;
            }
            if ( (v15 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
            if ( (v5[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
              EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
            if ( (*v5 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v23 = KeNumberProcessors_0;
                for ( j = 0; j < v23; ++j )
                {
                  v25 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v25 + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            v16 = *v5;
            if ( (*v5 & 8) != 0 )
            {
              EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
              v16 = *v5;
            }
            if ( (v16 & 1) != 0 )
              EtwpTraceProcessRundown((PEPROCESS)BugCheckParameter1);
          }
        }
        if ( v7 )
        {
          KiUnstackDetachProcess((__int64)v28, 0LL, v12, v13);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28, v13);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v14 = 0;
    goto LABEL_7;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    EtwpTraceProcessRundown(v11);
  return 0LL;
}
