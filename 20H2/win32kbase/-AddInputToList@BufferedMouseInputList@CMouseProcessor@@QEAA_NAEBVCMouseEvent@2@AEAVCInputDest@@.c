/*
 * XREFs of ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01B92EC
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::BufferedMouseInputList::AddInputToList(
        CMouseProcessor::BufferedMouseInputList *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4,
        unsigned __int64 *a5)
{
  CInputThread *v5; // rsi
  unsigned int CurrentThreadId; // eax
  int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  CMouseProcessor::BufferedMouseInputList *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  bool result; // al
  CMouseProcessor::BufferedMouseInputList **v23; // rcx

  v5 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v11 = *((_DWORD *)v5 + 10);
  v12 = CurrentThreadId;
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  v19 = (CMouseProcessor::BufferedMouseInputList *)(*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD, struct CInputDest *, const struct CMouseProcessor::InputDeliveryContext *))(*(_QWORD *)a2 + 16LL))(
                                                     a2,
                                                     *(_QWORD *)this,
                                                     a3,
                                                     a4);
  if ( *(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20, v21);
  if ( !v19 )
    return 0;
  v23 = (CMouseProcessor::BufferedMouseInputList **)*((_QWORD *)this + 2);
  if ( *v23 != (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
    __fastfail(3u);
  *(_QWORD *)v19 = (char *)this + 8;
  *((_QWORD *)v19 + 1) = v23;
  *v23 = v19;
  *((_QWORD *)this + 2) = v19;
  *a5 = *(_QWORD *)this;
  result = 1;
  ++*(_QWORD *)this;
  return result;
}
