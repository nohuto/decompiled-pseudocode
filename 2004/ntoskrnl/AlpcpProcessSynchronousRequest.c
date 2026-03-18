/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x140684720
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140682950 (NtAlpcSendWaitReceivePort.c)
 *     NtRequestWaitReplyPort @ 0x1406ED800 (NtRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x1406FE950 (LpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1408BE9DC (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x1408BEBD0 (NtReplyWaitReplyPort.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140328360 (ObReferenceObjectSafe.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14062C2F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x14062E160 (AlpcMessageCleanupProcedure.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x1406832E0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x140684DE0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x140684FF0 (AlpcpReadMessageData.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406EBDDC (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406F8D48 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140701AB0 (AlpcpExposeCapturedContextAttribute.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1408BF5FC (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BF664 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9)
{
  int v11; // esi
  unsigned __int8 v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  int *v18; // rbx
  int *v19; // rax
  ULONG v20; // r10d
  int v21; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r8
  ULONG v28; // eax
  ULONG v29; // ecx
  ULONG v30; // r8d
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  unsigned int v34; // r12d
  unsigned int v35; // eax
  ULONG_PTR v36; // rdi
  int v37; // edx
  int v38; // r12d
  unsigned int v39; // r12d
  unsigned __int64 v40; // rdx
  ULONG_PTR v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int16 v45; // ax
  __int16 v46; // cx
  struct _DMA_ADAPTER *v47; // rcx
  signed __int64 v49; // rax
  signed __int64 *v50; // rsi
  __int64 v51; // r12
  int v52; // [rsp+30h] [rbp-E8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-D0h] BYREF
  __int64 *v55; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v56; // [rsp+58h] [rbp-C0h]
  __int64 v57; // [rsp+60h] [rbp-B8h]
  __int64 v58; // [rsp+68h] [rbp-B0h]
  __int64 v59; // [rsp+70h] [rbp-A8h] BYREF
  int v60[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v61; // [rsp+88h] [rbp-90h]
  __int128 v62; // [rsp+90h] [rbp-88h]
  __int128 v63; // [rsp+A0h] [rbp-78h]
  unsigned int v64; // [rsp+B0h] [rbp-68h]
  __int64 v65; // [rsp+B4h] [rbp-64h]
  int v66; // [rsp+BCh] [rbp-5Ch]
  _OWORD v67[5]; // [rsp+C0h] [rbp-58h] BYREF

  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  v66 = 0;
  v59 = 0LL;
  v11 = 0;
  v52 = 0;
  v56 = -1LL;
  v12 = a9;
  if ( a9 )
  {
    v13 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v59 = *(_QWORD *)v13;
      a8 = (LARGE_INTEGER *)&v59;
    }
    v14 = a5;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        goto LABEL_60;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        goto LABEL_60;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 39) = *(_BYTE *)(v14 + 39);
    }
    v15 = a6;
    if ( a6 )
    {
      v16 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      v56 = *(_QWORD *)v16;
      v17 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    v18 = Address;
    if ( Address )
    {
      v19 = Address;
      if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
        v19 = (int *)0x7FFFFFFF0000LL;
      v11 = *v19;
      v20 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v11 < 0 )
          v20 = 20;
        v28 = v20 + 16;
        if ( (v11 & 0x40000000) == 0 )
          v28 = v20;
        v29 = v28 + 20;
        if ( (v11 & 0x20000000) == 0 )
          v29 = v28;
        v30 = v29 + 16;
        if ( (v11 & 0x10000000) == 0 )
          v30 = v29;
        if ( (v11 & 0x8000000) != 0 )
          v30 += 24;
        v26 = v30 + 8;
        if ( (v11 & 0x2000000) == 0 )
          v26 = v30;
        v20 = 4;
      }
      else
      {
        v21 = 8;
        if ( v11 < 0 )
          v21 = 32;
        v22 = v21 + 32;
        if ( (v11 & 0x40000000) == 0 )
          v22 = v21;
        if ( (v11 & 0x20000000) != 0 )
          v22 += 32;
        v23 = v22 + 24;
        if ( (v11 & 0x10000000) == 0 )
          v23 = v22;
        v24 = v23 + 24;
        if ( (v11 & 0x8000000) == 0 )
          v24 = v23;
        v25 = v24 + 8;
        if ( (v11 & 0x4000000) == 0 )
          v25 = v24;
        v26 = v25 + 8;
        if ( (v11 & 0x2000000) == 0 )
          v26 = v25;
      }
      v27 = (__int64)Address;
      if ( (unsigned __int64)(v26 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v26, v20);
        v12 = a9;
LABEL_40:
        v52 = v11;
        goto LABEL_61;
      }
      if ( ((v20 - 1) & (unsigned int)Address) == 0 )
      {
        if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
          v27 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v27 = *(_BYTE *)v27;
        *(_BYTE *)(v27 + (unsigned int)v26 - 1) = *(_BYTE *)(v27 + (unsigned int)v26 - 1);
        goto LABEL_40;
      }
LABEL_60:
      ExRaiseDatatypeMisalignment();
    }
    v11 = 0;
  }
  else
  {
    v15 = a6;
    if ( a6 )
      v56 = *a6;
    v18 = Address;
    if ( Address )
    {
      v11 = *Address;
      v52 = *Address;
    }
  }
LABEL_61:
  v31 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    DmaAdapter = (PADAPTER_OBJECT)a1;
    v57 = a1;
    goto LABEL_63;
  }
  v55 = *(__int64 **)(a1 + 16);
  v50 = v55 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v55 - 2), 0LL);
  v51 = *v55;
  DmaAdapter = (PADAPTER_OBJECT)v51;
  v57 = *v55;
  if ( v51 && ObReferenceObjectSafe(v51) )
  {
    if ( _InterlockedCompareExchange64(v50, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v50);
    KeAbPostRelease((ULONG_PTR)v50);
    v31 = *(_DWORD *)(a1 + 416);
    v11 = v52;
    v12 = a9;
LABEL_63:
    *(_QWORD *)v60 = a1;
    v64 = a2;
    if ( (v31 & 0x1000) != 0 )
      v32 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v60, a3, v12);
    else
      v32 = AlpcpSendMessage(v60, a3, a4, v12);
    v34 = v32;
    if ( v32 < 0 )
      goto LABEL_95;
    if ( (a2 & 0x100000) != 0 )
    {
      LOBYTE(v33) = 1;
    }
    else
    {
      v33 = (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
      v11 = v52;
    }
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v60 = DmaAdapter;
    v34 = AlpcpReceiveSynchronousReply((int)v60, v33, (int)&BugCheckParameter2, v11, a8);
    LODWORD(v55) = v34;
    if ( v34 )
      goto LABEL_95;
    v35 = a2 & 0xC0000000;
    v36 = BugCheckParameter2;
    v37 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v38 = 24;
    if ( v35 != 0x80000000 )
      v38 = 40;
    v39 = v37 + v38;
    if ( v15 )
    {
      v58 = v39;
      if ( v39 > v56 )
      {
        memset(v67, 0, 32);
        v34 = AlpcpReturnMessageOnInsufficientBuffer(DmaAdapter, BugCheckParameter2, v67);
        if ( v34 == -1073741789 )
        {
          AlpcpUnlockMessage(v36);
          *v15 = v58;
          AlpcpExposeCapturedContextAttribute(a2, v67, (unsigned int)v11, v18);
          v47 = DmaAdapter;
          goto LABEL_96;
        }
        AlpcpCancelMessage((__int64)DmaAdapter, v36, 0x10000);
LABEL_95:
        v47 = DmaAdapter;
LABEL_96:
        if ( v47 != (struct _DMA_ADAPTER *)a1 )
          HalPutDmaAdapter(v47);
        return v34;
      }
    }
    if ( v35 == 0x80000000 )
    {
      *(_WORD *)a5 = v37;
      *(_WORD *)(a5 + 2) = *(_WORD *)(v36 + 240) + 24;
      v45 = *(_WORD *)(v36 + 246);
      if ( v45 )
        *(_WORD *)(a5 + 6) = v45 - 16;
      else
        *(_WORD *)(a5 + 6) = 0;
      v46 = *(_WORD *)(v36 + 244) | 0x1000;
      *(_WORD *)(a5 + 4) = v46;
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v36 + 248);
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(v36 + 256);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v36 + 264);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v36 + 272);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v36 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = v46 & 0xC00F;
      v40 = a5 + 24;
      v41 = v36;
      if ( *(_QWORD *)(v36 + 176) )
        goto LABEL_77;
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v36 + 256);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v36 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) &= 0xC00Fu;
      v40 = a5 + 40;
      v41 = v36;
      if ( *(_QWORD *)(v36 + 176) )
      {
LABEL_77:
        AlpcpGetDataFromUserVaSafe(v41, v40);
        goto LABEL_79;
      }
    }
    AlpcpReadMessageData(v41, v40);
LABEL_79:
    if ( v15 )
      *v15 = v39;
    if ( v18 )
      AlpcpExposeAttributes(a1, a2, v36, v11, (__int64)v18);
    v34 = (unsigned int)v55;
    if ( (*(_DWORD *)(v36 + 40) & 0x200) != 0 && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
    {
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v36, 0LL);
      v36 = BugCheckParameter2;
      if ( !v49 )
      {
        ++*(_WORD *)(BugCheckParameter2 - 30);
        AlpcMessageCleanupProcedure(v36);
        if ( !AlpcpMessageLogEnabled )
        {
LABEL_94:
          AlpcpUnlockBlob(v36);
          goto LABEL_95;
        }
        AlpcpEnterFreeEventMessageLog(v36);
      }
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v36, v42, v43, v44);
    goto LABEL_94;
  }
  if ( _InterlockedCompareExchange64(v55 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v55 - 2);
  KeAbPostRelease((ULONG_PTR)(v55 - 2));
  return 3221225527LL;
}
