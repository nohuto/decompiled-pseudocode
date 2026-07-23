/*
 * XREFs of AlpcpConnectPort @ 0x1406CED1C
 * Callers:
 *     NtAlpcConnectPort @ 0x1406CDD00 (NtAlpcConnectPort.c)
 *     NtAlpcConnectPortEx @ 0x1406CDD80 (NtAlpcConnectPortEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1406CDBCC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406CDCD0 (SeReleaseSid.c)
 *     AlpcpProcessConnectionRequest @ 0x1406CE428 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1406CFCAC (AlpcpCreateClientPort.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
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
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PADAPTER_OBJECT v23; // rdi
  int v24; // ebx
  int v26; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+68h] [rbp-110h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+88h] [rbp-F0h] BYREF
  struct _DMA_ADAPTER *v31; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+98h] [rbp-E0h]
  __int64 v33; // [rsp+A0h] [rbp-D8h]
  __int64 v34; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v35; // [rsp+B0h] [rbp-C8h]
  int *v36; // [rsp+B8h] [rbp-C0h]
  __int64 v37; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 *v38; // [rsp+C8h] [rbp-B0h]
  _QWORD *v39; // [rsp+D0h] [rbp-A8h]
  _OWORD v40[5]; // [rsp+E0h] [rbp-98h] BYREF

  v32 = a4;
  v33 = a3;
  v34 = a2;
  v39 = a1;
  DmaAdapter[1] = a7;
  DmaAdapter[2] = Src;
  v38 = a10;
  v37 = a11;
  v36 = a12;
  v35 = a13;
  DmaAdapter[0] = 0LL;
  Handle = 0LL;
  memset(v40, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = (__int64)Src;
  v31 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v40[0] = *(_OWORD *)a5;
      v40[1] = *(_OWORD *)(a5 + 16);
      v40[2] = *(_OWORD *)(a5 + 32);
      v40[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v40[4] = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  v18 = (__int64)a1;
  if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
    v18 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v18 = *(_QWORD *)v18;
  if ( a5 )
  {
    v19 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v40[0] = *(_OWORD *)v19;
    v40[1] = *(_OWORD *)(v19 + 16);
    v40[2] = *(_OWORD *)(v19 + 32);
    v40[3] = *(_OWORD *)(v19 + 48);
    *(_QWORD *)&v40[4] = *(_QWORD *)(v19 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid((char *)Src, PreviousMode, v14, v15, v26, 1, (PSID *)&v30), ClientPort >= 0) )
  {
    if ( !a7
      || (ClientPort = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 0, &v31), ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)DmaAdapter,
                     a6 & 0xFFFF0000,
                     v34,
                     v33,
                     v32,
                     (unsigned __int64)v40 & -(__int64)(a5 != 0),
                     (__int64)v31,
                     v30,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v23 = DmaAdapter[0];
        v24 = AlpcpProcessConnectionRequest(
                (__int64)DmaAdapter[0],
                a6 & 0xFFFF0000,
                a9,
                v38,
                v37,
                v36,
                v35,
                PreviousMode);
        ClientPort = v24;
        if ( v24 == -1073741759 && (*(_DWORD *)&v23[26].Version & 0x100) != 0 )
          *a1 = v23[3].DmaOperations;
        if ( !v24 )
          *a1 = Handle;
        HalPutDmaAdapter(v23);
        if ( v24 )
          NtClose(Handle);
      }
    }
  }
  if ( v30 && (struct _DMA_ADAPTER *)v30 != Src )
    SeReleaseSid((void *)v30, PreviousMode, 1);
  if ( v31 && v31 != a7 )
    SeReleaseSecurityDescriptor(v31, PreviousMode, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  return (unsigned int)ClientPort;
}
