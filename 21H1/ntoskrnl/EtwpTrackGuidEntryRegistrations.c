/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x14093CAC0
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x14093C634 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x1406D7120 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *i; // rsi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v15; // rbx
  _DWORD *v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _OWORD v26[3]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a2 + 408;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  v8 = a2 + 128;
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v9 = 0;
  while ( !*(_DWORD *)v8 || *(unsigned __int16 *)(v8 + 6) != *a1 )
  {
    ++v9;
    v8 += 32LL;
    if ( v9 >= 8 )
      goto LABEL_18;
  }
  for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
  {
    if ( a3 == 2 )
    {
      v11 = KeGetCurrentThread();
      v12 = (__int64)(i - 2);
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(i[2] + 408LL, 0LL);
      *(_QWORD *)(i[2] + 416LL) = KeGetCurrentThread();
    }
    else
    {
      v12 = (__int64)i;
    }
    if ( (*(_BYTE *)(v12 + 98) & 1) != 0 )
    {
      EtwpProviderArrivalCallback((__int64)a1, 0, v12);
    }
    else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 1112LL)) )
    {
      v13 = *(_QWORD *)(v12 + 80);
      memset(v26, 0, sizeof(v26));
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v13);
      v15 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(*(_KPROCESS **)(v12 + 80), 0LL, (__int64)v26, v16);
      EtwpProviderArrivalCallback((__int64)a1, 1, v12);
      KiUnstackDetachProcess((__int64)v26, 0LL, v17, v18);
      PsDetachSiloFromCurrentThread(v15);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 1112LL));
    }
    if ( a3 == 2 )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v12 + 32) + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
    }
  }
LABEL_18:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  return 0LL;
}
