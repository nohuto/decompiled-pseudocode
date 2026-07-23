/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140687FF0
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1408BEA70 (NtImpersonateClientOfPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpImpersonateMessage @ 0x1406881C0 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140688420 (AlpcpCaptureIdMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1406884B0 (AlpcpReferenceConnectedPort.c)
 *     SeImpersonateClientEx @ 0x1406CAD40 (SeImpersonateClientEx.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BF664 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _DMA_ADAPTER *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int v9; // r15d
  unsigned __int64 v10; // rdi
  int v11; // r12d
  BOOL v12; // r13d
  __int64 v13; // r9
  NTSTATUS v14; // r14d
  struct _DMA_ADAPTER *v15; // rsi
  ULONG_PTR v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  int Object; // [rsp+20h] [rbp-A8h]
  int v23; // [rsp+30h] [rbp-98h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-90h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-78h] BYREF
  PVOID v27; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+E8h] [rbp+20h] BYREF

  v6 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = 0;
  v23 = 0;
  DmaAdapter = 0LL;
  BugCheckParameter2[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v27) = PreviousMode;
  if ( Message )
  {
    AlpcpCaptureIdMessage(Message, &v28, &v23);
    v9 = v28;
    if ( !v28 )
    {
LABEL_28:
      v15 = DmaAdapter;
      v14 = -1073741811;
      goto LABEL_11;
    }
    PreviousMode = (char)v27;
  }
  else
  {
    v9 = v28;
  }
  v10 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_28;
  v11 = (unsigned __int8)Flags & 1;
  v12 = (((4 * (_DWORD)v10) | 2) & (unsigned int)Flags) != 0LL;
  v27 = 0LL;
  v14 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &v27, 0LL);
  v15 = (struct _DMA_ADAPTER *)v27;
  if ( v14 < 0 )
    goto LABEL_11;
  if ( v9 )
  {
    v14 = AlpcpLookupMessage((__int64)v27, v9, v23, v13, BugCheckParameter2);
    if ( v14 >= 0 )
    {
      Object = v10;
      v16 = BugCheckParameter2[0];
      v14 = AlpcpImpersonateMessage((_DWORD)v15, BugCheckParameter2[0], v11, v12, Object);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v16, v17, v18, v19);
      AlpcpUnlockBlob(v16);
    }
  }
  else
  {
    v21 = AlpcpReferenceConnectedPort(v27);
    v6 = (struct _DMA_ADAPTER *)v21;
    if ( !v21 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v21 + 256) & 0x10000) == 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v21 + 416) & 0x400) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v21 + 64);
    if ( v12 )
    {
      if ( (int)v10 > ClientContext.SecurityQos.ImpersonationLevel )
      {
        v14 = -1073741790;
        goto LABEL_11;
      }
      ClientContext.SecurityQos.ImpersonationLevel = v10;
    }
    v14 = SeImpersonateClientEx(&ClientContext, 0LL);
  }
LABEL_11:
  if ( v6 )
    HalPutDmaAdapter(v6);
  if ( v15 )
    HalPutDmaAdapter(v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
