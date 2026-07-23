/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1406D9170
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1408C2140 (NtImpersonateClientOfPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     SeImpersonateClientEx @ 0x1406B81C0 (SeImpersonateClientEx.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     AlpcpImpersonateMessage @ 0x1406D9340 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1406D95A0 (AlpcpCaptureIdMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1406D9660 (AlpcpReferenceConnectedPort.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2D34 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  PPORT_MESSAGE v4; // r9
  struct _DMA_ADAPTER *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  int v10; // r15d
  unsigned __int64 v11; // rdi
  int v12; // r12d
  BOOL v13; // r13d
  NTSTATUS v14; // r14d
  struct _DMA_ADAPTER *v15; // rsi
  ULONG_PTR v16; // rdi
  __int64 v18; // rax
  int Object; // [rsp+20h] [rbp-A8h]
  int v20; // [rsp+30h] [rbp-98h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-90h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-78h] BYREF
  PVOID v24; // [rsp+D8h] [rbp+10h] BYREF
  int v25; // [rsp+E8h] [rbp+20h] BYREF

  v4 = Message;
  v6 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = 0;
  v20 = 0;
  DmaAdapter = 0LL;
  BugCheckParameter2[1] = 0LL;
  v8 = KeGetCurrentThread();
  v9 = (unsigned __int8)v8->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  LOBYTE(v24) = v8->PreviousMode;
  if ( v4 )
  {
    AlpcpCaptureIdMessage(v4, &v25, &v20);
    v10 = v25;
    if ( !v25 )
    {
LABEL_28:
      v15 = DmaAdapter;
      v14 = -1073741811;
      goto LABEL_11;
    }
    v9 = (unsigned __int8)v24;
  }
  else
  {
    v10 = v25;
  }
  v11 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_28;
  v12 = (unsigned __int8)Flags & 1;
  v13 = (((4 * (_DWORD)v11) | 2) & (unsigned int)Flags) != 0LL;
  v24 = 0LL;
  v14 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v9, &v24, 0LL);
  v15 = (struct _DMA_ADAPTER *)v24;
  if ( v14 < 0 )
    goto LABEL_11;
  if ( v10 )
  {
    v14 = AlpcpLookupMessage((__int64)v24, v10, v20, (__int64)v4, BugCheckParameter2);
    if ( v14 >= 0 )
    {
      Object = v11;
      v16 = BugCheckParameter2[0];
      v14 = AlpcpImpersonateMessage((_DWORD)v15, BugCheckParameter2[0], v12, v13, Object);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v16);
      AlpcpUnlockBlob(v16);
    }
  }
  else
  {
    v18 = AlpcpReferenceConnectedPort(v24);
    v6 = (struct _DMA_ADAPTER *)v18;
    if ( !v18 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 256) & 0x10000) == 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 416) & 0x400) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v18 + 64);
    if ( v13 )
    {
      if ( (int)v11 > ClientContext.SecurityQos.ImpersonationLevel )
      {
        v14 = -1073741790;
        goto LABEL_11;
      }
      ClientContext.SecurityQos.ImpersonationLevel = v11;
    }
    v14 = SeImpersonateClientEx(&ClientContext, 0LL);
  }
LABEL_11:
  if ( v6 )
    HalPutDmaAdapter(v6);
  if ( v15 )
    HalPutDmaAdapter(v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, (__int64)Flags, (__int64)v4);
  return v14;
}
