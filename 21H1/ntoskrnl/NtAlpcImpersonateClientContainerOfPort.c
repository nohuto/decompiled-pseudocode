/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x14025A200 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14025A2A8 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14025A330 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x14025A340 (PoEnergyEstimationEnabled.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1406102A0 (AlpcpCaptureIdMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  PPORT_MESSAGE v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v6; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  struct _KTHREAD *v8; // r14
  struct _KTHREAD *WorkOnBehalfThread; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rsi
  __int64 v12; // rdx
  struct _KTHREAD *v13; // r8
  void *Teb; // r8
  __int64 v15; // r8
  _DWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v18; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-18h]
  int v22; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = Message;
  v22 = 0;
  v17[0] = 0;
  v18 = 0LL;
  v23 = 0;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  DmaAdapter = 0LL;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v23, &v22);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v6 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && (Message = (PPORT_MESSAGE)KeGetCurrentThread()->ApcState.Process, Message == *((PPORT_MESSAGE *)Object + 3)) )
      {
        v6 = AlpcpLookupMessage((__int64)Object, v23, v22, (__int64)v3, &v18);
        v17[1] = v6;
        if ( v6 >= 0 )
        {
          if ( (*(_DWORD *)(v18 + 40) & 0x80u) == 0 )
          {
            v8 = *(struct _KTHREAD **)(v18 + 32);
            if ( v8 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v18 + 32), v17);
              v11 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread, v10);
                if ( v17[0] )
                  ObDereferenceObjectDeferDelete(v11);
              }
              else if ( IoThreadToProcess(v8)[2].Affinity.Bitmap[18] || PoEnergyEstimationEnabled() )
              {
                v11 = v8;
                PsImpersonateContainerOfThread((__int64)v8, v12);
              }
              else
              {
                v11 = 0LL;
              }
              if ( v11 )
              {
                v13 = KeGetCurrentThread();
                if ( (v13->MiscFlags & 0x400) != 0 || v13->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v13->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v11, &v20);
                  *(_QWORD *)(v15 + 696) = v20;
                }
              }
            }
            AlpcpUnlockMessage(v18);
          }
          else
          {
            AlpcpUnlockMessage(v18);
            v6 = -1073740029;
          }
        }
      }
      else
      {
        v6 = -1073741790;
      }
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)Message, *(__int64 *)&Flags, (__int64)v3);
  return v6;
}
