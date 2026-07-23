/*
 * XREFs of NtSecureConnectPort @ 0x1406CD3F0
 * Callers:
 *     NtConnectPort @ 0x1406CD270 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x140891620 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CD2C0 (AlpcpReceiveLegacyConnectionReply.c)
 *     SeCaptureSid @ 0x1406CDBCC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406CDCD0 (SeReleaseSid.c)
 *     AlpcpDispatchConnectionRequest @ 0x1406CE8C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x1406CFA9C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1406CFCAC (AlpcpCreateClientPort.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpLogConnectFail @ 0x1408C3DB0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C3E18 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C3E88 (AlpcpLogConnectSuccess.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  PSID v23; // rdi
  int ClientPort; // r15d
  PADAPTER_OBJECT v25; // r13
  int v26; // edi
  __int64 v27; // r15
  unsigned int v28; // r12d
  int v29; // eax
  unsigned int v30; // eax
  int v32; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v33; // [rsp+48h] [rbp-180h]
  char v34; // [rsp+60h] [rbp-168h]
  NTSTATUS v35; // [rsp+64h] [rbp-164h]
  ULONG v36; // [rsp+68h] [rbp-160h] BYREF
  __int64 v37; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR v40; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  __int64 v42; // [rsp+98h] [rbp-130h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-128h] BYREF
  PHANDLE v44; // [rsp+A8h] [rbp-120h]
  __m128i v45; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-108h]
  __int128 v47; // [rsp+D0h] [rbp-F8h]
  PULONG v48; // [rsp+E0h] [rbp-E8h]
  PULONG v49; // [rsp+E8h] [rbp-E0h]
  _REMOTE_PORT_VIEW v50; // [rsp+F0h] [rbp-D8h] BYREF
  _OWORD v51[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+128h] [rbp-A0h]
  __int64 v53[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v54; // [rsp+170h] [rbp-58h] BYREF
  int v55; // [rsp+178h] [rbp-50h]

  v42 = (__int64)PortName;
  v44 = PortHandle;
  v49 = MaxMessageLength;
  Address = ConnectionInformation;
  v48 = ConnectionInformationLength;
  DmaAdapter = 0LL;
  memset(v53, 0, sizeof(v53));
  Handle = 0LL;
  v37 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v36 = 0;
  v54 = 0LL;
  v55 = 0;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(&v50, 0, sizeof(v50));
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  LOBYTE(v13) = KeGetCurrentThread()->PreviousMode;
  v34 = v13;
  if ( !(_BYTE)v13 )
  {
    if ( ConnectionInformationLength )
      v36 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v45 = *(__m128i *)&ClientView->Length;
      v46 = *(_OWORD *)&ClientView->SectionOffset;
      v47 = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v54 = *(_QWORD *)&SecurityQos->Length;
      v55 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v37 = (__int64)RequiredServerSid;
    goto LABEL_39;
  }
  v14 = (__int64)v44;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v44 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( ConnectionInformationLength )
  {
    v16 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v36 = *(_DWORD *)v16;
    ProbeForWrite(Address, v36, 1u);
    LOBYTE(v13) = v34;
    v15 = 0x7FFFFFFF0000LL;
  }
  if ( ClientView )
  {
    v17 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v45 = *(__m128i *)v17;
    v46 = *(_OWORD *)(v17 + 16);
    v47 = *(_OWORD *)(v17 + 32);
    if ( _mm_cvtsi128_si32(v45) != 48 )
    {
      v35 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      goto LABEL_37;
    v18 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v18 = *(_BYTE *)v18;
    *(_BYTE *)(v18 + 47) = *(_BYTE *)(v18 + 47);
  }
  if ( !ServerView )
    goto LABEL_24;
  v19 = (__int64)ServerView;
  if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
    v19 = 0x7FFFFFFF0000LL;
  if ( *(_DWORD *)v19 != 24 )
  {
    v35 = -1073741811;
    goto LABEL_61;
  }
  if ( ((unsigned __int8)ServerView & 3) != 0 )
LABEL_37:
    ExRaiseDatatypeMisalignment();
  v20 = (__int64)ServerView;
  if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
    v20 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v20 = *(_BYTE *)v20;
  *(_BYTE *)(v20 + 23) = *(_BYTE *)(v20 + 23);
LABEL_24:
  if ( MaxMessageLength )
  {
    v21 = (__int64)MaxMessageLength;
    if ( (unsigned __int64)MaxMessageLength >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  if ( SecurityQos )
  {
    v22 = (__int64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    v54 = *(_QWORD *)v22;
    v55 = *(_DWORD *)(v22 + 8);
  }
  v37 = (__int64)RequiredServerSid;
  if ( !RequiredServerSid || (v35 = SeCaptureSid(RequiredServerSid, v32, 1, (__int64)&v37), v35 >= 0) )
  {
LABEL_39:
    v33 = (unsigned __int64)&v54 & -(__int64)(SecurityQos != 0LL);
    v23 = (PSID)v37;
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
    if ( v23 != RequiredServerSid )
    {
      LOBYTE(v15) = 1;
      LOBYTE(v13) = v34;
      SeReleaseSid(v23, v13, v15, v11);
    }
    if ( ClientPort >= 0 )
    {
      LOWORD(v51[0]) = v36;
      v42 = (unsigned __int64)&v45 & -(__int64)(ClientView != 0LL);
      v25 = DmaAdapter;
      v26 = AlpcpFormatConnectionRequest(
              (unsigned int)&BugCheckParameter2,
              0,
              (_DWORD)DmaAdapter,
              (_DWORD)Address,
              (__int64)v51,
              0LL,
              v42,
              (__int64)&v40,
              1,
              v34);
      v35 = v26;
      if ( v26 >= 0 )
      {
        v27 = BugCheckParameter2;
        v28 = *(_DWORD *)(BugCheckParameter2 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(BugCheckParameter2);
        v53[0] = (__int64)v25;
        v53[1] = v27;
        LODWORD(v53[6]) = 0x20000;
        v29 = AlpcpDispatchConnectionRequest(v53);
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
                  v53,
                  (__int64)Address,
                  &v36,
                  v40,
                  v42,
                  (unsigned __int64)&v50 & -(__int64)(ServerView != 0LL));
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
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v45;
              *(_OWORD *)&ClientView->SectionOffset = v46;
              *(_OWORD *)&ClientView->ViewBase = v47;
            }
            if ( ServerView )
              *ServerView = v50;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v15, v11);
  return v35;
}
