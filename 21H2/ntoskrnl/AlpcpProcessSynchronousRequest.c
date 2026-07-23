/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1406D6640
 * Callers:
 *     NtRequestWaitReplyPort @ 0x1405FB730 (NtRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x14060E670 (LpcSendWaitReceivePort.c)
 *     NtAlpcSendWaitReceivePort @ 0x1406D7150 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1408C20AC (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x1408C22A0 (NtReplyWaitReplyPort.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1405F1EC0 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140605F88 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     AlpcMessageCleanupProcedure @ 0x1406CD9C0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D31BC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406D6CC0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1408C2CCC (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2D34 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9)
{
  int v9; // ebx
  unsigned __int8 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r14d
  ULONG v21; // r9d
  ULONG v22; // eax
  ULONG v23; // ecx
  ULONG v24; // eax
  bool v25; // zf
  unsigned int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  __int64 v31; // rax
  int v32; // ecx
  struct _DMA_ADAPTER **v33; // r15
  struct _DMA_ADAPTER *v34; // r14
  int v36; // eax
  int v37; // edx
  unsigned int v38; // r15d
  unsigned int v39; // ecx
  ULONG_PTR v40; // rbx
  int v41; // edx
  int v42; // eax
  unsigned __int64 v43; // rax
  __int16 v44; // ax
  __int16 v45; // cx
  void *v46; // rdx
  signed __int64 v47; // rax
  int v48; // [rsp+30h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+60h] [rbp-A8h]
  __int64 v54; // [rsp+68h] [rbp-A0h] BYREF
  int v55[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+78h] [rbp-90h]
  __int128 v57; // [rsp+80h] [rbp-88h]
  __int128 v58; // [rsp+90h] [rbp-78h]
  int v59; // [rsp+A0h] [rbp-68h]
  __int64 v60; // [rsp+A4h] [rbp-64h]
  int v61; // [rsp+ACh] [rbp-5Ch]
  _OWORD v62[5]; // [rsp+B0h] [rbp-58h] BYREF

  v9 = a2;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v60 = 0LL;
  v61 = 0;
  v54 = 0LL;
  v48 = 0;
  v51 = -1LL;
  v11 = a9;
  if ( a9 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a8;
      v54 = *(_QWORD *)v13;
      a8 = (LARGE_INTEGER *)&v54;
    }
    v14 = a2 & 0xC0000000;
    if ( v14 == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v15 = a5;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 23) = *(_BYTE *)(v15 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v16 = a5;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 39) = *(_BYTE *)(v16 + 39);
    }
    if ( a6 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a6;
      v51 = *(_QWORD *)v17;
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v18 = (__int64)a6;
      *(_QWORD *)v18 = *(_QWORD *)v18;
    }
    if ( Address )
    {
      v19 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v19 = (__int64)Address;
      v20 = *(_DWORD *)v19;
      v21 = 8;
      if ( v14 == 0x80000000 )
      {
        if ( v20 < 0 )
          v21 = 20;
        v22 = v21 + 16;
        if ( (v20 & 0x40000000) == 0 )
          v22 = v21;
        v23 = v22 + 20;
        if ( (v20 & 0x20000000) == 0 )
          v23 = v22;
        v24 = v23 + 16;
        if ( (v20 & 0x10000000) == 0 )
          v24 = v23;
        v25 = (v20 & 0x8000000) == 0;
        v26 = v24 + 24;
        v21 = 4;
      }
      else
      {
        v27 = 8;
        if ( v20 < 0 )
          v27 = 32;
        v28 = v27 + 32;
        if ( (v20 & 0x40000000) == 0 )
          v28 = v27;
        v29 = v28 + 32;
        if ( (v20 & 0x20000000) == 0 )
          v29 = v28;
        v30 = v29 + 24;
        if ( (v20 & 0x10000000) == 0 )
          v30 = v29;
        v24 = v30 + 24;
        if ( (v20 & 0x8000000) == 0 )
          v24 = v30;
        v25 = (v20 & 0x4000000) == 0;
        v26 = v24 + 8;
      }
      if ( v25 )
        v26 = v24;
      v31 = v26 + 8;
      if ( (v20 & 0x2000000) == 0 )
        v31 = v26;
      if ( (unsigned __int64)(v31 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v31, v21);
      }
      else
      {
        if ( ((v21 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
          v12 = (__int64)Address;
        *(_BYTE *)v12 = *(_BYTE *)v12;
        *(_BYTE *)(v12 + (unsigned int)v31 - 1) = *(_BYTE *)(v12 + (unsigned int)v31 - 1);
      }
      v48 = v20;
    }
  }
  else
  {
    if ( a6 )
      v51 = *a6;
    if ( Address )
      v48 = *Address;
  }
  v32 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v34 = (struct _DMA_ADAPTER *)a1;
    v52 = a1;
    goto LABEL_71;
  }
  v33 = *(struct _DMA_ADAPTER ***)(a1 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v33 - 2), 0LL);
  v34 = *v33;
  v52 = (__int64)v34;
  if ( v34 && ObReferenceObjectSafe((__int64)v34) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v33 - 2);
    KeAbPostRelease((ULONG_PTR)(v33 - 2));
    v32 = *(_DWORD *)(a1 + 416);
    v9 = a2;
    v11 = a9;
LABEL_71:
    *(_QWORD *)v55 = a1;
    v59 = v9;
    if ( (v32 & 0x1000) != 0 )
      v36 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v55, a3, v11);
    else
      v36 = AlpcpSendMessage((__int64)v55, (__m256i *)a3, a4, v11);
    v38 = v36;
    if ( v36 < 0 )
      goto LABEL_115;
    if ( (v9 & 0x100000) != 0 )
    {
      LOBYTE(v37) = 1;
    }
    else if ( (v9 & 0x2000000) != 0 && (v9 & 2) != 0 )
    {
      LOBYTE(v37) = 0;
    }
    else
    {
      v37 = (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
    }
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v55 = v34;
    v38 = AlpcpReceiveSynchronousReply((int)v55, v37, (int)&BugCheckParameter2, v48, a8);
    if ( v38 )
      goto LABEL_115;
    v39 = v9 & 0xC0000000;
    v40 = BugCheckParameter2;
    v41 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v42 = 24;
    if ( v39 != 0x80000000 )
      v42 = 40;
    v43 = (unsigned int)(v41 + v42);
    v50 = v43;
    if ( a6 )
    {
      v53 = v43;
      if ( v43 > v51 )
      {
        memset(v62, 0, 32);
        v38 = AlpcpReturnMessageOnInsufficientBuffer((__int64)v34, (_QWORD *)BugCheckParameter2, v62);
        if ( v38 == -1073741789 )
        {
          AlpcpUnlockMessage(v40);
          *a6 = v53;
          AlpcpExposeCapturedContextAttribute(a2, v62, v48, (__int64)Address);
        }
        else
        {
          AlpcpCancelMessage((__int64)v34, v40, 0x10000);
        }
LABEL_115:
        if ( v34 != (struct _DMA_ADAPTER *)a1 )
          HalPutDmaAdapter(v34);
        return v38;
      }
    }
    if ( v39 == 0x80000000 )
    {
      *(_WORD *)a5 = v41;
      *(_WORD *)(a5 + 2) = *(_WORD *)(v40 + 240) + 24;
      v44 = *(_WORD *)(v40 + 246);
      if ( v44 )
        *(_WORD *)(a5 + 6) = v44 - 16;
      else
        *(_WORD *)(a5 + 6) = 0;
      v45 = *(_WORD *)(v40 + 244) | 0x1000;
      *(_WORD *)(a5 + 4) = v45;
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v40 + 248);
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(v40 + 256);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v40 + 264);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v40 + 272);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v40 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = v45 & 0xC00F;
      v46 = (void *)(a5 + 24);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v40 + 256);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v40 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) &= 0xC00Fu;
      v46 = (void *)(a5 + 40);
    }
    if ( *(_QWORD *)(v40 + 176) )
      AlpcpGetDataFromUserVaSafe(v40, v46);
    else
      AlpcpReadMessageData(v40, v46);
    if ( a6 )
      *a6 = v50;
    if ( Address )
      AlpcpExposeAttributes(a1, a2, v40, v48, (__int64)Address);
    if ( (*(_DWORD *)(v40 + 40) & 0x200) != 0 && !*(_QWORD *)(v40 + 96) && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
    {
      v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v40, 0LL);
      v40 = BugCheckParameter2;
      if ( !v47 )
      {
        ++*(_WORD *)(BugCheckParameter2 - 30);
        AlpcMessageCleanupProcedure(v40);
        if ( !AlpcpMessageLogEnabled )
        {
LABEL_114:
          AlpcpUnlockBlob(v40);
          goto LABEL_115;
        }
        AlpcpEnterFreeEventMessageLog(v40);
      }
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v40);
    goto LABEL_114;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v33 - 2);
  KeAbPostRelease((ULONG_PTR)(v33 - 2));
  return 3221225527LL;
}
