/*
 * XREFs of AlpcpConnectPort @ 0x1405E658C
 * Callers:
 *     NtAlpcConnectPort @ 0x1405E5570 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x1405E55F0 (NtAlpcConnectPortEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeCaptureSid @ 0x1405E5438 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405E553C (SeReleaseSid.c)
 *     AlpcpProcessConnectionRequest @ 0x1405E5C98 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     SeCaptureSecurityDescriptor @ 0x140605830 (SeCaptureSecurityDescriptor.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
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
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  PADAPTER_OBJECT v22; // rdi
  int v23; // ebx
  int v25; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+68h] [rbp-110h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+88h] [rbp-F0h] BYREF
  struct _DMA_ADAPTER *v30; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+98h] [rbp-E0h]
  __int64 v32; // [rsp+A0h] [rbp-D8h]
  __int64 v33; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v34; // [rsp+B0h] [rbp-C8h]
  int *v35; // [rsp+B8h] [rbp-C0h]
  __int64 v36; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 *v37; // [rsp+C8h] [rbp-B0h]
  _QWORD *v38; // [rsp+D0h] [rbp-A8h]
  _OWORD v39[5]; // [rsp+E0h] [rbp-98h] BYREF

  v31 = a4;
  v32 = a3;
  v33 = a2;
  v38 = a1;
  DmaAdapter[1] = a7;
  DmaAdapter[2] = Src;
  v37 = a10;
  v36 = a11;
  v35 = a12;
  v34 = a13;
  DmaAdapter[0] = 0LL;
  Handle = 0LL;
  memset(v39, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = (__int64)Src;
  v30 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v39[0] = *(_OWORD *)a5;
      v39[1] = *(_OWORD *)(a5 + 16);
      v39[2] = *(_OWORD *)(a5 + 32);
      v39[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v39[4] = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  v18 = (__int64)a1;
  LODWORD(v19) = -65536;
  if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
    v18 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v18 = *(_QWORD *)v18;
  if ( a5 )
  {
    v20 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    v39[0] = *(_OWORD *)v20;
    v39[1] = *(_OWORD *)(v20 + 16);
    v39[2] = *(_OWORD *)(v20 + 32);
    v39[3] = *(_OWORD *)(v20 + 48);
    *(_QWORD *)&v39[4] = *(_QWORD *)(v20 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid((char *)Src, PreviousMode, v14, v15, v25, 1, (PSID *)&v29), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v19) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v19, 1, 0, (__int64)&v30),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)DmaAdapter,
                     a6 & 0xFFFF0000,
                     v33,
                     v32,
                     v31,
                     (unsigned __int64)v39 & -(__int64)(a5 != 0),
                     (__int64)v30,
                     v29,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v22 = DmaAdapter[0];
        v23 = AlpcpProcessConnectionRequest(
                (__int64)DmaAdapter[0],
                a6 & 0xFFFF0000,
                a9,
                v37,
                v36,
                v35,
                v34,
                PreviousMode);
        ClientPort = v23;
        if ( v23 == -1073741759 && (*(_DWORD *)&v22[26].Version & 0x100) != 0 )
          *a1 = v22[3].DmaOperations;
        if ( !v23 )
          *a1 = Handle;
        HalPutDmaAdapter(v22);
        if ( v23 )
          NtClose(Handle);
      }
    }
  }
  if ( v29 && (struct _DMA_ADAPTER *)v29 != Src )
    SeReleaseSid((void *)v29, PreviousMode, 1);
  if ( v30 && v30 != a7 )
  {
    LOBYTE(v19) = PreviousMode;
    SeReleaseSecurityDescriptor(v30, v19, 0LL, v21);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
