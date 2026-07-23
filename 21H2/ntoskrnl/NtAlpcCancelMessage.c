/*
 * XREFs of NtAlpcCancelMessage @ 0x140620390
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  int v9; // ebx
  ULONG v10; // edx
  struct _DMA_ADAPTER *v11; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
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
    v9 = AlpcpLookupMessage(Object[0], v10, Sequence, v3, (__int64)&BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)&v11[26].Version & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage(v11, BugCheckParameter2, Flags);
          }
          goto LABEL_16;
        }
      }
      else if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(BugCheckParameter2);
      v9 = -1073740007;
    }
LABEL_16:
    HalPutDmaAdapter(v11);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)MessageContext, v3);
  return v9;
}
