/*
 * XREFs of AlpcpSendMessage @ 0x1407A9ED0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReplyPort @ 0x1406651F0 (NtReplyPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     NtRequestPort @ 0x1406CA660 (NtRequestPort.c)
 *     NtReplyWaitReceivePortEx @ 0x1407A76C0 (NtReplyWaitReceivePortEx.c)
 *     LpcRequestPort @ 0x1407A7CB0 (LpcRequestPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x1407AC6B0 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D7014 (AlpcpReleaseViewAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseAttributes @ 0x1407A6660 (AlpcpReleaseAttributes.c)
 *     AlpcpDispatchReplyToPort @ 0x1407A6CE4 (AlpcpDispatchReplyToPort.c)
 *     AlpcpChargePagedPoolQuota @ 0x1407A7464 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureMessageData @ 0x1407A7B98 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateMessage @ 0x1407A7E70 (AlpcpValidateMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407A9A80 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1407AA950 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1407AC250 (PspChargeProcessWakeCounter.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140966950 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x140966E38 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // di
  int v6; // r14d
  __int64 v7; // r12
  unsigned int v8; // r13d
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  int v13; // esi
  bool v14; // cl
  __int16 v15; // bx
  int v16; // r11d
  char v17; // dl
  bool v18; // al
  unsigned __int16 v19; // cx
  __int16 v20; // bx
  PSLIST_ENTRY v21; // rbx
  ULONG_PTR v22; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v24; // ebx
  signed __int32 v25; // eax
  int v26; // ebx
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  _QWORD *v31; // rbx
  bool v32; // di
  bool v33; // zf
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rax
  _OWORD *v36; // r12
  __int64 v37; // rdx
  unsigned __int64 v38; // r13
  unsigned int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rbx
  ULONG_PTR v43; // rcx
  ULONG_PTR v44; // rcx
  ULONG_PTR v45; // rcx
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  __int8 *v48; // rcx
  unsigned __int16 v49; // dx
  __int64 v50; // rax
  unsigned __int16 v51; // [rsp+40h] [rbp-F8h]
  int v52; // [rsp+48h] [rbp-F0h]
  __m256i v53; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+70h] [rbp-C8h]
  ULONG_PTR v55; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v56; // [rsp+80h] [rbp-B8h]
  __int64 v57; // [rsp+88h] [rbp-B0h]
  __int64 v58; // [rsp+90h] [rbp-A8h]
  __m128i v59; // [rsp+98h] [rbp-A0h]
  __int64 v60; // [rsp+A8h] [rbp-90h]
  _OWORD v61[4]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-48h]

  v4 = a4;
  memset(&v53, 0, sizeof(v53));
  v54 = 0LL;
  v6 = 0;
  v55 = 0LL;
  memset(v61, 0, sizeof(v61));
  v62 = 0LL;
  v7 = *(_QWORD *)a1;
  v57 = v7;
  v8 = *(_DWORD *)(a1 + 48);
  v56 = v8;
  v9 = *(_DWORD *)(v7 + 416);
  if ( (v9 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v9 & 8) != 0 )
    return 3221227271LL;
  if ( (v9 & 0x20) != 0 && (*(_DWORD *)(v7 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( (v8 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a2;
      v59 = *(__m128i *)v11;
      v60 = *(_QWORD *)(v11 + 16);
      v12 = _mm_cvtsi128_si32(v59);
      v53.m256i_i16[0] = v12;
      v53.m256i_i16[1] = v12 + 40;
      v53.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v59, 4));
      v53.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v59, 8));
      v53.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v59, 12));
      v13 = v60;
      v53.m256i_i32[6] = v60;
      v54 = HIDWORD(v60);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a2;
      v53 = *(__m256i *)v11;
      v54 = *(_QWORD *)(v11 + 32);
      v13 = v53.m256i_i32[6];
      v12 = v53.m256i_i16[0];
    }
    v51 = v12;
    v14 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
    if ( v12 < (unsigned __int16)(v12 + 40) )
    {
      if ( v14 )
      {
        if ( (unsigned __int64)v12 + 40 <= v53.m256i_u16[1] )
        {
          v53.m256i_i16[1] = v12 + 40;
          goto LABEL_25;
        }
      }
      else if ( v12 + 40LL == v53.m256i_u16[1] )
      {
LABEL_25:
        v15 = v53.m256i_i16[2] & 0x7FFF;
        v53.m256i_i16[2] &= ~0x8000u;
        if ( v53.m256i_i16[3] )
        {
          result = AlpcpValidateDataInformation(a2, &v53);
          if ( (int)result < 0 )
            return result;
        }
        v16 = *(_DWORD *)(v7 + 256);
        v4 = a4;
        goto LABEL_35;
      }
    }
    return 3221225485LL;
  }
  v53 = *a2;
  v54 = a2[1].m256i_i64[0];
  v17 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
  result = AlpcpValidateMessage((unsigned __int16 *)&v53, v17);
  if ( (int)result < 0 )
    return result;
  v13 = v53.m256i_i32[6];
  v15 = v53.m256i_i16[2];
  v51 = v53.m256i_i16[0];
LABEL_35:
  v18 = (v16 & 0x1000) != 0 || (v8 & 2) != 0;
  v19 = (unsigned __int8)v15;
  v20 = v15 & 0xFF00;
  if ( v18 )
  {
    if ( (v8 & 1) != 0 )
    {
      if ( v13 )
      {
        v20 = 0;
        v19 = 2;
LABEL_61:
        v53.m256i_i32[6] = v13;
        if ( !v4 )
          LODWORD(v54) = 0;
        goto LABEL_63;
      }
      return 3221225485LL;
    }
    if ( (v8 & 0x10000) != 0 )
    {
      if ( v19 )
      {
        if ( (unsigned int)v19 - 3 > 3 && v19 != 13 || (v8 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v19 = 3;
      }
    }
    else if ( v19 )
    {
      if ( v19 == 1 )
      {
        if ( !v13 )
          return 3221225485LL;
        goto LABEL_61;
      }
      if ( (unsigned int)v19 - 7 > 2 || (v8 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v19 = 1;
    }
    v13 = 0;
    goto LABEL_61;
  }
  if ( v19 != 7 || v4 )
  {
    if ( v13 <= 0 )
    {
      if ( (v8 & 0x10000) != 0 )
        v19 = 3;
      else
        v19 = 1;
    }
    else
    {
      v19 = ((v8 & 0x10000) != 0) + 1;
    }
  }
  if ( !v13 && *(_OWORD *)&v53.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_63:
  v53.m256i_i16[2] = v19 | v20 & 0xEFFF;
  if ( (unsigned __int64)v53.m256i_u16[1] > *(_QWORD *)(v7 + 272) )
    return 3221225519LL;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v13 = v53.m256i_i32[6];
    v51 = v53.m256i_i16[0];
  }
  if ( v13 )
  {
    v8 |= 0x10u;
    v56 = v8;
    v26 = AlpcpLookupMessage(v7, v13, v54, a4, (__int64)&v55);
    v52 = v26;
    v22 = v55;
    if ( v26 < 0 )
      goto LABEL_123;
    v27 = *(_DWORD *)(v55 + 40);
    if ( (v27 & 0x80u) != 0 )
      goto LABEL_123;
    v28 = *(_QWORD *)(v55 + 24);
    v58 = v28;
    if ( v28 )
    {
      v29 = *(_QWORD *)(v55 + 16);
      if ( v29 == v7 )
      {
        v30 = v27 & 7;
      }
      else
      {
        v30 = v27 & 7;
        if ( (v27 & 7) == 0 )
        {
          v31 = *(_QWORD **)(v28 + 16);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v31 - 2), 0LL);
          if ( ((*(_DWORD *)(v58 + 416) >> 1) & 3) == 2 )
            v32 = *v31 == v7 || v31[1] == v7;
          else
            v32 = v31[2] == v7;
          if ( _InterlockedCompareExchange64(v31 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v31 - 2);
          KeAbPostRelease((ULONG_PTR)(v31 - 2));
          v33 = !v32;
          v22 = v55;
          if ( !v33 )
          {
            v13 = v53.m256i_i32[6];
            v51 = v53.m256i_i16[0];
            v26 = v52;
            goto LABEL_106;
          }
LABEL_121:
          AlpcpUnlockMessage(v22);
          return 3221225506LL;
        }
        if ( (*(_BYTE *)(v7 + 416) & 6) != 6 )
          goto LABEL_121;
        v35 = *(_QWORD **)(v7 + 16);
        if ( !v35 )
          goto LABEL_121;
        if ( *v35 != v29 )
        {
          AlpcpUnlockMessage(v55);
          return 3221225506LL;
        }
      }
      if ( v30 != 3 || (v27 & 0x2000) != 0 )
        goto LABEL_121;
    }
LABEL_106:
    if ( *(_QWORD *)(v22 + 32) && !*(_QWORD *)(v22 + 48) && (v8 & 0x30000) == 0 )
    {
      v34 = 792LL;
      if ( *(_QWORD *)(v22 + 224) )
        v34 = *(_QWORD *)(v22 + 232) + 792LL;
      v26 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v34);
      if ( v26 < 0 )
      {
        AlpcpUnlockMessage(v55);
        return (unsigned int)v26;
      }
      *(_QWORD *)(v22 + 48) = KeGetCurrentThread()->ApcState.Process;
      ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
      v13 = v53.m256i_i32[6];
      v51 = v53.m256i_i16[0];
      v22 = v55;
    }
LABEL_123:
    if ( v26 >= 0 )
      goto LABEL_124;
    return (unsigned int)v26;
  }
  ++dword_140CF5A94;
  v21 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
  if ( !v21 )
  {
    ++dword_140CF5A98;
    v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CF5AB0)(
                          (unsigned int)dword_140CF5AA4,
                          (unsigned int)dword_140CF5AAC,
                          (unsigned int)dword_140CF5AA8);
  }
  if ( !v21 )
    return 3221225626LL;
  LOWORD(v21[1].Next) = 512;
  *(_DWORD *)((char *)&v21[1].Next + 2) = 0;
  HIWORD(v21[1].Next) = 0;
  *((_QWORD *)&v21[2].Next + 1) = 0LL;
  v21[2].Next = 0LL;
  *((_QWORD *)&v21->Next + 1) = v21;
  v21->Next = v21;
  LOBYTE(v21[1].Next) |= 2u;
  *((_QWORD *)&v21[1].Next + 1) = 1LL;
  v22 = (ULONG_PTR)&v21[3];
  if ( v21 == (PSLIST_ENTRY)-48LL )
    return 3221225626LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[2], 0LL);
  LOBYTE(v21[1].Next) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v21[1].Next + 1, 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)&v21[3], 0x26uLL, BugCheckParameter4);
  v24 = *((_DWORD *)&v21[19].Next + 2);
  memset((void *)v22, 0, 0x118uLL);
  *(_WORD *)(v22 + 242) = 40;
  --*(_WORD *)(v22 - 30);
  *(_DWORD *)(v22 + 264) = v24 & 0x7FFFFFFF;
  do
    v25 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v25 );
  *(_DWORD *)(v22 + 272) = v25;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v22);
  *(_WORD *)(v22 + 242) = 40;
  v26 = 0;
  v13 = v53.m256i_i32[6];
  v51 = v53.m256i_i16[0];
LABEL_124:
  v36 = 0LL;
  v37 = a3;
  if ( a3 )
  {
    v36 = v61;
    v26 = AlpcpCaptureAttributes(v57, v8, a3, v22, v61);
    v37 = a3;
  }
  v38 = 512LL;
  if ( v13 && ((*(_DWORD *)(v22 + 40) & 0x200) != 0 || (*(_DWORD *)(v22 + 40) & 0x80) != 0) )
  {
    v39 = (*(_DWORD *)(v22 + 40) & 0x80) != 0 ? 0xC0000703 : 0;
    if ( v37 )
      AlpcpReleaseAttributes(v36);
    AlpcpReleaseAttributes((_QWORD *)(v22 + 104));
    AlpcpCancelMessage(v57, v22, 0x10000);
    return v39;
  }
  else
  {
    if ( v26 < 0 )
    {
      AlpcpUnlockMessage(v22);
      return (unsigned int)v26;
    }
    if ( v13 )
    {
      v40 = *(_QWORD *)(v22 + 208);
      if ( v40 )
      {
        PspChargeProcessWakeCounter(v40 & 0xFFFFFFFFFFFFFFF8uLL, -1, 1, 0LL);
        *(_QWORD *)(v22 + 208) = 0LL;
      }
      v41 = *(_QWORD *)(v22 + 216);
      if ( v41 )
      {
        PsReleaseProcessWakeCounter(v41);
        *(_QWORD *)(v22 + 216) = 0LL;
      }
    }
    v42 = 0LL;
    if ( v13 > 0 )
    {
      v42 = *(_QWORD *)(v22 + 160);
      *(_QWORD *)(v22 + 160) = 0LL;
      v43 = *(_QWORD *)(v22 + 136);
      if ( v43 )
      {
        AlpcpDereferenceBlobEx(v43, 1);
        *(_QWORD *)(v22 + 136) = 0LL;
      }
      v44 = *(_QWORD *)(v22 + 144);
      if ( v44 )
      {
        AlpcpReleaseViewAttribute(v44);
        *(_QWORD *)(v22 + 144) = 0LL;
      }
      v45 = *(_QWORD *)(v22 + 152);
      if ( v45 )
      {
        AlpcpDereferenceBlobEx(v45, 1);
        *(_QWORD *)(v22 + 152) = 0LL;
      }
      v46 = *(_QWORD *)(v22 + 160);
      if ( (v46 & 1) != 0 )
      {
        if ( v46 >= 4 && (v46 & 2) != 0 )
          ObfDereferenceObject((PVOID)(v46 & 0xFFFFFFFFFFFFFFFCuLL));
        *(_QWORD *)(v22 + 160) = 0LL;
      }
    }
    if ( v36 )
    {
      *(_OWORD *)(v22 + 104) = *v36;
      *(_OWORD *)(v22 + 120) = v36[1];
      *(_OWORD *)(v22 + 136) = v36[2];
      *(_OWORD *)(v22 + 152) = v36[3];
      *(_QWORD *)(v22 + 168) = *((_QWORD *)v36 + 8);
    }
    if ( v42 )
      *(_QWORD *)(v22 + 160) = v42;
    v47 = 24LL;
    if ( (v56 & 0xC0000000) != 0x80000000 )
      v47 = 40LL;
    v48 = &a2->m256i_i8[v47];
    if ( a4 )
    {
      v49 = v51;
      if ( (unsigned __int64)&v48[v51] > 0x7FFFFFFF0000LL )
      {
        AlpcpUnlockMessage(v22);
        return 3221225477LL;
      }
    }
    else
    {
      v49 = v51;
    }
    *(_QWORD *)(v22 + 176) = v48;
    v50 = *(_QWORD *)(v22 + 96);
    if ( v50 )
      v38 = *(_QWORD *)(v50 + 32) - 40LL;
    if ( v49 > v38 )
      v6 = AlpcpCaptureMessageData(v22, v49, 0LL);
    if ( v6 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v22;
      *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v53.m256i_i32 + 2);
      *(_WORD *)(a1 + 56) = v53.m256i_i16[3];
      if ( *(_QWORD *)(v22 + 24) )
      {
        if ( *(_QWORD *)(v22 + 32) )
          return AlpcpDispatchReplyToWaitingThread((__int64 *)a1);
        else
          return AlpcpDispatchReplyToPort(a1);
      }
      else
      {
        return AlpcpDispatchNewMessage();
      }
    }
    else
    {
      AlpcpUnlockMessage(v22);
      return (unsigned int)v6;
    }
  }
}
