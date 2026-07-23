/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x140625D80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpQuerySidMessage @ 0x140625C0C (AlpcpQuerySidMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x140625F74 (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140688420 (AlpcpCaptureIdMessage.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1408BEE7C (AlpcpQueryTokenModifiedIdMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v11; // rsi
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // ebx
  int v15; // r9d
  struct _DMA_ADAPTER *v16; // r15
  ULONG_PTR v17; // r14
  __int32 v18; // edi
  __int32 v19; // edi
  int TokenModifiedIdMessage; // eax
  int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v25[2]; // [rsp+40h] [rbp-28h] BYREF

  v23 = 0;
  v25[0] = 0LL;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(PortMessage, &v22, &v23);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  v13 = v22;
  if ( !v22 )
  {
    v14 = -1073741811;
    goto LABEL_20;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v16 = (struct _DMA_ADAPTER *)Object;
    v14 = AlpcpLookupMessage((_DWORD)Object, v13, v23, v15, (__int64)v25);
    if ( v14 < 0 )
    {
LABEL_19:
      HalPutDmaAdapter(v16);
      goto LABEL_20;
    }
    v17 = v25[0];
    if ( !*(_QWORD *)(v25[0] + 24) )
    {
      v14 = -1073740029;
      goto LABEL_18;
    }
    if ( MessageInformationClass )
    {
      v18 = MessageInformationClass - 1;
      if ( !v18 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v16,
                                   v25[0],
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v11);
        goto LABEL_17;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v16,
                                     v25[0],
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v11);
LABEL_17:
          v14 = TokenModifiedIdMessage;
LABEL_18:
          AlpcpUnlockMessage(v17);
          goto LABEL_19;
        }
      }
      else if ( !MessageInformation && !Length && !v11 )
      {
        v14 = (*(_DWORD *)(v25[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_18;
      }
      v14 = -1073741811;
      goto LABEL_18;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((int)v16, v25[0], MessageInformation, Length, v11);
    goto LABEL_17;
  }
LABEL_20:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
