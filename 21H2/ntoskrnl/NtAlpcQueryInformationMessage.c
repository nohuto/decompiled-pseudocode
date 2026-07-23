/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1405E31B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpQuerySidMessage @ 0x1405E33A4 (AlpcpQuerySidMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1405E35C8 (AlpcpQueryHandleInformationMessage.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1406D95A0 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1408C254C (AlpcpQueryTokenModifiedIdMessage.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PULONG v14; // rsi
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // ebx
  struct _DMA_ADAPTER *v18; // r15
  ULONG_PTR v19; // r14
  __int32 v20; // edi
  __int32 v21; // edi
  int TokenModifiedIdMessage; // eax
  int v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+34h] [rbp-34h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-28h] BYREF

  v25 = 0;
  BugCheckParameter2[0] = 0LL;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(PortMessage, &v24, &v25);
  if ( PreviousMode )
  {
    ProbeForWrite(MessageInformation, Length, 4u);
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v15 = (__int64)ReturnLength;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
  }
  else
  {
    v14 = ReturnLength;
  }
  v16 = v24;
  if ( !v24 )
  {
    v17 = -1073741811;
    goto LABEL_20;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v17 >= 0 )
  {
    v18 = (struct _DMA_ADAPTER *)Object;
    v17 = AlpcpLookupMessage((_DWORD)Object, v16, v25, v13, (__int64)BugCheckParameter2);
    if ( v17 < 0 )
    {
LABEL_19:
      HalPutDmaAdapter(v18);
      goto LABEL_20;
    }
    v19 = BugCheckParameter2[0];
    if ( !*(_QWORD *)(BugCheckParameter2[0] + 24) )
    {
      v17 = -1073740029;
      goto LABEL_18;
    }
    if ( MessageInformationClass )
    {
      v20 = MessageInformationClass - 1;
      if ( !v20 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (_DWORD)v18,
                                   BugCheckParameter2[0],
                                   (_DWORD)MessageInformation,
                                   Length,
                                   (__int64)v14);
        goto LABEL_17;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)v18,
                                     BugCheckParameter2[0],
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v14);
LABEL_17:
          v17 = TokenModifiedIdMessage;
LABEL_18:
          AlpcpUnlockMessage(v19);
          goto LABEL_19;
        }
      }
      else if ( !MessageInformation && !Length && !v14 )
      {
        v17 = (*(_DWORD *)(BugCheckParameter2[0] + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_18;
      }
      v17 = -1073741811;
      goto LABEL_18;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage(
                               (_DWORD)v18,
                               BugCheckParameter2[0],
                               (_DWORD)MessageInformation,
                               Length,
                               (__int64)v14);
    goto LABEL_17;
  }
LABEL_20:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v17;
}
