/*
 * XREFs of EtwpProcessEnumCallback @ 0x140797740
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140797628 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KeGetPrcb @ 0x140228E30 (KeGetPrcb.c)
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x14061A45C (EtwpEnumerateAddressSpace.c)
 *     EtwpTraceProcessRundown @ 0x140797A1C (EtwpTraceProcessRundown.c)
 *     EtwpIsProcessZombie @ 0x140797B94 (EtwpIsProcessZombie.c)
 *     PsEnumProcessThreads @ 0x140797BC8 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x140797C50 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x140797C98 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x14093DA2C (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x14093E12C (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14093E754 (EtwpProcessPerfCtrsRundown.c)
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
  char v12; // bp
  _DWORD *v13; // r9
  int v14; // eax
  int v15; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r14d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  unsigned int v22; // r14d
  unsigned int j; // ebp
  __int64 v24; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v26; // rdx
  _OWORD v27[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(int **)a2;
  memset(v27, 0, sizeof(v27));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  if ( *(_QWORD *)(v2 + 1080) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v26 )
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
            v17 = *v5;
            if ( (*v5 & 1) != 0 )
            {
              EtwpTraceProcessRundown((PEPROCESS)BugCheckParameter1);
              v17 = *v5;
            }
            if ( (v17 & 2) != 0 )
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
            v18 = *v5;
            if ( (*v5 & 0xC004) != 0 )
            {
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
              v18 = *v5;
            }
            if ( (v18 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
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
            v14 = *v5;
            if ( (*v5 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              EtwpSysModuleRunDown(v2, 0LL);
              v14 = *v5;
            }
            if ( (v14 & 0xC004) != 0 )
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
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            v15 = *v5;
            if ( (*v5 & 8) != 0 )
            {
              EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
              v15 = *v5;
            }
            if ( (v15 & 1) != 0 )
              EtwpTraceProcessRundown((PEPROCESS)BugCheckParameter1);
          }
        }
        if ( v7 )
        {
          KiUnstackDetachProcess((__int64)v27, 0);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27, v13);
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
