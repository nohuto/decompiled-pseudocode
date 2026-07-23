/*
 * XREFs of NtAlpcCancelMessage @ 0x1406EB270
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  struct _DMA_ADAPTER *v11; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  LOBYTE(v3) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)v3 )
  {
    if ( (Flags & 4) != 0 )
    {
      if ( ((unsigned __int8)MessageContext & 3) == 0 )
      {
        MessageContext_high = HIDWORD(MessageContext->MessageContext);
        Sequence = MessageContext->Sequence;
        PortContext_high = (PVOID)HIDWORD(MessageContext->PortContext);
        goto LABEL_9;
      }
    }
    else if ( ((unsigned __int8)MessageContext & 3) == 0 )
    {
      MessageContext_high = MessageContext->MessageId;
      Sequence = MessageContext->CallbackId;
      PortContext_high = MessageContext->MessageContext;
LABEL_9:
      Object[1] = PortContext_high;
      goto LABEL_10;
    }
    ExRaiseDatatypeMisalignment();
  }
  MessageContext_high = MessageContext->MessageId;
  Sequence = MessageContext->CallbackId;
  PortContext_high = MessageContext->MessageContext;
LABEL_10:
  if ( !MessageContext_high )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v3, Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = MessageContext_high;
    v11 = (struct _DMA_ADAPTER *)Object[0];
    v9 = AlpcpLookupMessage((__int64)Object[0], v10, Sequence, v3, &v14);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)&v11[26].Version & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(v14 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(v14);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v11, v14, Flags);
          }
          goto LABEL_16;
        }
      }
      else if ( PortContext_high == *(PVOID *)(v14 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(v14);
      v9 = -1073740007;
    }
LABEL_16:
    HalPutDmaAdapter(v11);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)MessageContext, v3);
  return v9;
}
