/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x1409F5570
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x1409F5378 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     EtwpGetEnableInfoIndex @ 0x1402E10FC (EtwpGetEnableInfoIndex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x140758DB8 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(int *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  _QWORD *i; // rsi
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v13; // rbx
  _DWORD *v14; // r9
  int v16; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v17[3]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = a2 + 408;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  if ( EtwpGetEnableInfoIndex(a2, *a1, &v16) )
  {
    for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
    {
      if ( a3 == 2 )
      {
        v9 = KeGetCurrentThread();
        v10 = (__int64)(i - 2);
        --v9->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(i[2] + 408LL, 0LL);
        *(_QWORD *)(i[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v10 = (__int64)i;
      }
      if ( (*(_BYTE *)(v10 + 98) & 1) != 0 )
      {
        EtwpProviderArrivalCallback((__int64)a1, 0, v10);
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v10 + 80) + 1112LL)) )
      {
        v11 = *(_QWORD *)(v10 + 80);
        memset(v17, 0, sizeof(v17));
        ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v11);
        v13 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KiStackAttachProcess(*(_KPROCESS **)(v10 + 80), 0LL, (__int64)v17, v14);
        EtwpProviderArrivalCallback((__int64)a1, 1, v10);
        KiUnstackDetachProcess((__int64)v17, 0LL);
        PsDetachSiloFromCurrentThread(v13);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v10 + 80) + 1112LL));
      }
      if ( a3 == 2 )
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v10 + 32) + 408LL, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
  }
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
