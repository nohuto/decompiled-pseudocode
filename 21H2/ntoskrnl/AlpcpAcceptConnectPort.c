/*
 * XREFs of AlpcpAcceptConnectPort @ 0x1406D079C
 * Callers:
 *     NtAcceptConnectPort @ 0x140617590 (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x1406CF120 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsDereferencePrimaryToken @ 0x140613740 (PsDereferencePrimaryToken.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1406CF9E4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406D00EC (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1406D0264 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x1406D04F8 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1406D0684 (AlpcpCreatePort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1406D06E8 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpDispatchMessage @ 0x1406D0764 (AlpcpDispatchMessage.c)
 *     AlpcpValidateConnectionMessage @ 0x1406D12F4 (AlpcpValidateConnectionMessage.c)
 *     AlpcpFlushResourcesPort @ 0x1406D196C (AlpcpFlushResourcesPort.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpReleaseAttributes @ 0x1406D3150 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407704B0 (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        void *a6,
        unsigned __int64 a7,
        __int64 a8,
        char a9,
        _BYTE *a10,
        _OWORD *a11,
        char a12)
{
  _BYTE *v14; // r9
  BOOL v15; // r15d
  KPROCESSOR_MODE PreviousMode; // cl
  int v17; // edx
  __int64 v18; // rcx
  char v19; // r10
  _BYTE *v20; // rax
  _BYTE *v21; // rax
  NTSTATUS result; // eax
  _BYTE *v23; // rcx
  _DWORD *v24; // rax
  _BYTE *v25; // rcx
  int v26; // r8d
  int inserted; // ebx
  ULONG_PTR v28; // rsi
  __int64 v29; // r8
  int v30; // r14d
  int v31; // r13d
  _BYTE *v32; // rdx
  __int64 v33; // r15
  PVOID *v34; // rbx
  signed __int64 *v35; // rsi
  bool v36; // bl
  void **v37; // rax
  _KPROCESS *Process; // rcx
  __int64 v39; // r15
  int v40; // eax
  _DWORD *v41; // r14
  ULONG_PTR v42; // r13
  _QWORD *v43; // r14
  int v44; // ecx
  unsigned int v45; // r14d
  _BYTE *v46; // r12
  __int64 v47; // rcx
  __int64 v48; // rcx
  HANDLE v49; // r14
  HANDLE v50; // rcx
  _OWORD *v51; // rax
  void *v52; // r12
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-248h]
  PVOID PrimaryToken; // [rsp+50h] [rbp-238h]
  _BYTE *v55; // [rsp+58h] [rbp-230h]
  ULONG_PTR v56; // [rsp+60h] [rbp-228h] BYREF
  PVOID v57; // [rsp+68h] [rbp-220h] BYREF
  int v58; // [rsp+70h] [rbp-218h]
  int v59; // [rsp+74h] [rbp-214h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-210h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-200h]
  PVOID Object; // [rsp+90h] [rbp-1F8h] BYREF
  _QWORD *v63; // [rsp+98h] [rbp-1F0h]
  PVOID v64; // [rsp+A0h] [rbp-1E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-1E0h]
  __int128 v66; // [rsp+B0h] [rbp-1D8h] BYREF
  __int128 v67; // [rsp+C0h] [rbp-1C8h]
  __int64 v68; // [rsp+D0h] [rbp-1B8h]
  __int64 v69; // [rsp+D8h] [rbp-1B0h]
  _BYTE *v70; // [rsp+E0h] [rbp-1A8h]
  __int64 v71; // [rsp+E8h] [rbp-1A0h]
  _OWORD *v72; // [rsp+F0h] [rbp-198h]
  __m128i v73; // [rsp+F8h] [rbp-190h] BYREF
  __int128 v74; // [rsp+108h] [rbp-180h]
  __int128 v75; // [rsp+118h] [rbp-170h]
  __int128 v76; // [rsp+128h] [rbp-160h]
  __int64 v77; // [rsp+138h] [rbp-150h]
  __int128 v78; // [rsp+140h] [rbp-148h]
  __int64 v79; // [rsp+150h] [rbp-138h]
  _OWORD v80[5]; // [rsp+160h] [rbp-128h] BYREF
  _QWORD v81[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  _OWORD v82[5]; // [rsp+1F0h] [rbp-98h] BYREF

  v69 = a4;
  v58 = a2;
  v63 = (_QWORD *)a1;
  v61 = a7;
  v71 = a8;
  v70 = a10;
  v72 = a11;
  memset(v81, 0, sizeof(v81));
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  memset(v82, 0, 0x48uLL);
  memset(v80, 0, 0x48uLL);
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v57 = 0LL;
  PrimaryToken = 0LL;
  v64 = 0LL;
  v15 = 0;
  v56 = 0LL;
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    if ( a12 || a9 )
    {
      v17 = v58;
      v18 = a1;
      if ( v58 >= 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v18 = *(_QWORD *)v18;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
    }
    else
    {
      v17 = v58;
    }
    AlpcpProbeAndCaptureMessageHeader(v61, (__int64)&v66, v17);
    if ( a5 )
    {
      v20 = (_BYTE *)a5;
      if ( a5 >= (unsigned __int64)v14 )
        v20 = v14;
      v82[0] = *(_OWORD *)v20;
      v82[1] = *((_OWORD *)v20 + 1);
      v82[2] = *((_OWORD *)v20 + 2);
      v82[3] = *((_OWORD *)v20 + 3);
      *(_QWORD *)&v82[4] = *((_QWORD *)v20 + 8);
    }
    if ( a10 )
    {
      v21 = a10;
      if ( a10 >= v14 )
        v21 = v14;
      v73 = *(__m128i *)v21;
      v74 = *((_OWORD *)v21 + 1);
      v75 = *((_OWORD *)v21 + 2);
      if ( _mm_cvtsi128_si32(v73) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = a10;
      if ( a10 >= v14 )
        v23 = v14;
      *v23 = *v23;
      v23[47] = v23[47];
    }
    if ( a11 )
    {
      v24 = a11;
      if ( a11 >= (_OWORD *)v14 )
        v24 = v14;
      if ( *v24 != 24 )
        return -1073741811;
      if ( ((unsigned __int8)a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = a11;
      if ( a11 >= (_OWORD *)v14 )
        v25 = v14;
      *v25 = *v25;
      v25[23] = v25[23];
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v82[0] = *(_OWORD *)a5;
      v82[1] = *(_OWORD *)(a5 + 16);
      v82[2] = *(_OWORD *)(a5 + 32);
      v82[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v82[4] = *(_QWORD *)(a5 + 64);
    }
    v66 = *(_OWORD *)v61;
    v67 = *(_OWORD *)(v61 + 16);
    v68 = *(_QWORD *)(v61 + 32);
    v19 = a12;
  }
  if ( !DWORD2(v67) )
    return -1073741281;
  v55 = 0LL;
  if ( a3 )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v55 = Object;
    PrimaryToken = Object;
    if ( result < 0 )
      return result;
    v64 = Object;
    v26 = v68;
  }
  else
  {
    if ( !v19 )
      return -1073741504;
    v26 = 0;
    LODWORD(v68) = 0;
  }
  inserted = AlpcpLookupMessage((_DWORD)v55, DWORD2(v67), v26, (_DWORD)v14, (__int64)&v56);
  v59 = inserted;
  v28 = v56;
  if ( inserted < 0 )
    goto LABEL_125;
  if ( !v55 )
    v55 = *(_BYTE **)(v56 + 16);
  v29 = *(unsigned int *)(v56 + 40);
  if ( (v29 & 0x80u) != 0LL )
  {
    inserted = -1073740029;
LABEL_50:
    v30 = 1;
    v31 = 0;
    goto LABEL_126;
  }
  if ( (*(unsigned __int16 *)(v56 + 244) & 0xFFFF00FF) != 0xA )
  {
    inserted = -1073741281;
LABEL_125:
    v30 = 0;
    v31 = 0;
    goto LABEL_126;
  }
  v32 = *(_BYTE **)(v56 + 16);
  if ( v32 != *(_BYTE **)(v56 + 192) )
    goto LABEL_123;
  if ( v32 == v55 )
  {
LABEL_69:
    if ( (*(_DWORD *)(v56 + 40) & 7) != 3 || (v29 & 0x2000) != 0 )
      goto LABEL_123;
    v36 = 1;
    goto LABEL_72;
  }
  if ( (v29 & 7) != 0 )
  {
    if ( (v55[416] & 6) != 6 )
      goto LABEL_123;
    v37 = (void **)*((_QWORD *)v55 + 2);
    if ( !v37 || *v37 != v32 )
      goto LABEL_123;
    goto LABEL_69;
  }
  v33 = *(_QWORD *)(v56 + 24);
  if ( !v33 )
  {
LABEL_123:
    inserted = -1073740030;
    goto LABEL_124;
  }
  v34 = *(PVOID **)(v33 + 16);
  v35 = (signed __int64 *)(v34 - 2);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v34 - 2), 0LL);
  if ( ((*(_DWORD *)(v33 + 416) >> 1) & 3) == 2 )
    v36 = *v34 == v55 || v34[1] == v55;
  else
    v36 = v34[2] == v55;
  if ( _InterlockedCompareExchange64(v35, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v35);
  KeAbPostRelease((ULONG_PTR)v35);
  v28 = v56;
LABEL_72:
  if ( !v36 )
    goto LABEL_123;
  LOBYTE(v29) = a12;
  inserted = AlpcpValidateConnectionMessage(v55, &v66, v29);
  v59 = inserted;
  if ( inserted < 0 )
  {
LABEL_124:
    v15 = 0;
    goto LABEL_125;
  }
  v39 = *(_QWORD *)(v28 + 24);
  BugCheckParameter2 = *(_QWORD *)(v39 + 16);
  if ( (*(_DWORD *)(v39 + 416) & 0x20) != 0 )
  {
    inserted = -1073741769;
    v15 = 0;
    goto LABEL_50;
  }
  if ( (*((_DWORD *)v55 + 64) & 0x100000) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v28 = v56;
    if ( Process != *((_KPROCESS **)v55 + 3) )
    {
      inserted = -1073741281;
      goto LABEL_124;
    }
  }
  if ( !a9 )
  {
    ExAcquirePushLockExclusiveEx(v39 + 352, 0LL);
    v40 = *(_DWORD *)(v39 + 416) | 0x10;
    *(_DWORD *)(v39 + 416) = v40;
    if ( (v40 & 0x100) != 0 )
      *(_QWORD *)(v39 + 56) = a6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v39 + 352);
    KeAbPostRelease(v39 + 352);
    v30 = 1;
    inserted = 0;
    v28 = v56;
    v15 = 0;
    v31 = 0;
    goto LABEL_126;
  }
  LOBYTE(Process) = AccessMode;
  inserted = AlpcpCreatePort((int)Process, v69, &v57);
  if ( inserted < 0 )
    goto LABEL_124;
  v41 = v57;
  inserted = AlpcpInitializePort((__int64)v57, 3, 0);
  if ( inserted < 0 )
    goto LABEL_124;
  inserted = AlpcpValidateAndSetPortAttributes(
               (__int64)v41,
               (_QWORD *)((unsigned __int64)v82 & ((unsigned __int128)-(__int128)a5 >> 64)),
               (__int64)v55,
               0LL,
               0,
               0,
               a12);
  v59 = inserted;
  if ( inserted < 0 )
    goto LABEL_124;
  AlpcpSetOwnerProcessPort((__int64)v41, (_DWORD *)((unsigned __int64)v82 & -(__int64)(a5 != 0)));
  if ( a12 )
    v41[104] |= 0x1000u;
  v42 = BugCheckParameter2;
  AlpcpReferenceBlob(BugCheckParameter2);
  ExAcquirePushLockExclusiveEx(v42 - 16, 0LL);
  v43 = v57;
  *((_QWORD *)v57 + 2) = v42;
  *(_QWORD *)(v42 + 8) = v43;
  *(_QWORD *)(v39 + 424) = v55;
  *(_QWORD *)(v39 + 432) = v43;
  v43[53] = v39;
  v43[54] = v39;
  v44 = *(_DWORD *)(v39 + 416);
  if ( (v44 & 0x1000) != 0 && (v43[52] & 0x1000) != 0 )
  {
    *(_DWORD *)(v39 + 416) = v44 | 0x2000;
    *((_DWORD *)v43 + 104) |= 0x2000u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v42 - 16);
  KeAbPostRelease(v42 - 16);
  WORD2(v81[6]) = v66 + 40;
  *(_DWORD *)((char *)&v81[6] + 6) = 11;
  v45 = v58;
  v28 = v56;
  inserted = AlpcpSetupMessageDataForDeferredCopy(v56, v61, v58, v66, 0, AccessMode);
  if ( inserted < 0 )
    goto LABEL_124;
  if ( a12 )
  {
    if ( *(_QWORD *)(v28 + 144) )
    {
      inserted = AlpcpMapLegacyPortRemoteView(v57);
      if ( inserted < 0 )
        goto LABEL_124;
    }
  }
  v31 = 1;
  v46 = v70;
  if ( v70 )
  {
    v78 = 0LL;
    v79 = 0LL;
    inserted = AlpcpMapLegacyPortView(v57, (__int64)&v73, (__int64)v80);
    if ( inserted >= 0 )
    {
      inserted = AlpcpMapLegacyPortRemoteView((PVOID)v39);
      if ( inserted >= 0 )
        *((_QWORD *)&v75 + 1) = v79;
    }
  }
  else
  {
    inserted = AlpcpCaptureAttributes(v55, v45, v71, v28, v80);
  }
  if ( inserted >= 0 )
  {
    ObfReferenceObject(v57);
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)v57, 0LL, 0, 0LL, (__int64)Handle);
    if ( inserted >= 0 )
    {
      AlpcpReleaseAttributes(v28 + 104);
      *(_OWORD *)(v28 + 104) = v80[0];
      *(_OWORD *)(v28 + 120) = v80[1];
      *(_OWORD *)(v28 + 136) = v80[2];
      *(_OWORD *)(v28 + 152) = v80[3];
      *(_QWORD *)(v28 + 168) = *(_QWORD *)&v80[4];
      v31 = 0;
      v47 = *(_QWORD *)(v28 + 208);
      if ( v47 )
      {
        PsReleaseProcessWakeCounter(v47);
        *(_QWORD *)(v28 + 208) = 0LL;
      }
      v48 = *(_QWORD *)(v28 + 216);
      if ( v48 )
      {
        PsReleaseProcessWakeCounter(v48);
        *(_QWORD *)(v28 + 216) = 0LL;
      }
      v49 = Handle[0];
      if ( v58 >= 0 )
        *v63 = Handle[0];
      else
        *(_DWORD *)v63 = Handle[0];
      v50 = a6;
      if ( !a6 )
        v50 = v49;
      *((_QWORD *)v57 + 7) = v50;
      if ( v46 )
      {
        *(__m128i *)v46 = v73;
        *((_OWORD *)v46 + 1) = v74;
        *((_OWORD *)v46 + 2) = v75;
      }
      v51 = v72;
      if ( v72 )
      {
        *v72 = v76;
        *((_QWORD *)v51 + 2) = v77;
      }
      v81[0] = v57;
      v81[1] = v28;
      LODWORD(v81[6]) = 0x10000;
      inserted = AlpcpDispatchMessage((__int64)v81);
      v59 = inserted;
      if ( inserted >= 0 )
        v49 = 0LL;
      Handle[0] = v49;
      v28 = 0LL;
      v56 = 0LL;
      v15 = 0;
      v30 = 0;
      v52 = PrimaryToken;
      goto LABEL_127;
    }
  }
  v15 = 0;
  v30 = 0;
LABEL_126:
  v52 = PrimaryToken;
LABEL_127:
  if ( v28 )
  {
    if ( v31 )
      AlpcpReleaseAttributes(v80);
    v15 = v31 != 0;
    if ( v30 )
      AlpcpCancelMessage(v55, v28, 0x10000LL);
    else
      AlpcpUnlockMessage(v28);
  }
  if ( v52 )
    PsDereferencePrimaryToken(v52);
  if ( v57 )
  {
    if ( v15 )
      AlpcpFlushResourcesPort(v57);
    PsDereferencePrimaryToken(v57);
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return inserted;
}
