/*
 * XREFs of NtSecureConnectPort @ 0x1405DDC90
 * Callers:
 *     NtConnectPort @ 0x1405DDB10 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x1408914C0 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1405DDB60 (AlpcpReceiveLegacyConnectionReply.c)
 *     SeCaptureSid @ 0x1405DE46C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1405DE570 (SeReleaseSid.c)
 *     AlpcpDispatchConnectionRequest @ 0x1405DF168 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1405E033C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     AlpcpUnlockMessage @ 0x1405E9ECC (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpLogConnectFail @ 0x1408C3C50 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C3CB8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C3D28 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall NtSecureConnectPort(
        HANDLE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void *Src,
        unsigned __int64 a6,
        unsigned __int64 a7,
        volatile void *a8,
        unsigned int *a9)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int ClientPort; // r15d
  PADAPTER_OBJECT v25; // r13
  int v26; // edi
  __int64 v27; // r15
  unsigned int v28; // r12d
  int v29; // eax
  unsigned int v30; // eax
  int v32; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v33; // [rsp+48h] [rbp-180h]
  char PreviousMode; // [rsp+60h] [rbp-168h]
  int v35; // [rsp+64h] [rbp-164h]
  unsigned int v36; // [rsp+68h] [rbp-160h] BYREF
  __int64 v37; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR v40; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-130h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-128h] BYREF
  HANDLE *v44; // [rsp+A8h] [rbp-120h]
  __m128i v45; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-108h]
  __int128 v47; // [rsp+D0h] [rbp-F8h]
  unsigned int *v48; // [rsp+E0h] [rbp-E8h]
  _DWORD *v49; // [rsp+E8h] [rbp-E0h]
  __int128 v50; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+100h] [rbp-C8h]
  _OWORD v52[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+128h] [rbp-A0h]
  __int64 v54[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v55; // [rsp+170h] [rbp-58h] BYREF
  int v56; // [rsp+178h] [rbp-50h]

  v42 = a2;
  v44 = a1;
  v49 = (_DWORD *)a7;
  Address = a8;
  v48 = a9;
  DmaAdapter = 0LL;
  memset(v54, 0, sizeof(v54));
  Handle = 0LL;
  v37 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v36 = 0;
  v55 = 0LL;
  v56 = 0;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v50 = 0LL;
  v51 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a9 )
      v36 = *a9;
    if ( a4 )
    {
      v45 = *(__m128i *)a4;
      v46 = *(_OWORD *)(a4 + 16);
      v47 = *(_OWORD *)(a4 + 32);
    }
    if ( a3 )
    {
      v55 = *(_QWORD *)a3;
      v56 = *(_DWORD *)(a3 + 8);
    }
    v37 = (__int64)Src;
    goto LABEL_39;
  }
  v12 = (__int64)v44;
  if ( (unsigned __int64)v44 >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v12 = *(_QWORD *)v12;
  if ( a9 )
  {
    v13 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v36 = *(_DWORD *)v13;
    ProbeForWrite(Address, v36, 1u);
  }
  if ( a4 )
  {
    v14 = a4;
    if ( a4 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v45 = *(__m128i *)v14;
    v46 = *(_OWORD *)(v14 + 16);
    v47 = *(_OWORD *)(v14 + 32);
    if ( _mm_cvtsi128_si32(v45) != 48 )
    {
      v35 = -1073741811;
      goto LABEL_61;
    }
    if ( (a4 & 3) != 0 )
      goto LABEL_37;
    v15 = a4;
    if ( a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + 47) = *(_BYTE *)(v15 + 47);
  }
  if ( !a6 )
    goto LABEL_24;
  v16 = a6;
  if ( a6 >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  if ( *(_DWORD *)v16 != 24 )
  {
    v35 = -1073741811;
    goto LABEL_61;
  }
  if ( (a6 & 3) != 0 )
LABEL_37:
    ExRaiseDatatypeMisalignment();
  v17 = a6;
  if ( a6 >= 0x7FFFFFFF0000LL )
    v17 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v17 = *(_BYTE *)v17;
  *(_BYTE *)(v17 + 23) = *(_BYTE *)(v17 + 23);
LABEL_24:
  if ( a7 )
  {
    v18 = a7;
    if ( a7 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  if ( a3 )
  {
    v19 = a3;
    if ( a3 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v55 = *(_QWORD *)v19;
    v56 = *(_DWORD *)(v19 + 8);
  }
  v37 = (__int64)Src;
  if ( !Src || (v35 = SeCaptureSid(Src, v32, 1, (__int64)&v37), v35 >= 0) )
  {
LABEL_39:
    v33 = (unsigned __int64)&v55 & -(__int64)(a3 != 0);
    v20 = (void *)v37;
    ClientPort = AlpcpCreateClientPort(
                   (unsigned int)&Handle,
                   (unsigned int)&DmaAdapter,
                   0,
                   v42,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   v37,
                   v33,
                   1);
    v35 = ClientPort;
    if ( v20 != Src )
    {
      LOBYTE(v22) = 1;
      LOBYTE(v21) = PreviousMode;
      SeReleaseSid(v20, v21, v22, v23);
    }
    if ( ClientPort >= 0 )
    {
      LOWORD(v52[0]) = v36;
      v42 = (unsigned __int64)&v45 & -(__int64)(a4 != 0);
      v25 = DmaAdapter;
      v26 = AlpcpFormatConnectionRequest(
              (unsigned int)&BugCheckParameter2,
              0,
              (_DWORD)DmaAdapter,
              (_DWORD)Address,
              (__int64)v52,
              0LL,
              v42,
              (__int64)&v40,
              1,
              PreviousMode);
      v35 = v26;
      if ( v26 >= 0 )
      {
        v27 = BugCheckParameter2;
        v28 = *(_DWORD *)(BugCheckParameter2 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(BugCheckParameter2);
        v54[0] = (__int64)v25;
        v54[1] = v27;
        LODWORD(v54[6]) = 0x20000;
        v29 = AlpcpDispatchConnectionRequest(v54);
        v26 = v29;
        v35 = v29;
        if ( v29 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v28, (unsigned int)v29);
          AlpcpUnlockMessage(v27);
        }
        else
        {
          v30 = AlpcpReceiveLegacyConnectionReply(
                  v54,
                  (__int64)Address,
                  &v36,
                  v40,
                  v42,
                  (unsigned __int64)&v50 & -(__int64)(a6 != 0));
          v26 = v30;
          v35 = v30;
          if ( v30 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v28, v30);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v28);
            *v44 = Handle;
            if ( a4 )
            {
              *(__m128i *)a4 = v45;
              *(_OWORD *)(a4 + 16) = v46;
              *(_OWORD *)(a4 + 32) = v47;
            }
            if ( a6 )
            {
              *(_OWORD *)a6 = v50;
              *(_QWORD *)(a6 + 16) = v51;
            }
            if ( v48 )
              *v48 = v36;
            if ( v49 )
              *v49 = *(_DWORD *)&v25[17].Version;
          }
        }
      }
      HalPutDmaAdapter(v25);
      if ( v40 )
        AlpcpDereferenceBlobEx(v40);
      if ( v26 )
        NtClose(Handle);
    }
  }
LABEL_61:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v35;
}
