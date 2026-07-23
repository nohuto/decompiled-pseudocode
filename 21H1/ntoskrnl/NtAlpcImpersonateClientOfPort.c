/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x14060FE70
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1408BD720 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpImpersonateMessage @ 0x140610040 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1406102A0 (AlpcpCaptureIdMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140610330 (AlpcpReferenceConnectedPort.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SeImpersonateClientEx @ 0x14067D1E0 (SeImpersonateClientEx.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BE314 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  PPORT_MESSAGE v4; // r9
  struct _DMA_ADAPTER *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned __int64 v11; // rdi
  int v12; // r12d
  BOOL v13; // r13d
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

  v4 = Message;
  v6 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = 0;
  v23 = 0;
  DmaAdapter = 0LL;
  BugCheckParameter2[1] = 0LL;
  v8 = KeGetCurrentThread();
  v9 = (unsigned __int8)v8->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  LOBYTE(v27) = v8->PreviousMode;
  if ( v4 )
  {
    AlpcpCaptureIdMessage(v4, &v28, &v23);
    v10 = v28;
    if ( !v28 )
    {
LABEL_28:
      v15 = DmaAdapter;
      v14 = -1073741811;
      goto LABEL_11;
    }
    v9 = (unsigned __int8)v27;
  }
  else
  {
    v10 = v28;
  }
  v11 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_28;
  v12 = (unsigned __int8)Flags & 1;
  v13 = (((4 * (_DWORD)v11) | 2) & (unsigned int)Flags) != 0LL;
  v27 = 0LL;
  v14 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v9, &v27, 0LL);
  v15 = (struct _DMA_ADAPTER *)v27;
  if ( v14 < 0 )
    goto LABEL_11;
  if ( v10 )
  {
    v14 = AlpcpLookupMessage((__int64)v27, v10, v23, (__int64)v4, BugCheckParameter2);
    if ( v14 >= 0 )
    {
      Object = v11;
      v16 = BugCheckParameter2[0];
      v14 = AlpcpImpersonateMessage((_DWORD)v15, BugCheckParameter2[0], v12, v13, Object);
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
