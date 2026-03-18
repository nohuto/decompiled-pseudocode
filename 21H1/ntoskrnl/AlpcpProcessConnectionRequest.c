/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1406468E8
 * Callers:
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x14060B170 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x14060CC70 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x14060CE80 (AlpcpReadMessageData.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140611C74 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x1406467DC (AlpcpProbeMessageAttributes.c)
 *     AlpcpFormatConnectionRequest @ 0x140648CA8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14064A6D4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CAB5C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x1408BF300 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408BF368 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1408BF3D8 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        PLARGE_INTEGER a7,
        char a8)
{
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r12
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v15; // rcx
  __int64 result; // rax
  ULONG_PTR v17; // r13
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // esi
  ULONG_PTR v21; // rdi
  int v22; // edx
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // r13
  char *v26; // rdx
  __int16 v27; // ax
  __int16 v28; // cx
  unsigned __int64 v29; // r13
  int v30; // [rsp+50h] [rbp-B8h]
  int v31[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+98h] [rbp-70h]
  int v38[16]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+118h] [rbp+10h]
  unsigned int v41; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset(v38, 0, sizeof(v38));
  *(_QWORD *)v31 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v30 = 0;
  v33 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, &v35, a2);
    }
    v12 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v33 = *(_QWORD *)v15;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v30 = AlpcpProbeMessageAttributes(a2, a6, 1);
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a7;
      v34 = *(_QWORD *)v12;
      a7 = (PLARGE_INTEGER)&v34;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v35 = *(_OWORD *)a3;
      v36 = *(_OWORD *)(a3 + 16);
      v37 = *(_QWORD *)(a3 + 32);
    }
    if ( a4 )
      v33 = *a4;
    v13 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v30 = *a6;
  }
  result = AlpcpFormatConnectionRequest(v31, a2, v11, a3, &v35, a5, 0LL, 0LL, 0, a8);
  if ( (int)result < 0 )
    return result;
  v17 = *(_QWORD *)v31;
  v40 = *(_DWORD *)(*(_QWORD *)v31 + 264LL);
  if ( AlpcpLogEnabled )
    AlpcpLogConnectRequest(*(_QWORD *)v31);
  *(_QWORD *)v38 = v11;
  *(_QWORD *)&v38[2] = v17;
  v38[12] = a2;
  v18 = AlpcpDispatchConnectionRequest(v38);
  if ( (v18 & 0x80000000) != 0 )
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectFail(v40, v18);
    AlpcpUnlockMessage(v17);
    return v18;
  }
  if ( (a2 & 0x20000) == 0 )
    return v18;
  if ( (a2 & 0x100000) == 0 )
    PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v31 = 0LL;
  v19 = AlpcpReceiveSynchronousReply((__int64 *)v38, PreviousMode, (ULONG_PTR *)v31, v30, a7);
  v20 = v19;
  if ( v19 )
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectFail(v40, v19);
    if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
      return (unsigned int)-1073741759;
  }
  else
  {
    if ( AlpcpLogEnabled )
      AlpcpLogConnectSuccess(v40);
    v21 = *(_QWORD *)v31;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v31 + 240LL);
    v23 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v23 = 40;
    v24 = (unsigned int)(v22 + v23);
    v41 = v24;
    if ( a4 )
    {
      v29 = (unsigned int)v24;
      if ( (unsigned int)v24 > v33 )
      {
        AlpcpUnlockMessage(*(ULONG_PTR *)v31);
        *a4 = v29;
        return 3221225507LL;
      }
    }
    if ( a3 )
    {
      v32 = 0;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a3 = v22;
        v32 = v22 + 24;
        *(_WORD *)(a3 + 2) = v22 + 24;
        v27 = *(_WORD *)(v21 + 246);
        if ( v27 )
          *(_WORD *)(a3 + 6) = v27 - 16;
        else
          *(_WORD *)(a3 + 6) = 0;
        v28 = *(_WORD *)(v21 + 244) | 0x1000;
        *(_WORD *)(a3 + 4) = v28;
        *(_DWORD *)(a3 + 8) = *(_DWORD *)(v21 + 248);
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v21 + 256);
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(v21 + 264);
        *(_DWORD *)(a3 + 20) = *(_DWORD *)(v21 + 272);
        *(_DWORD *)(a3 + 20) = *(_DWORD *)(v21 + 272);
        v25 = a1;
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *(_WORD *)(a3 + 4) = v28 & 0xC00F;
        v26 = (char *)(a3 + 24);
      }
      else
      {
        *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v31 + 240LL);
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v21 + 256);
        *(_QWORD *)(a3 + 32) = *(_QWORD *)(v21 + 272);
        v25 = a1;
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *(_WORD *)(a3 + 4) &= 0xC00Fu;
        v32 = *(unsigned __int16 *)(a3 + 2);
        v26 = (char *)(a3 + 40);
      }
      if ( *(_QWORD *)(v21 + 176) )
        AlpcpGetDataFromUserVaSafe(v21, v26);
      else
        AlpcpReadMessageData(v21, v26);
      v24 = v41;
    }
    else
    {
      v25 = a1;
    }
    if ( a4 )
      *a4 = v24;
    if ( v13 )
      AlpcpExposeAttributes(v25, a2, v21, v30, v13);
    AlpcpUnlockMessage(v21);
  }
  return v20;
}
