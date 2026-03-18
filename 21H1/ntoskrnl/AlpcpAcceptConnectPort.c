/*
 * XREFs of AlpcpAcceptConnectPort @ 0x140648258
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x1406481C0 (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x1406E3410 (NtAcceptConnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpReferenceBlob @ 0x140610770 (AlpcpReferenceBlob.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     AlpcpMapLegacyPortView @ 0x140645420 (AlpcpMapLegacyPortView.c)
 *     AlpcpFlushResourcesPort @ 0x140646F20 (AlpcpFlushResourcesPort.c)
 *     AlpcpValidateConnectionMessage @ 0x140648B40 (AlpcpValidateConnectionMessage.c)
 *     AlpcpDispatchMessage @ 0x140648B88 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x140648BC0 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140648C2C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406492F4 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14064946C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x140649CB8 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x140649E44 (AlpcpCreatePort.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14064A6D4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14075B484 (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int128 *a7,
        int *a8,
        char a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        char a12)
{
  int v13; // edi
  unsigned __int64 v14; // r9
  KPROCESSOR_MODE PreviousMode; // cl
  char v16; // r13
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  _BYTE *v21; // rcx
  unsigned __int64 v22; // rax
  NTSTATUS result; // eax
  _BYTE *v24; // rcx
  struct _DMA_ADAPTER *v25; // rbx
  int v26; // esi
  __int64 v27; // r8
  _KPROCESS *Process; // rcx
  __int64 v29; // r15
  struct _DMA_ADAPTER *v30; // rsi
  unsigned __int64 v31; // r14
  char *v32; // r14
  volatile signed __int64 *v33; // r14
  _QWORD *v34; // rax
  int v35; // ecx
  int v36; // r13d
  ULONG_PTR v37; // rsi
  int inserted; // ebx
  struct _DMA_ADAPTER *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rcx
  HANDLE v42; // rbx
  __int64 v43; // rax
  _OWORD *v44; // rax
  struct _DMA_ADAPTER *v45; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-218h]
  ULONG_PTR v47; // [rsp+48h] [rbp-210h] BYREF
  int v48; // [rsp+50h] [rbp-208h]
  int v49; // [rsp+54h] [rbp-204h]
  PVOID v50; // [rsp+58h] [rbp-200h] BYREF
  struct _DMA_ADAPTER *v51; // [rsp+60h] [rbp-1F8h]
  HANDLE v52; // [rsp+68h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-1E8h]
  __int64 v54; // [rsp+78h] [rbp-1E0h]
  PVOID Object; // [rsp+80h] [rbp-1D8h] BYREF
  _DWORD *v56; // [rsp+88h] [rbp-1D0h]
  __int128 v57; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v58; // [rsp+A0h] [rbp-1B8h]
  __int64 v59; // [rsp+B0h] [rbp-1A8h]
  __int64 v60; // [rsp+B8h] [rbp-1A0h]
  int *v61; // [rsp+C0h] [rbp-198h]
  _OWORD *v62; // [rsp+C8h] [rbp-190h]
  __m128i v63; // [rsp+D0h] [rbp-188h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-178h]
  __int128 v65; // [rsp+F0h] [rbp-168h]
  __int128 v66; // [rsp+100h] [rbp-158h]
  __int64 v67; // [rsp+110h] [rbp-148h]
  __int128 v68; // [rsp+118h] [rbp-140h]
  __int64 v69; // [rsp+128h] [rbp-130h]
  _OWORD v70[5]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD v71[8]; // [rsp+180h] [rbp-D8h] BYREF
  _OWORD v72[5]; // [rsp+1C0h] [rbp-98h] BYREF

  v54 = a4;
  Handle = a3;
  v49 = a2;
  v56 = (_DWORD *)a1;
  v60 = (__int64)a7;
  v61 = a8;
  v62 = (_OWORD *)a11;
  memset(v71, 0, sizeof(v71));
  v13 = 0;
  v50 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(v72, 0, 0x48uLL);
  memset(v70, 0, 0x48uLL);
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v16 = a12;
    if ( a12 || a9 )
    {
      v17 = (unsigned int)v49;
      v18 = a1;
      if ( v49 < 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v18 = *(_QWORD *)v18;
      }
    }
    else
    {
      v17 = (unsigned int)v49;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, &v57, v17);
    if ( a5 )
    {
      v19 = a5;
      if ( a5 >= v14 )
        v19 = v14;
      v72[0] = *(_OWORD *)v19;
      v72[1] = *(_OWORD *)(v19 + 16);
      v72[2] = *(_OWORD *)(v19 + 32);
      v72[3] = *(_OWORD *)(v19 + 48);
      *(_QWORD *)&v72[4] = *(_QWORD *)(v19 + 64);
    }
    if ( a10 )
    {
      v22 = a10;
      if ( a10 >= v14 )
        v22 = v14;
      v63 = *(__m128i *)v22;
      v64 = *(_OWORD *)(v22 + 16);
      v65 = *(_OWORD *)(v22 + 32);
      if ( _mm_cvtsi128_si32(v63) != 48 )
        return -1073741811;
      if ( (a10 & 3) != 0 )
        goto LABEL_34;
      v24 = (_BYTE *)a10;
      if ( a10 >= v14 )
        v24 = (_BYTE *)v14;
      *v24 = *v24;
      v24[47] = v24[47];
    }
    if ( !a11 )
    {
LABEL_35:
      PreviousMode = AccessMode;
      goto LABEL_36;
    }
    v20 = (_DWORD *)a11;
    if ( a11 >= v14 )
      v20 = (_DWORD *)v14;
    if ( *v20 != 24 )
      return -1073741811;
    if ( (a11 & 3) == 0 )
    {
      v21 = (_BYTE *)a11;
      if ( a11 >= v14 )
        v21 = (_BYTE *)v14;
      *v21 = *v21;
      v21[23] = v21[23];
      goto LABEL_35;
    }
LABEL_34:
    ExRaiseDatatypeMisalignment();
  }
  if ( a5 )
  {
    v72[0] = *(_OWORD *)a5;
    v72[1] = *(_OWORD *)(a5 + 16);
    v72[2] = *(_OWORD *)(a5 + 32);
    v72[3] = *(_OWORD *)(a5 + 48);
    *(_QWORD *)&v72[4] = *(_QWORD *)(a5 + 64);
  }
  v57 = *a7;
  v58 = a7[1];
  v59 = *((_QWORD *)a7 + 4);
  v16 = a12;
LABEL_36:
  if ( !DWORD2(v58) )
    return -1073741281;
  v25 = 0LL;
  v51 = 0LL;
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v25 = (struct _DMA_ADAPTER *)Object;
    v51 = (struct _DMA_ADAPTER *)Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v16 )
      return -1073741504;
    LODWORD(v59) = 0;
  }
  v26 = AlpcpLookupMessage((__int64)v25, DWORD2(v58), v59, v14, &v47);
  if ( v26 < 0 )
  {
    if ( v25 )
      HalPutDmaAdapter(v25);
    return v26;
  }
  if ( v25 )
  {
    HalPutDmaAdapter(v25);
  }
  else
  {
    v25 = *(struct _DMA_ADAPTER **)(v47 + 16);
    v51 = v25;
  }
  if ( (*(_DWORD *)(v47 + 40) & 0x80u) != 0 )
  {
    v13 = -1073740029;
    goto LABEL_97;
  }
  if ( (*(unsigned __int16 *)(v47 + 244) & 0xFFFF00FF) != 0xA )
    goto LABEL_103;
  LOBYTE(v27) = v16;
  v26 = AlpcpValidateConnectionMessage(v25, &v57, v27);
  v48 = v26;
  if ( v26 >= 0 )
  {
    v29 = *(_QWORD *)(v47 + 24);
    Handle = *(HANDLE *)(v29 + 16);
    if ( (*(_DWORD *)(v29 + 416) & 0x20) != 0 )
    {
      v13 = -1073741769;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)&v25[16].Version & 0x100000) != 0
      || (Process = KeGetCurrentThread()->ApcState.Process, v25 = v51, Process == (_KPROCESS *)v51[1].DmaOperations) )
    {
      if ( a9 )
      {
        LOBYTE(Process) = AccessMode;
        v26 = AlpcpCreatePort(Process, v54, &v50);
        if ( v26 >= 0 )
        {
          v30 = (struct _DMA_ADAPTER *)v50;
          LODWORD(v54) = AlpcpInitializePort(v50, 3LL);
          if ( (int)v54 < 0 )
          {
            AlpcpUnlockMessage(v47);
            HalPutDmaAdapter(v30);
            return v54;
          }
          v31 = (unsigned __int64)v72 & -(__int64)(a5 != 0);
          v48 = AlpcpValidateAndSetPortAttributes((_DWORD)v30, v31, (_DWORD)v25, 0, 0, 0, v16);
          if ( v48 < 0 )
          {
            AlpcpUnlockMessage(v47);
            HalPutDmaAdapter(v30);
            return v48;
          }
          AlpcpSetOwnerProcessPort(v30, v31);
          if ( v16 )
            *(_DWORD *)&v30[26].Version |= 0x1000u;
          v32 = (char *)Handle;
          AlpcpReferenceBlob((ULONG_PTR)Handle);
          v33 = (volatile signed __int64 *)(v32 - 16);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v33, 0LL);
          v34 = Handle;
          *(_QWORD *)&v30[1].Version = Handle;
          v34[1] = v30;
          *(_QWORD *)(v29 + 424) = v25;
          *(_QWORD *)(v29 + 432) = v30;
          v30[26].DmaOperations = (_DMA_OPERATIONS *)v29;
          *(_QWORD *)&v30[27].Version = v29;
          v35 = *(_DWORD *)(v29 + 416);
          if ( (v35 & 0x1000) != 0 && (*(_DWORD *)&v30[26].Version & 0x1000) != 0 )
          {
            *(_DWORD *)(v29 + 416) = v35 | 0x2000;
            *(_DWORD *)&v30[26].Version |= 0x2000u;
          }
          if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v33);
          KeAbPostRelease((ULONG_PTR)v33);
          WORD2(v71[6]) = v57 + 40;
          *(_DWORD *)((char *)&v71[6] + 6) = 11;
          v36 = v49;
          v37 = v47;
          inserted = AlpcpSetupMessageDataForDeferredCopy(v47, v60, v49, (unsigned __int16)v57, 0, AccessMode);
          if ( inserted < 0 )
          {
            AlpcpUnlockMessage(v37);
            v45 = (struct _DMA_ADAPTER *)v50;
LABEL_109:
            HalPutDmaAdapter(v45);
            return inserted;
          }
          if ( a12 && *(_QWORD *)(v37 + 144) )
          {
            v39 = (struct _DMA_ADAPTER *)v50;
            inserted = AlpcpMapLegacyPortRemoteView(v50);
            if ( inserted < 0 )
            {
              AlpcpUnlockMessage(v37);
LABEL_108:
              v45 = v39;
              goto LABEL_109;
            }
          }
          else
          {
            v39 = (struct _DMA_ADAPTER *)v50;
          }
          if ( a10 )
          {
            v68 = 0LL;
            v69 = 0LL;
            inserted = AlpcpMapLegacyPortView((char *)v39, (__int64)&v63, (__int64)v70);
            if ( inserted >= 0 )
            {
              inserted = AlpcpMapLegacyPortRemoteView((PVOID)v29);
              if ( inserted >= 0 )
                *((_QWORD *)&v65 + 1) = v69;
            }
          }
          else
          {
            inserted = AlpcpCaptureAttributes((__int64)v51, v36, v61, v37, v70);
          }
          if ( inserted < 0
            || (ObfReferenceObject(v39), inserted = ObInsertObjectEx(v39, 0LL, 0x1F0001u, 0, 0, 0LL, &v52), inserted < 0) )
          {
            AlpcpReleaseAttributes(v70);
            AlpcpUnlockMessage(v37);
            AlpcpFlushResourcesPort((__int64)v39);
            goto LABEL_108;
          }
          AlpcpReleaseAttributes(v37 + 104);
          *(_OWORD *)(v37 + 104) = v70[0];
          *(_OWORD *)(v37 + 120) = v70[1];
          *(_OWORD *)(v37 + 136) = v70[2];
          *(_OWORD *)(v37 + 152) = v70[3];
          *(_QWORD *)(v37 + 168) = *(_QWORD *)&v70[4];
          v40 = *(_QWORD *)(v37 + 208);
          if ( v40 )
          {
            PsReleaseProcessWakeCounter(v40, *(unsigned int *)(v37 + 264));
            *(_QWORD *)(v37 + 208) = 0LL;
          }
          v41 = *(_QWORD *)(v37 + 216);
          if ( v41 )
          {
            PsReleaseProcessWakeCounter(v41, *(unsigned int *)(v37 + 264));
            *(_QWORD *)(v37 + 216) = 0LL;
          }
          v42 = v52;
          if ( v36 < 0 )
            *v56 = (_DWORD)v52;
          else
            *(_QWORD *)v56 = v52;
          v43 = a6;
          if ( !a6 )
            v43 = (__int64)v42;
          v39[3].DmaOperations = (_DMA_OPERATIONS *)v43;
          if ( a10 )
          {
            *(__m128i *)a10 = v63;
            *(_OWORD *)(a10 + 16) = v64;
            *(_OWORD *)(a10 + 32) = v65;
          }
          v44 = v62;
          if ( v62 )
          {
            *v62 = v66;
            *((_QWORD *)v44 + 2) = v67;
          }
          v71[0] = v39;
          v71[1] = v37;
          LODWORD(v71[6]) = 0x10000;
          v26 = AlpcpDispatchMessage(v71);
          v48 = v26;
          v47 = 0LL;
          HalPutDmaAdapter(v39);
          if ( v26 < 0 )
            NtClose(v42);
          return v26;
        }
        goto LABEL_104;
      }
      ExAcquirePushLockExclusiveEx(v29 + 352, 0LL);
      *(_DWORD *)(v29 + 416) |= 0x10u;
      if ( (*(_DWORD *)(v29 + 416) & 0x100) != 0 )
        *(_QWORD *)(v29 + 56) = a6;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v29 + 352);
      KeAbPostRelease(v29 + 352);
      v25 = v51;
LABEL_97:
      AlpcpCancelMessage(v25, v47, 0x10000LL);
      return v13;
    }
LABEL_103:
    v26 = -1073741281;
  }
LABEL_104:
  AlpcpUnlockMessage(v47);
  return v26;
}
