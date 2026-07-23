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

NTSTATUS __cdecl NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID RequiredServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
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
  PSID v22; // rdi
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
  NTSTATUS v34; // [rsp+64h] [rbp-164h]
  ULONG v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  PHANDLE v43; // [rsp+A8h] [rbp-120h]
  __m128i v44; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-108h]
  __int128 v46; // [rsp+D0h] [rbp-F8h]
  PULONG v47; // [rsp+E0h] [rbp-E8h]
  PULONG v48; // [rsp+E8h] [rbp-E0h]
  _REMOTE_PORT_VIEW v49; // [rsp+F0h] [rbp-D8h] BYREF
  _OWORD v50[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+128h] [rbp-A0h]
  __int64 v52[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v53; // [rsp+170h] [rbp-58h] BYREF
  int v54; // [rsp+178h] [rbp-50h]

  v41 = (__int64)PortName;
  v43 = PortHandle;
  v48 = MaxMessageLength;
  Address = ConnectionInformation;
  v47 = ConnectionInformationLength;
  DmaAdapter = 0LL;
  memset(v52, 0, sizeof(v52));
  Handle = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  v35 = 0;
  v53 = 0LL;
  v54 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(&v49, 0, sizeof(v49));
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v35 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v44 = *(__m128i *)&ClientView->Length;
      v45 = *(_OWORD *)&ClientView->SectionOffset;
      v46 = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v53 = *(_QWORD *)&SecurityQos->Length;
      v54 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v36 = (__int64)RequiredServerSid;
    goto LABEL_39;
  }
  v14 = (__int64)v43;
  if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( ConnectionInformationLength )
  {
    v15 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v35 = *(_DWORD *)v15;
    ProbeForWrite(Address, v35, 1u);
    PreviousMode = v33;
  }
  if ( ClientView )
  {
    v16 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v44 = *(__m128i *)v16;
    v45 = *(_OWORD *)(v16 + 16);
    v46 = *(_OWORD *)(v16 + 32);
    if ( _mm_cvtsi128_si32(v44) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      goto LABEL_37;
    v17 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v17 = *(_BYTE *)v17;
    *(_BYTE *)(v17 + 47) = *(_BYTE *)(v17 + 47);
  }
  if ( !ServerView )
    goto LABEL_24;
  v18 = (__int64)ServerView;
  if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
    v18 = 0x7FFFFFFF0000LL;
  if ( *(_DWORD *)v18 != 24 )
  {
    v34 = -1073741811;
    goto LABEL_61;
  }
  if ( ((unsigned __int8)ServerView & 3) != 0 )
LABEL_37:
    ExRaiseDatatypeMisalignment();
  v19 = (__int64)ServerView;
  if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
    v19 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v19 = *(_BYTE *)v19;
  *(_BYTE *)(v19 + 23) = *(_BYTE *)(v19 + 23);
LABEL_24:
  if ( MaxMessageLength )
  {
    v20 = (__int64)MaxMessageLength;
    if ( (unsigned __int64)MaxMessageLength >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  if ( SecurityQos )
  {
    v21 = (__int64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v53 = *(_QWORD *)v21;
    v54 = *(_DWORD *)(v21 + 8);
  }
  v36 = (__int64)RequiredServerSid;
  if ( !RequiredServerSid
    || (v34 = SeCaptureSid((char *)RequiredServerSid, PreviousMode, 0x7FFFFFFF0000LL, v11, v31, 1, (PSID *)&v36),
        v34 >= 0) )
  {
LABEL_39:
    v32 = (unsigned __int64)&v53 & -(__int64)(SecurityQos != 0LL);
    v22 = (PSID)v36;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &DmaAdapter, 0, v41, 0LL, 0LL, 0LL, 0LL, v36, v32, 1);
    v34 = v23;
    if ( v22 != RequiredServerSid )
      SeReleaseSid(v22, v33, 1);
    if ( v23 >= 0 )
    {
      LOWORD(v50[0]) = v35;
      v41 = (unsigned __int64)&v44 & -(__int64)(ClientView != 0LL);
      v24 = DmaAdapter;
      v25 = AlpcpFormatConnectionRequest(
              &v42,
              0,
              (__int64)DmaAdapter,
              (__int64)Address,
              (unsigned __int16 *)v50,
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
        v52[0] = (__int64)v24;
        v52[1] = v26;
        LODWORD(v52[6]) = 0x20000;
        v28 = AlpcpDispatchConnectionRequest(v52);
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
                  (unsigned int)v52,
                  (_DWORD)Address,
                  (unsigned int)&v35,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(ServerView != 0LL));
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
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v44;
              *(_OWORD *)&ClientView->SectionOffset = v45;
              *(_OWORD *)&ClientView->ViewBase = v46;
            }
            if ( ServerView )
              *ServerView = v49;
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
  return v34;
}
