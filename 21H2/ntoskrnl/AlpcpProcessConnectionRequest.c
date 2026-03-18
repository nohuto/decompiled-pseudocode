/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x140667A4C
 * Callers:
 *     AlpcpConnectPort @ 0x140666D1C (AlpcpConnectPort.c)
 * Callees:
 *     Feature_2404731194__private_IsEnabled @ 0x1404190B0 (Feature_2404731194__private_IsEnabled.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140663C48 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x140666BAC (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpDispatchConnectionRequest @ 0x140667F24 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeMessageAttributes @ 0x140668570 (AlpcpProbeMessageAttributes.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x1407A7B20 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407AD8F0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1407F58C4 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x140967A0C (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140967A74 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140967AE4 (AlpcpLogConnectSuccess.c)
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
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r12
  char PreviousMode; // bl
  ULONG_PTR v18; // r13
  int v19; // edx
  unsigned int v20; // r14d
  ULONG_PTR v21; // rcx
  unsigned int v22; // eax
  ULONG_PTR v23; // rbx
  int v24; // edx
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int16 v28; // ax
  __int16 v29; // dx
  int v30; // r13d
  unsigned __int64 v31; // rdx
  int v32; // [rsp+50h] [rbp-B8h]
  int v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  int v40[16]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v42; // [rsp+118h] [rbp+10h]
  unsigned int v43; // [rsp+118h] [rbp+10h]

  v11 = a1;
  memset(v40, 0, sizeof(v40));
  *(_QWORD *)v33 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v32 = 0;
  v35 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v37, a2);
    }
    v14 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v35 = *(_QWORD *)v15;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
    v16 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
    {
      LOBYTE(v12) = 1;
      v32 = AlpcpProbeMessageAttributes(a2, a6, v12);
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a7;
      v36 = *(_QWORD *)v14;
      a7 = (PLARGE_INTEGER)&v36;
    }
    v11 = a1;
  }
  else
  {
    if ( a3 )
    {
      v37 = *(_OWORD *)a3;
      v38 = *(_OWORD *)(a3 + 16);
      v39 = *(_QWORD *)(a3 + 32);
    }
    if ( a4 )
      v35 = *a4;
    v16 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v32 = *a6;
  }
  result = AlpcpFormatConnectionRequest(v33, a2, v11, a3, &v37, a5, 0LL, 0LL, 0, a8);
  if ( (int)result >= 0 )
  {
    v18 = *(_QWORD *)v33;
    v42 = *(_DWORD *)(*(_QWORD *)v33 + 264LL);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(*(_QWORD *)v33);
    *(_QWORD *)v40 = v11;
    *(_QWORD *)&v40[2] = v18;
    v40[12] = a2;
    v20 = AlpcpDispatchConnectionRequest(v40);
    if ( (v20 & 0x80000000) == 0 )
    {
      if ( (a2 & 0x20000) == 0 )
        return v20;
      if ( (a2 & 0x100000) == 0 )
      {
        if ( (unsigned int)Feature_2404731194__private_IsEnabled() && (a2 & 0x2000000) != 0 && (a2 & 2) != 0 )
          PreviousMode = 0;
        else
          PreviousMode = KeGetCurrentThread()->PreviousMode;
      }
      *(_QWORD *)v33 = 0LL;
      LOBYTE(v19) = PreviousMode;
      v22 = AlpcpReceiveSynchronousReply((int)v40, v19, (int)v33, v32, a7);
      v20 = v22;
      if ( v22 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v42, v22);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
        return v20;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogConnectSuccess(v42);
      v23 = *(_QWORD *)v33;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v33 + 240LL);
      v25 = 24;
      if ( (a2 & 0xC0000000) != 0x80000000 )
        v25 = 40;
      v26 = (unsigned int)(v24 + v25);
      v43 = v26;
      if ( a4 )
      {
        v27 = (unsigned int)v26;
        if ( (unsigned int)v26 > v35 )
        {
          AlpcpUnlockMessage(*(ULONG_PTR *)v33);
          *a4 = v27;
          return 3221225507LL;
        }
      }
      if ( a3 )
      {
        v34 = 0;
        if ( (a2 & 0xC0000000) == 0x80000000 )
        {
          *(_WORD *)a3 = v24;
          v34 = *(unsigned __int16 *)(v23 + 240) + 24;
          *(_WORD *)(a3 + 2) = v34;
          v28 = *(_WORD *)(v23 + 246);
          if ( v28 )
            *(_WORD *)(a3 + 6) = v28 - 16;
          else
            *(_WORD *)(a3 + 6) = 0;
          v29 = *(_WORD *)(v23 + 244) | 0x1000;
          *(_WORD *)(a3 + 4) = v29;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(v23 + 248);
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(v23 + 256);
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(v23 + 264);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v23 + 272);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v23 + 272);
          v30 = a1;
          if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
            *(_WORD *)(a3 + 4) = v29 & 0xC00F;
          v31 = a3 + 24;
        }
        else
        {
          *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v33 + 240LL);
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v23 + 256);
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v23 + 272);
          v30 = a1;
          if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
            *(_WORD *)(a3 + 4) = *(_WORD *)(v23 + 244) & 0xC00F;
          v34 = *(unsigned __int16 *)(v23 + 242);
          v31 = a3 + 40;
        }
        if ( *(_QWORD *)(v23 + 176) )
          AlpcpGetDataFromUserVaSafe(v23, v31);
        else
          AlpcpReadMessageData(v23, v31);
        v26 = v43;
      }
      else
      {
        v30 = a1;
      }
      if ( a4 )
        *a4 = v26;
      if ( v16 )
        AlpcpExposeAttributes(v30, a2, v23, v32, v16);
      v21 = v23;
    }
    else
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v42, v20);
      v21 = v18;
    }
    AlpcpUnlockMessage(v21);
    return v20;
  }
  return result;
}
