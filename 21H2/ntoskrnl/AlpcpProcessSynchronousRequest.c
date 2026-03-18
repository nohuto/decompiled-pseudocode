/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1407AD040
 * Callers:
 *     NtRequestWaitReplyPort @ 0x140663B40 (NtRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x1406CE2B0 (LpcSendWaitReceivePort.c)
 *     NtAlpcSendWaitReceivePort @ 0x1407AC6B0 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x140965F28 (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x140966120 (NtReplyWaitReplyPort.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcMessageCleanupProcedure @ 0x1406A1CC0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406C9174 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1406D8084 (AlpcpExposeCapturedContextAttribute.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x1407A7B20 (AlpcpReadMessageData.c)
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407AD8F0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1407F58C4 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140966A1C (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140966A84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  int v10; // r15d
  unsigned __int8 v11; // di
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int *v18; // rax
  ULONG v19; // r10d
  ULONG v20; // eax
  ULONG v21; // ecx
  ULONG v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  int v30; // ecx
  void **v31; // r15
  void *v32; // r12
  int v34; // eax
  int PreviousMode; // edx
  unsigned int v36; // edi
  ULONG_PTR v37; // rdi
  int v38; // edx
  int v39; // eax
  unsigned __int64 v40; // rax
  __int16 v41; // ax
  __int16 v42; // cx
  char *v43; // rdx
  void *v44; // rcx
  __int64 v45; // rsi
  size_t v46; // rsi
  size_t v47; // rax
  const void *v48; // rdx
  size_t v49; // r8
  signed __int64 v50; // rax
  int v51; // ecx
  ULONG_PTR v52; // rsi
  char v53; // dl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v55; // r15
  union _SLIST_HEADER *v56; // rcx
  void *v57; // rcx
  int v58; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-E0h] BYREF
  char v60; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v61; // [rsp+48h] [rbp-D0h]
  unsigned int v62; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+58h] [rbp-C0h]
  __int64 v64; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+68h] [rbp-B0h]
  __int64 v66; // [rsp+70h] [rbp-A8h] BYREF
  int v67[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v68; // [rsp+88h] [rbp-90h]
  __int128 v69; // [rsp+90h] [rbp-88h]
  __int128 v70; // [rsp+A0h] [rbp-78h]
  int v71; // [rsp+B0h] [rbp-68h]
  __int64 v72; // [rsp+B4h] [rbp-64h]
  int v73; // [rsp+BCh] [rbp-5Ch]
  _OWORD v74[5]; // [rsp+C0h] [rbp-58h] BYREF
  int v78; // [rsp+160h] [rbp+48h]

  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v66 = 0LL;
  v10 = 0;
  v58 = 0;
  v63 = -1LL;
  v11 = a9;
  if ( a9 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a8;
      v66 = *(_QWORD *)v13;
      a8 = (LARGE_INTEGER *)&v66;
    }
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v14 = a5;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v15 = a5;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    if ( a6 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a6;
      v63 = *(_QWORD *)v16;
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a6;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    if ( Address )
    {
      v60 = 1;
      v18 = (int *)0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v18 = Address;
      v10 = *v18;
      v19 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v10 < 0 )
          v19 = 20;
        v20 = v19 + 16;
        if ( (v10 & 0x40000000) == 0 )
          v20 = v19;
        v21 = v20 + 20;
        if ( (v10 & 0x20000000) == 0 )
          v21 = v20;
        v22 = v21 + 16;
        if ( (v10 & 0x10000000) == 0 )
          v22 = v21;
        v23 = (v10 & 0x8000000) == 0;
        v24 = v22 + 24;
        v19 = 4;
      }
      else
      {
        v25 = 8;
        if ( v10 < 0 )
          v25 = 32;
        v26 = v25 + 32;
        if ( (v10 & 0x40000000) == 0 )
          v26 = v25;
        v27 = v26 + 32;
        if ( (v10 & 0x20000000) == 0 )
          v27 = v26;
        v28 = v27 + 24;
        if ( (v10 & 0x10000000) == 0 )
          v28 = v27;
        v22 = v28 + 24;
        if ( (v10 & 0x8000000) == 0 )
          v22 = v28;
        v23 = (v10 & 0x4000000) == 0;
        v24 = v22 + 8;
      }
      if ( v23 )
        v24 = v22;
      v29 = v24 + 8;
      if ( (v10 & 0x2000000) == 0 )
        v29 = v24;
      if ( (unsigned __int64)(v29 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v29, v19);
        v58 = v10;
      }
      else
      {
        if ( ((v19 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
          v12 = (__int64)Address;
        *(_BYTE *)v12 = *(_BYTE *)v12;
        *(_BYTE *)((unsigned int)v29 + v12 - 1) = *(_BYTE *)((unsigned int)v29 + v12 - 1);
        v58 = v10;
      }
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    if ( a6 )
      v63 = *a6;
    if ( Address )
    {
      v10 = *Address;
      v58 = *Address;
    }
  }
  v30 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v32 = (void *)a1;
    v64 = a1;
    goto LABEL_70;
  }
  v31 = *(void ***)(a1 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v31 - 2), 0LL);
  v32 = *v31;
  v64 = (__int64)v32;
  if ( v32 && ObReferenceObjectSafe((__int64)v32) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v31 - 2);
    KeAbPostRelease((ULONG_PTR)(v31 - 2));
    v30 = *(_DWORD *)(a1 + 416);
    v10 = v58;
    v11 = a9;
LABEL_70:
    *(_QWORD *)v67 = a1;
    v71 = a2;
    if ( (v30 & 0x1000) != 0 )
      v34 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v67, a3, v11);
    else
      v34 = AlpcpSendMessage((__int64)v67, (__m256i *)a3, a4, v11);
    v36 = v34;
    if ( v34 < 0 )
      goto LABEL_138;
    if ( (a2 & 0x100000) != 0 )
    {
      LOBYTE(PreviousMode) = 1;
    }
    else
    {
      PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
      v10 = v58;
    }
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v67 = v32;
    v36 = AlpcpReceiveSynchronousReply((int)v67, PreviousMode, (int)&BugCheckParameter2, v10, a8);
    v78 = v36;
    if ( v36 )
      goto LABEL_138;
    v37 = BugCheckParameter2;
    v38 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v39 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v39 = 40;
    v40 = (unsigned int)(v38 + v39);
    v62 = v40;
    if ( a6 )
    {
      v61 = v40;
      if ( v40 > v63 )
      {
        memset(v74, 0, 32);
        v78 = AlpcpReturnMessageOnInsufficientBuffer((__int64)v32, (_QWORD *)BugCheckParameter2, v74);
        if ( v78 == -1073741789 )
        {
          AlpcpUnlockMessage(v37);
          *a6 = v61;
          AlpcpExposeCapturedContextAttribute(a2, v74, v10, (__int64)Address);
          v36 = -1073741789;
LABEL_138:
          if ( v32 != (void *)a1 )
            ObfDereferenceObject(v32);
          return v36;
        }
        AlpcpCancelMessage((__int64)v32, v37, 0x10000);
LABEL_137:
        v36 = v78;
        goto LABEL_138;
      }
    }
    LODWORD(v61) = 0;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      *(_WORD *)a5 = v38;
      LODWORD(v61) = *(unsigned __int16 *)(v37 + 240) + 24;
      *(_WORD *)(a5 + 2) = v61;
      v41 = *(_WORD *)(v37 + 246);
      if ( v41 )
        *(_WORD *)(a5 + 6) = v41 - 16;
      else
        *(_WORD *)(a5 + 6) = 0;
      v42 = *(_WORD *)(v37 + 244) | 0x1000;
      *(_WORD *)(a5 + 4) = v42;
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v37 + 248);
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(v37 + 256);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v37 + 264);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = v42 & 0xC00F;
      v43 = (char *)(a5 + 24);
      if ( *(_QWORD *)(v37 + 176) )
        AlpcpGetDataFromUserVaSafe(v37, v43);
      else
        AlpcpReadMessageData(v37, v43);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v37 + 256);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v37 + 272);
      if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
        *(_WORD *)(a5 + 4) = *(_WORD *)(v37 + 244) & 0xC00F;
      LODWORD(v61) = *(unsigned __int16 *)(v37 + 242);
      v44 = (void *)(a5 + 40);
      v65 = a5 + 40;
      if ( *(_QWORD *)(v37 + 176) )
      {
        AlpcpGetDataFromUserVaSafe(v37, a5 + 40);
      }
      else
      {
        v45 = *(_QWORD *)(v37 + 96);
        if ( v45 )
          v46 = *(_QWORD *)(v45 + 32) - 40LL;
        else
          v46 = 512LL;
        v47 = *(unsigned __int16 *)(v37 + 240);
        v61 = v47;
        v48 = (const void *)(v37 + 280);
        if ( v47 > v46 )
        {
          memmove(v44, v48, v46);
          v49 = v61 - v46;
          v44 = (void *)(v46 + v65);
          v48 = *(const void **)(v37 + 224);
        }
        else
        {
          v49 = (unsigned int)v47;
        }
        memmove(v44, v48, v49);
      }
    }
    if ( a6 )
      *a6 = v62;
    if ( Address )
      AlpcpExposeAttributes(a1, a2, v37, v10, (__int64)Address);
    if ( (*(_DWORD *)(v37 + 40) & 0x200) != 0 && !*(_QWORD *)(v37 + 96) && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
    {
      v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v37, 0LL);
      v37 = BugCheckParameter2;
      if ( !v50 )
      {
        ++*(_WORD *)(BugCheckParameter2 - 30);
        AlpcMessageCleanupProcedure(v37);
        if ( !AlpcpMessageLogEnabled )
        {
LABEL_117:
          v51 = 0;
          v52 = v37 - 48;
          v53 = *(_BYTE *)(v37 - 48 + 16);
          if ( (v53 & 1) != 0 )
          {
            v51 = 0x10000 - *(__int16 *)(v52 + 18);
            *(_BYTE *)(v52 + 16) = v53 & 0xFE;
            *(_WORD *)(v52 + 18) = 0;
          }
          if ( v51 > 0 )
          {
            BugCheckParameter4 = -v51 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 24), -v51);
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
              v55 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v52 + 17)];
              (*(void (__fastcall **)(ULONG_PTR))(v55 + 24))(BugCheckParameter2);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v37 - 16);
              KeAbPostRelease(v37 - 16);
              if ( (*(int (__fastcall **)(ULONG_PTR))(v55 + 40))(BugCheckParameter2) >= 0 )
              {
                if ( (*(_BYTE *)(v52 + 16) & 2) != 0 )
                {
                  v56 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v55 + 8);
                  ++*((_DWORD *)&v56[1].HeaderX64 + 3);
                  if ( LOWORD(v56->Alignment) < LOWORD(v56[1].Alignment) )
                  {
                    RtlpInterlockedPushEntrySList(v56, (PSLIST_ENTRY)(v37 - 48));
                  }
                  else
                  {
                    ++LODWORD(v56[2].Alignment);
                    ((void (__fastcall *)(ULONG_PTR))v56[3].Region)(v37 - 48);
                  }
                }
                else
                {
                  v57 = (void *)(v37 - 48);
                  if ( *(_QWORD *)(v55 + 48) )
                    (*((void (__fastcall **)(void *))&AlpcpLookasides
                     + 16 * (unsigned __int64)*(unsigned int *)(v55 + 8)
                     + 7))(v57);
                  else
                    ExFreePoolWithTag(v57, *(_DWORD *)(v55 + 4));
                }
              }
              v37 = 0LL;
            }
          }
          if ( v37 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v52 + 32);
            KeAbPostRelease(v52 + 32);
          }
          goto LABEL_137;
        }
        AlpcpEnterFreeEventMessageLog(v37);
      }
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v37);
    goto LABEL_117;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v31 - 2);
  KeAbPostRelease((ULONG_PTR)(v31 - 2));
  return 3221225527LL;
}
