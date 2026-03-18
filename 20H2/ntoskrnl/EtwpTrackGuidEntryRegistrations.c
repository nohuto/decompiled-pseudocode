/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x140943AFC
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x140943670 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x1406AFD98 (EtwpProviderArrivalCallback.c)
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
  _OWORD v17[3]; // [rsp+20h] [rbp-78h] BYREF

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
      memset(v17, 0, sizeof(v17));
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v13);
      v15 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(*(_KPROCESS **)(v12 + 80), 0, (__int64)v17);
      EtwpProviderArrivalCallback((__int64)a1, 1, v12);
      KiUnstackDetachProcess((__int64)v17, 0);
      PsDetachSiloFromCurrentThread(v15);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 1112LL));
    }
    if ( a3 == 2 )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v12 + 32) + 408LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
LABEL_18:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
