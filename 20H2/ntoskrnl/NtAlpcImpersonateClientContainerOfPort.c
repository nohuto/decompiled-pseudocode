/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x1408C4D70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14020890C (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402089B4 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140208A50 (PoEnergyEstimationEnabled.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1405F1480 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x1405F150C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v7; // r9
  struct _KTHREAD *v8; // r14
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v10; // rsi
  struct _KTHREAD *v11; // r8
  void *Teb; // r8
  __int64 v13; // r8
  _DWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-18h]
  int v20; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  v15[0] = 0;
  BugCheckParameter2 = 0LL;
  v21 = 0;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  DmaAdapter = 0LL;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v21, &v20);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v5 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v5 = AlpcpLookupMessage((__int64)Object, v21, v20, v7, &BugCheckParameter2);
        v15[1] = v5;
        if ( v5 >= 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
          {
            v8 = *(struct _KTHREAD **)(BugCheckParameter2 + 32);
            if ( v8 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(
                                                        *(struct _KTHREAD **)(BugCheckParameter2 + 32),
                                                        v15);
              v10 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v15[0] )
                  ObDereferenceObjectDeferDelete(v10);
              }
              else if ( IoThreadToProcess(v8)[2].Affinity.Bitmap[18] || PoEnergyEstimationEnabled() )
              {
                v10 = v8;
                PsImpersonateContainerOfThread((__int64)v8);
              }
              else
              {
                v10 = 0LL;
              }
              if ( v10 )
              {
                v11 = KeGetCurrentThread();
                if ( (v11->MiscFlags & 0x400) != 0 || v11->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v11->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v10, &v18);
                  *(_QWORD *)(v13 + 696) = v18;
                }
              }
            }
            AlpcpUnlockMessage(BugCheckParameter2);
          }
          else
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v5 = -1073740029;
          }
        }
      }
      else
      {
        v5 = -1073741790;
      }
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
