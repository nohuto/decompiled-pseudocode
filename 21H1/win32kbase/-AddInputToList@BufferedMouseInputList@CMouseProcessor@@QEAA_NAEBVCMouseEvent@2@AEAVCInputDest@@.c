/*
 * XREFs of ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01C13BC
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rcx
  __int64 v14; // rcx
  CMouseProcessor::BufferedMouseInputList *v15; // rbx
  bool result; // al
  CMouseProcessor::BufferedMouseInputList **v17; // rcx

  v5 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v11 = *((_DWORD *)v5 + 10);
  v12 = CurrentThreadId;
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v15 = (CMouseProcessor::BufferedMouseInputList *)(*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD, struct CInputDest *, const struct CMouseProcessor::InputDeliveryContext *))(*(_QWORD *)a2 + 16LL))(
                                                     a2,
                                                     *(_QWORD *)this,
                                                     a3,
                                                     a4);
  if ( *(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( !v15 )
    return 0;
  v17 = (CMouseProcessor::BufferedMouseInputList **)*((_QWORD *)this + 2);
  if ( *v17 != (CMouseProcessor::BufferedMouseInputList *)((char *)this + 8) )
    __fastfail(3u);
  *(_QWORD *)v15 = (char *)this + 8;
  *((_QWORD *)v15 + 1) = v17;
  *v17 = v15;
  *((_QWORD *)this + 2) = v15;
  *a5 = *(_QWORD *)this;
  result = 1;
  ++*(_QWORD *)this;
  return result;
}
