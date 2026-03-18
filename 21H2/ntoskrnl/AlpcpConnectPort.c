/*
 * XREFs of AlpcpConnectPort @ 0x140666D1C
 * Callers:
 *     NtAlpcConnectPortEx @ 0x1406656C0 (NtAlpcConnectPortEx.c)
 *     NtAlpcConnectPort @ 0x140665740 (NtAlpcConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140667A4C (AlpcpProcessConnectionRequest.c)
 *     SeReleaseSid @ 0x140668444 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x14066846C (SeCaptureSid.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 */

__int64 __fastcall AlpcpConnectPort(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        LARGE_INTEGER *a13)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdi
  int v21; // ebx
  int v23; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+88h] [rbp-F0h] BYREF
  void *v28; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-E0h]
  __int64 v30; // [rsp+A0h] [rbp-D8h]
  __int64 v31; // [rsp+A8h] [rbp-D0h]
  PLARGE_INTEGER v32; // [rsp+B0h] [rbp-C8h]
  __int64 v33; // [rsp+B8h] [rbp-C0h]
  __int64 v34; // [rsp+C0h] [rbp-B8h]
  __int64 v35; // [rsp+C8h] [rbp-B0h]
  HANDLE *v36; // [rsp+D0h] [rbp-A8h]
  _OWORD v37[5]; // [rsp+E0h] [rbp-98h] BYREF

  v29 = a4;
  v30 = a3;
  v31 = a2;
  v36 = a1;
  Object[1] = a7;
  Object[2] = Src;
  v35 = a10;
  v34 = a11;
  v33 = a12;
  v32 = a13;
  Object[0] = 0LL;
  Handle = 0LL;
  memset(v37, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = (__int64)Src;
  v28 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v37[0] = *(_OWORD *)a5;
      v37[1] = *(_OWORD *)(a5 + 16);
      v37[2] = *(_OWORD *)(a5 + 32);
      v37[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v37[4] = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  v16 = 0x7FFFFFFF0000LL;
  v17 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v17 = (__int64)a1;
  *(_QWORD *)v17 = *(_QWORD *)v17;
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v16 = a5;
    v37[0] = *(_OWORD *)v16;
    v37[1] = *(_OWORD *)(v16 + 16);
    v37[2] = *(_OWORD *)(v16 + 32);
    v37[3] = *(_OWORD *)(v16 + 48);
    *(_QWORD *)&v37[4] = *(_QWORD *)(v16 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid(Src, v23, 1, (__int64)&v27), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v16) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v16, 1, 0, (__int64)&v28),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     a6 & 0xFFFF0000,
                     v31,
                     v30,
                     v29,
                     (unsigned __int64)v37 & -(__int64)(a5 != 0),
                     (__int64)v28,
                     v27,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v20 = Object[0];
        v21 = AlpcpProcessConnectionRequest(Object[0], a6 & 0xFFFF0000, a9, v35, v34, v33, v32, PreviousMode);
        ClientPort = v21;
        if ( v21 == -1073741759 && (v20[52] & 0x100) != 0 )
          *a1 = (HANDLE)v20[7];
        if ( !v21 )
          *a1 = Handle;
        ObfDereferenceObject(v20);
        if ( v21 )
          NtClose(Handle);
      }
    }
  }
  if ( v27 && (void *)v27 != Src )
  {
    LOBYTE(v18) = 1;
    LOBYTE(v16) = PreviousMode;
    SeReleaseSid(v27, v16, v18, v19);
  }
  if ( v28 && v28 != a7 )
  {
    LOBYTE(v16) = PreviousMode;
    SeReleaseSecurityDescriptor(v28, v16, 0LL, v19);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
