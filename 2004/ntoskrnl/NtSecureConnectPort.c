/*
 * XREFs of NtSecureConnectPort @ 0x14062E280
 * Callers:
 *     NtConnectPort @ 0x14062E980 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x14088E3A0 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140628AF0 (SeReleaseSid.c)
 *     AlpcpFormatConnectionRequest @ 0x14062B0F8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14062CBDC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14062E850 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpLogConnectFail @ 0x1408C0650 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C06B8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C0728 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall NtSecureConnectPort(
        HANDLE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char *Src,
        unsigned __int64 a6,
        unsigned __int64 a7,
        volatile void *a8,
        unsigned int *a9)
{
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // dl
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rdi
  int v23; // r15d
  PADAPTER_OBJECT v24; // r13
  int v25; // edi
  ULONG_PTR v26; // r15
  unsigned int v27; // r12d
  int v28; // eax
  unsigned int v29; // eax
  int v31; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v32; // [rsp+48h] [rbp-180h]
  char v33; // [rsp+60h] [rbp-168h]
  int v34; // [rsp+64h] [rbp-164h]
  unsigned int v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  HANDLE *v43; // [rsp+A8h] [rbp-120h]
  __m128i v44; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-108h]
  __int128 v46; // [rsp+D0h] [rbp-F8h]
  unsigned int *v47; // [rsp+E0h] [rbp-E8h]
  _DWORD *v48; // [rsp+E8h] [rbp-E0h]
  __int128 v49; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+100h] [rbp-C8h]
  _OWORD v51[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+128h] [rbp-A0h]
  __int64 v53[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v54; // [rsp+170h] [rbp-58h] BYREF
  int v55; // [rsp+178h] [rbp-50h]

  v41 = a2;
  v43 = a1;
  v48 = (_DWORD *)a7;
  Address = a8;
  v47 = a9;
  DmaAdapter = 0LL;
  memset(v53, 0, sizeof(v53));
  Handle = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v35 = 0;
  v54 = 0LL;
  v55 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v49 = 0LL;
  v50 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( a9 )
      v35 = *a9;
    if ( a4 )
    {
      v44 = *(__m128i *)a4;
      v45 = *(_OWORD *)(a4 + 16);
      v46 = *(_OWORD *)(a4 + 32);
    }
    if ( a3 )
    {
      v54 = *(_QWORD *)a3;
      v55 = *(_DWORD *)(a3 + 8);
    }
    v36 = (__int64)Src;
    goto LABEL_39;
  }
  v14 = (__int64)v43;
  if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( a9 )
  {
    v15 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v35 = *(_DWORD *)v15;
    ProbeForWrite(Address, v35, 1u);
    PreviousMode = v33;
  }
  if ( a4 )
  {
    v16 = a4;
    if ( a4 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v44 = *(__m128i *)v16;
    v45 = *(_OWORD *)(v16 + 16);
    v46 = *(_OWORD *)(v16 + 32);
    if ( _mm_cvtsi128_si32(v44) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_61;
    }
    if ( (a4 & 3) != 0 )
      goto LABEL_37;
    v17 = a4;
    if ( a4 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v17 = *(_BYTE *)v17;
    *(_BYTE *)(v17 + 47) = *(_BYTE *)(v17 + 47);
  }
  if ( !a6 )
    goto LABEL_24;
  v18 = a6;
  if ( a6 >= 0x7FFFFFFF0000LL )
    v18 = 0x7FFFFFFF0000LL;
  if ( *(_DWORD *)v18 != 24 )
  {
    v34 = -1073741811;
    goto LABEL_61;
  }
  if ( (a6 & 3) != 0 )
LABEL_37:
    ExRaiseDatatypeMisalignment();
  v19 = a6;
  if ( a6 >= 0x7FFFFFFF0000LL )
    v19 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v19 = *(_BYTE *)v19;
  *(_BYTE *)(v19 + 23) = *(_BYTE *)(v19 + 23);
LABEL_24:
  if ( a7 )
  {
    v20 = a7;
    if ( a7 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  if ( a3 )
  {
    v21 = a3;
    if ( a3 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v54 = *(_QWORD *)v21;
    v55 = *(_DWORD *)(v21 + 8);
  }
  v36 = (__int64)Src;
  if ( !Src || (v34 = SeCaptureSid(Src, PreviousMode, 0x7FFFFFFF0000LL, v11, v31, 1, (PSID *)&v36), v34 >= 0) )
  {
LABEL_39:
    v32 = (unsigned __int64)&v54 & -(__int64)(a3 != 0);
    v22 = (char *)v36;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &DmaAdapter, 0, v41, 0LL, 0LL, 0LL, 0LL, v36, v32, 1);
    v34 = v23;
    if ( v22 != Src )
      SeReleaseSid(v22, v33, 1);
    if ( v23 >= 0 )
    {
      LOWORD(v51[0]) = v35;
      v41 = (unsigned __int64)&v44 & -(__int64)(a4 != 0);
      v24 = DmaAdapter;
      v25 = AlpcpFormatConnectionRequest(
              &v42,
              0,
              (__int64)DmaAdapter,
              (__int64)Address,
              (unsigned __int16 *)v51,
              0LL,
              v41,
              &BugCheckParameter2,
              1,
              v33);
      v34 = v25;
      if ( v25 >= 0 )
      {
        v26 = v42;
        v27 = *(_DWORD *)(v42 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v42);
        v53[0] = (__int64)v24;
        v53[1] = v26;
        LODWORD(v53[6]) = 0x20000;
        v28 = AlpcpDispatchConnectionRequest(v53);
        v25 = v28;
        v34 = v28;
        if ( v28 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v27, (unsigned int)v28);
          AlpcpUnlockMessage(v26);
        }
        else
        {
          v29 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v53,
                  (_DWORD)Address,
                  (unsigned int)&v35,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(a6 != 0));
          v25 = v29;
          v34 = v29;
          if ( v29 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v27, v29);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v27);
            *v43 = Handle;
            if ( a4 )
            {
              *(__m128i *)a4 = v44;
              *(_OWORD *)(a4 + 16) = v45;
              *(_OWORD *)(a4 + 32) = v46;
            }
            if ( a6 )
            {
              *(_OWORD *)a6 = v49;
              *(_QWORD *)(a6 + 16) = v50;
            }
            if ( v47 )
              *v47 = v35;
            if ( v48 )
              *v48 = *(_DWORD *)&v24[17].Version;
          }
        }
      }
      HalPutDmaAdapter(v24);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2);
      if ( v25 )
        NtClose(Handle);
    }
  }
LABEL_61:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v34;
}
