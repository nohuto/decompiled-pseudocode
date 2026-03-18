/*
 * XREFs of AlpcpConnectPort @ 0x14062A204
 * Callers:
 *     NtAlpcConnectPort @ 0x140628B20 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x140628BA0 (NtAlpcConnectPortEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140628AF0 (SeReleaseSid.c)
 *     AlpcpProcessConnectionRequest @ 0x140628D28 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 */

__int64 __fastcall AlpcpConnectPort(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        struct _DMA_ADAPTER *a7,
        struct _DMA_ADAPTER *Src,
        __int128 *a9,
        unsigned __int64 *a10,
        __int64 a11,
        int *a12,
        LARGE_INTEGER *a13)
{
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v18; // rcx
  int v19; // edx
  unsigned __int64 v20; // rax
  PADAPTER_OBJECT v21; // rdi
  int v22; // ebx
  int v24; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+68h] [rbp-110h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-F0h] BYREF
  struct _DMA_ADAPTER *v29; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+98h] [rbp-E0h]
  __int64 v31; // [rsp+A0h] [rbp-D8h]
  __int64 v32; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v33; // [rsp+B0h] [rbp-C8h]
  int *v34; // [rsp+B8h] [rbp-C0h]
  __int64 v35; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 *v36; // [rsp+C8h] [rbp-B0h]
  _QWORD *v37; // [rsp+D0h] [rbp-A8h]
  _OWORD v38[5]; // [rsp+E0h] [rbp-98h] BYREF

  v30 = a4;
  v31 = a3;
  v32 = a2;
  v37 = a1;
  DmaAdapter[1] = a7;
  DmaAdapter[2] = Src;
  v36 = a10;
  v35 = a11;
  v34 = a12;
  v33 = a13;
  DmaAdapter[0] = 0LL;
  Handle = 0LL;
  memset(v38, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = (__int64)Src;
  v29 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v38[0] = *(_OWORD *)a5;
      v38[1] = *(_OWORD *)(a5 + 16);
      v38[2] = *(_OWORD *)(a5 + 32);
      v38[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v38[4] = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  v18 = (__int64)a1;
  v19 = -65536;
  if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
    v18 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v18 = *(_QWORD *)v18;
  if ( a5 )
  {
    v20 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    v38[0] = *(_OWORD *)v20;
    v38[1] = *(_OWORD *)(v20 + 16);
    v38[2] = *(_OWORD *)(v20 + 32);
    v38[3] = *(_OWORD *)(v20 + 48);
    *(_QWORD *)&v38[4] = *(_QWORD *)(v20 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid((char *)Src, PreviousMode, v14, v15, v24, 1, (PSID *)&v28), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v19) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v19, 1, 0, (__int64)&v29),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)DmaAdapter,
                     a6 & 0xFFFF0000,
                     v32,
                     v31,
                     v30,
                     (unsigned __int64)v38 & -(__int64)(a5 != 0),
                     (__int64)v29,
                     v28,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v21 = DmaAdapter[0];
        v22 = AlpcpProcessConnectionRequest(
                (__int64)DmaAdapter[0],
                a6 & 0xFFFF0000,
                a9,
                v36,
                v35,
                v34,
                v33,
                PreviousMode);
        ClientPort = v22;
        if ( v22 == -1073741759 && (*(_DWORD *)&v21[26].Version & 0x100) != 0 )
          *a1 = v21[3].DmaOperations;
        if ( !v22 )
          *a1 = Handle;
        HalPutDmaAdapter(v21);
        if ( v22 )
          NtClose(Handle);
      }
    }
  }
  if ( v28 && (struct _DMA_ADAPTER *)v28 != Src )
    SeReleaseSid((void *)v28, PreviousMode, 1);
  if ( v29 && v29 != a7 )
    SeReleaseSecurityDescriptor(v29, PreviousMode, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
