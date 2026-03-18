/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1407AC6B0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     AlpcpSignal @ 0x14035AA74 (AlpcpSignal.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpTrackPortReferences @ 0x1406DA0CC (AlpcpTrackPortReferences.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessage @ 0x1407AC930 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        HANDLE Handle,
        int a2,
        __m256i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile void *Address,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  KPROCESSOR_MODE PreviousMode; // r14
  int v15; // esi
  PVOID v16; // rbx
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  int v21; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = a2 & 0xFFFF0000;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v16 = Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences((__int64)Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( a5 )
        {
          LOBYTE(v21) = PreviousMode;
          v15 = AlpcpProcessSynchronousRequest((int)v16, v13, (int)a3, a4, a5, a6, Address, a8, v21);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v23[0] = v16;
      LODWORD(v23[6]) = v13;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v15 = AlpcpReceiveMessage(v23, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v23[6], 2u) )
        {
          AlpcpSignal((__int64)v23, 0LL, 0LL);
          if ( v23[4] )
            ObfDereferenceObject((PVOID)v23[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v23[6]) = v13 | 4;
        memset(&v23[3], 0, 24);
        v15 = AlpcpSendMessage((__int64)v23, a3, a4, PreviousMode);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v16);
  }
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable++ == -1;
  if ( v19
    && ($CEA84C04E3712D858E5667A507841A2A *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v15;
}
