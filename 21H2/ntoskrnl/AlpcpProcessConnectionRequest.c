/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1406CE428
 * Callers:
 *     AlpcpConnectPort @ 0x1406CED1C (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpProbeMessageAttributes @ 0x1406CE178 (AlpcpProbeMessageAttributes.c)
 *     AlpcpDispatchConnectionRequest @ 0x1406CE8C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1406CF9E4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpFormatConnectionRequest @ 0x1406CFA9C (AlpcpFormatConnectionRequest.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D31BC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406D6CC0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406DA378 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpLogConnectFail @ 0x1408C3DB0 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408C3E18 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408C3E88 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        PLARGE_INTEGER a7,
        char a8)
{
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r12
  char PreviousMode; // si
  __int64 v15; // rcx
  __int64 result; // rax
  ULONG_PTR v17; // r13
  int v18; // edx
  unsigned int v19; // edi
  unsigned int v20; // eax
  unsigned int v21; // esi
  ULONG_PTR v22; // rdi
  int v23; // edx
  int v24; // eax
  unsigned __int64 v25; // rax
  int v26; // r13d
  __int64 v27; // rdx
  __int16 v28; // ax
  __int16 v29; // cx
  unsigned __int64 v30; // r13
  int v31; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  int v39[16]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v41; // [rsp+118h] [rbp+10h]
  unsigned int v42; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset(v39, 0, sizeof(v39));
  BugCheckParameter2 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v31 = 0;
  v34 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, &v36, a2);
    }
    v12 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v34 = *(_QWORD *)v15;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v31 = AlpcpProbeMessageAttributes(a2, a6, 1);
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a7;
      v35 = *(_QWORD *)v12;
      a7 = (PLARGE_INTEGER)&v35;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v36 = *a3;
      v37 = a3[1];
      v38 = *((_QWORD *)a3 + 4);
    }
    if ( a4 )
      v34 = *a4;
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v31 = *a6;
  }
  result = AlpcpFormatConnectionRequest(
             (unsigned int)&BugCheckParameter2,
             a2,
             v11,
             (_DWORD)a3,
             (__int64)&v36,
             a5,
             0LL,
             0LL,
             0,
             a8);
  if ( (int)result < 0 )
    return result;
  v17 = BugCheckParameter2;
  v41 = *(_DWORD *)(BugCheckParameter2 + 264);
  if ( AlpcpLogEnabled )
    AlpcpLogConnectRequest(BugCheckParameter2);
  *(_QWORD *)v39 = v11;
  *(_QWORD *)&v39[2] = v17;
  v39[12] = a2;
  v19 = AlpcpDispatchConnectionRequest(v39);
  if ( (v19 & 0x80000000) != 0 )
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectFail(v41, v19);
    AlpcpUnlockMessage(v17);
    return v19;
  }
  if ( (a2 & 0x20000) == 0 )
    return v19;
  if ( (a2 & 0x100000) == 0 )
    PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2 = 0LL;
  LOBYTE(v18) = PreviousMode;
  v20 = AlpcpReceiveSynchronousReply((int)v39, v18, (int)&BugCheckParameter2, v31, a7);
  v21 = v20;
  if ( v20 )
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectFail(v41, v20);
    if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
      return (unsigned int)-1073741759;
  }
  else
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectSuccess(v41);
    v22 = BugCheckParameter2;
    v23 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v24 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v24 = 40;
    v25 = (unsigned int)(v23 + v24);
    v42 = v25;
    if ( a4 )
    {
      v30 = (unsigned int)v25;
      if ( (unsigned int)v25 > v34 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        *a4 = v30;
        return 3221225507LL;
      }
    }
    if ( a3 )
    {
      v33 = 0;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a3 = v23;
        v33 = *(unsigned __int16 *)(v22 + 240) + 24;
        *((_WORD *)a3 + 1) = v33;
        v28 = *(_WORD *)(v22 + 246);
        if ( v28 )
          *((_WORD *)a3 + 3) = v28 - 16;
        else
          *((_WORD *)a3 + 3) = 0;
        v29 = *(_WORD *)(v22 + 244) | 0x1000;
        *((_WORD *)a3 + 2) = v29;
        *((_DWORD *)a3 + 2) = *(_DWORD *)(v22 + 248);
        *((_DWORD *)a3 + 3) = *(_DWORD *)(v22 + 256);
        *((_DWORD *)a3 + 4) = *(_DWORD *)(v22 + 264);
        *((_DWORD *)a3 + 5) = *(_DWORD *)(v22 + 272);
        *((_DWORD *)a3 + 5) = *(_DWORD *)(v22 + 272);
        v26 = a1;
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *((_WORD *)a3 + 2) = v29 & 0xC00F;
        v27 = (__int64)a3 + 24;
      }
      else
      {
        *a3 = *(_OWORD *)(BugCheckParameter2 + 240);
        a3[1] = *(_OWORD *)(v22 + 256);
        *((_QWORD *)a3 + 4) = *(_QWORD *)(v22 + 272);
        v26 = a1;
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *((_WORD *)a3 + 2) &= 0xC00Fu;
        v33 = *(unsigned __int16 *)(v22 + 242);
        v27 = (__int64)a3 + 40;
      }
      if ( *(_QWORD *)(v22 + 176) )
        AlpcpGetDataFromUserVaSafe(v22, v27);
      else
        AlpcpReadMessageData(v22, v27);
      v25 = v42;
    }
    else
    {
      v26 = a1;
    }
    if ( a4 )
      *a4 = v25;
    if ( v13 )
      AlpcpExposeAttributes(v26, a2, v22, v31, v13);
    AlpcpUnlockMessage(v22);
  }
  return v21;
}
