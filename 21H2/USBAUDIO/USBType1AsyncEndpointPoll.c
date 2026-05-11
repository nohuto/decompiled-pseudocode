/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x1C0005380
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0013D80 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x1C002EAA8 (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rsi
  ULONG_PTR v6; // r15
  struct _DEVICE_OBJECT *v7; // r14
  IRP *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // bp
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  KIRQL v16; // al
  KIRQL v17; // bl
  KIRQL v18; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v20; // rax

  v2 = (_QWORD *)Context[2];
  v4 = v2[19];
  v5 = v2 + 14;
  v6 = *(_QWORD *)(v4 + 864);
  v7 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v8 = *(IRP **)(v4 + 872);
  v9 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v10 = v9;
  if ( *(_BYTE *)(v4 + 100) )
  {
    *(_BYTE *)(v4 + 917) = 1;
    KeReleaseSpinLock(v2 + 14, v9);
    if ( (int)USBHwAbortOrResetPipe(v7) >= 0 )
      goto LABEL_11;
    v11 = v2[19];
    v12 = 0;
    v13 = *(_DWORD *)(v11 + 56);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v11 + 72);
      while ( *(_BYTE *)(v14 + 24LL * v12 + 2) != *(_BYTE *)(*(_QWORD *)(v2[18] + 176LL) + 2LL) )
      {
        if ( ++v12 >= v13 )
          goto LABEL_10;
      }
      v15 = *(_QWORD *)(v14 + 24LL * v12 + 8);
      if ( v15 )
      {
        *(_QWORD *)(v4 + 888) = v15;
        if ( (int)USBHwAbortOrResetPipe(v7) >= 0 )
        {
LABEL_11:
          memset((void *)(v6 + 4), 0, 0xA0uLL);
          *(_DWORD *)v6 = 655524;
          *(_QWORD *)(v6 + 24) = *(_QWORD *)(v4 + 888);
          *(_DWORD *)(v6 + 32) = 1;
          *(_DWORD *)(v6 + 128) = *(_DWORD *)(v4 + 896);
          *(_QWORD *)(v6 + 40) = v4 + 976;
          *(_DWORD *)(v6 + 132) = 1;
          *(_DWORD *)(v6 + 140) = 0;
          *(_DWORD *)(v6 + 36) = 3;
          IoInitializeIrp(v8, 72 * v7->StackSize + 208, v7->StackSize);
          CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 15;
          CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
          CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
          v20 = v8->Tail.Overlay.CurrentStackLocation;
          v20[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBType1AsyncEndpointPollCallback;
          v20[-1].Context = Context;
          v20[-1].Control = -32;
          IofCallDriver(v7, v8);
          return;
        }
      }
    }
LABEL_10:
    v16 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
    *(_BYTE *)(v4 + 917) = 0;
    v17 = v16;
    KeSetEvent((PRKEVENT)(v4 + 920), 0, 0);
    *(_BYTE *)(v4 + 916) = 0;
    KeSetEvent((PRKEVENT)(v4 + 944), 0, 0);
    v18 = v17;
  }
  else
  {
    *(_BYTE *)(v4 + 916) = 0;
    KeSetEvent((PRKEVENT)(v4 + 944), 0, 0);
    v18 = v10;
  }
  KeReleaseSpinLock(v5, v18);
}
