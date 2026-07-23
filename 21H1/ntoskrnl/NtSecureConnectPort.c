/*
 * XREFs of NtSecureConnectPort @ 0x140645D70
 * Callers:
 *     NtConnectPort @ 0x140645BF0 (NtConnectPort.c)
 *     IopConnectLinkTrackingPort @ 0x14088D080 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140645C40 (AlpcpReceiveLegacyConnectionReply.c)
 *     SeCaptureSid @ 0x1406465B0 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x1406466B4 (SeReleaseSid.c)
 *     AlpcpFormatConnectionRequest @ 0x140648CA8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpLogConnectFail @ 0x1408BF300 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408BF368 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408BF3D8 (AlpcpLogConnectSuccess.c)
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
  ULONG_PTR v27; // r15
  unsigned int v28; // r12d
  int v29; // eax
  unsigned int v30; // eax
  int v32; // [rsp+20h] [rbp-1A8h]
  int v33; // [rsp+40h] [rbp-188h]
  unsigned __int64 v34; // [rsp+48h] [rbp-180h]
  int v35; // [rsp+48h] [rbp-180h]
  char v36; // [rsp+60h] [rbp-168h]
  NTSTATUS v37; // [rsp+64h] [rbp-164h]
  ULONG v38; // [rsp+68h] [rbp-160h] BYREF
  __int64 v39; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  __int64 v44; // [rsp+98h] [rbp-130h]
  ULONG_PTR v45; // [rsp+A0h] [rbp-128h] BYREF
  PHANDLE v46; // [rsp+A8h] [rbp-120h]
  __m128i v47; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-108h]
  __int128 v49; // [rsp+D0h] [rbp-F8h]
  PULONG v50; // [rsp+E0h] [rbp-E8h]
  PULONG v51; // [rsp+E8h] [rbp-E0h]
  _REMOTE_PORT_VIEW v52; // [rsp+F0h] [rbp-D8h] BYREF
  _OWORD v53[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+128h] [rbp-A0h]
  __int64 v55[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v56; // [rsp+170h] [rbp-58h] BYREF
  int v57; // [rsp+178h] [rbp-50h]

  v44 = (__int64)PortName;
  v46 = PortHandle;
  v51 = MaxMessageLength;
  Address = ConnectionInformation;
  v50 = ConnectionInformationLength;
  DmaAdapter = 0LL;
  memset(v55, 0, sizeof(v55));
  Handle = 0LL;
  v39 = 0LL;
  v45 = 0LL;
  memset(v53, 0, sizeof(v53));
  v54 = 0LL;
  v38 = 0;
  v56 = 0LL;
  v57 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(&v52, 0, sizeof(v52));
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  LOBYTE(v13) = KeGetCurrentThread()->PreviousMode;
  v36 = v13;
  if ( !(_BYTE)v13 )
  {
    if ( ConnectionInformationLength )
      v38 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v47 = *(__m128i *)&ClientView->Length;
      v48 = *(_OWORD *)&ClientView->SectionOffset;
      v49 = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v56 = *(_QWORD *)&SecurityQos->Length;
      v57 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v39 = (__int64)RequiredServerSid;
    goto LABEL_39;
  }
  v14 = (__int64)v46;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v46 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( ConnectionInformationLength )
  {
    v16 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v38 = *(_DWORD *)v16;
    ProbeForWrite(Address, v38, 1u);
    LOBYTE(v13) = v36;
    v15 = 0x7FFFFFFF0000LL;
  }
  if ( ClientView )
  {
    v17 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v47 = *(__m128i *)v17;
    v48 = *(_OWORD *)(v17 + 16);
    v49 = *(_OWORD *)(v17 + 32);
    if ( _mm_cvtsi128_si32(v47) != 48 )
    {
      v37 = -1073741811;
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
    v37 = -1073741811;
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
    v56 = *(_QWORD *)v22;
    v57 = *(_DWORD *)(v22 + 8);
  }
  v39 = (__int64)RequiredServerSid;
  if ( !RequiredServerSid || (v37 = SeCaptureSid(RequiredServerSid, v32, 1, (__int64)&v39), v37 >= 0) )
  {
LABEL_39:
    v34 = (unsigned __int64)&v56 & -(__int64)(SecurityQos != 0LL);
    v23 = (PSID)v39;
    ClientPort = AlpcpCreateClientPort(
                   (unsigned int)&Handle,
                   (unsigned int)&DmaAdapter,
                   0,
                   v44,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   v39,
                   v34,
                   1);
    v37 = ClientPort;
    if ( v23 != RequiredServerSid )
    {
      LOBYTE(v15) = 1;
      LOBYTE(v13) = v36;
      SeReleaseSid(v23, v13, v15, v11);
    }
    if ( ClientPort >= 0 )
    {
      LOWORD(v53[0]) = v38;
      v44 = (unsigned __int64)&v47 & -(__int64)(ClientView != 0LL);
      LOBYTE(v35) = v36;
      LOBYTE(v33) = 1;
      v25 = DmaAdapter;
      v26 = AlpcpFormatConnectionRequest(&v45, 0LL, DmaAdapter, Address, v53, 0LL, v44, &BugCheckParameter2, v33, v35);
      v37 = v26;
      if ( v26 >= 0 )
      {
        v27 = v45;
        v28 = *(_DWORD *)(v45 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v45);
        v55[0] = (__int64)v25;
        v55[1] = v27;
        LODWORD(v55[6]) = 0x20000;
        v29 = AlpcpDispatchConnectionRequest(v55);
        v26 = v29;
        v37 = v29;
        if ( v29 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v28, (unsigned int)v29);
          AlpcpUnlockMessage(v27);
        }
        else
        {
          v30 = AlpcpReceiveLegacyConnectionReply(
                  v55,
                  (char *)Address,
                  &v38,
                  BugCheckParameter2,
                  v44,
                  (unsigned __int64)&v52 & -(__int64)(ServerView != 0LL));
          v26 = v30;
          v37 = v30;
          if ( v30 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v28, v30);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v28);
            *v46 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v47;
              *(_OWORD *)&ClientView->SectionOffset = v48;
              *(_OWORD *)&ClientView->ViewBase = v49;
            }
            if ( ServerView )
              *ServerView = v52;
            if ( v50 )
              *v50 = v38;
            if ( v51 )
              *v51 = *(_DWORD *)&v25[17].Version;
          }
        }
      }
      HalPutDmaAdapter(v25);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v26 )
        NtClose(Handle);
    }
  }
LABEL_61:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v15, v11);
  return v37;
}
