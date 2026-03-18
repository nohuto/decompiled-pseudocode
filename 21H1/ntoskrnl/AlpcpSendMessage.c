/*
 * XREFs of AlpcpSendMessage @ 0x14060D070
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAlpcSendWaitReceivePort @ 0x14060A800 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     NtReplyWaitReceivePortEx @ 0x140611820 (NtReplyWaitReceivePortEx.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140649EA8 (AlpcpSendLegacySynchronousRequest.c)
 *     NtReplyPort @ 0x14064BE10 (NtReplyPort.c)
 *     NtRequestPort @ 0x1406DDCE0 (NtRequestPort.c)
 *     LpcRequestPort @ 0x140707560 (LpcRequestPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405C6D34 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x14060F300 (PspChargeProcessWakeCounter.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpValidateMessage @ 0x1406107A8 (AlpcpValidateMessage.c)
 *     AlpcpChargePagedPoolQuota @ 0x140611E60 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleaseAttributes @ 0x140648BC0 (AlpcpReleaseAttributes.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseViewAttribute @ 0x14064C084 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCaptureMessageData @ 0x1406C2A78 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408BE1E0 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x1408BE680 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r11
  __m256i *v5; // r8
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
  int v16; // r10d
  bool v17; // al
  unsigned __int16 v18; // cx
  __int16 v19; // bx
  PSLIST_ENTRY v20; // rax
  ULONG_PTR v21; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v23; // ebx
  signed __int32 v24; // eax
  int v25; // ebx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  bool v30; // di
  bool v31; // zf
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _OWORD *v34; // r12
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rbx
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // rcx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int8 *v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int16 v49; // [rsp+40h] [rbp-F8h]
  int v50; // [rsp+48h] [rbp-F0h]
  __m256i v51; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-C8h]
  ULONG_PTR v53; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+80h] [rbp-B8h]
  __int64 v55; // [rsp+88h] [rbp-B0h]
  __m128i v56; // [rsp+90h] [rbp-A8h]
  __int64 v57; // [rsp+A0h] [rbp-98h]
  _OWORD v58[4]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-48h]
  __m256i *v61; // [rsp+148h] [rbp+10h]

  v61 = a2;
  v4 = a4;
  v5 = a2;
  memset(&v51, 0, sizeof(v51));
  v52 = 0LL;
  v6 = 0;
  v53 = 0LL;
  memset(v58, 0, sizeof(v58));
  v59 = 0LL;
  v7 = *(_QWORD *)a1;
  v54 = v7;
  v8 = *(_DWORD *)(a1 + 48);
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
      v56 = *(__m128i *)v11;
      v57 = *(_QWORD *)(v11 + 16);
      v12 = _mm_cvtsi128_si32(v56);
      v51.m256i_i16[0] = v12;
      v51.m256i_i16[1] = v12 + 40;
      v51.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v56, 4));
      v51.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v56, 8));
      v51.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v56, 12));
      v13 = v57;
      v51.m256i_i32[6] = v57;
      v52 = HIDWORD(v57);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a2;
      v51 = *(__m256i *)v11;
      v52 = *(_QWORD *)(v11 + 32);
      v13 = v51.m256i_i32[6];
      v12 = v51.m256i_i16[0];
    }
    v49 = v12;
    v14 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
    if ( v12 < (unsigned __int16)(v12 + 40) )
    {
      if ( v14 )
      {
        if ( (unsigned __int64)v12 + 40 <= v51.m256i_u16[1] )
        {
          v51.m256i_i16[1] = v12 + 40;
LABEL_25:
          v15 = v51.m256i_i16[2] & 0x7FFF;
          v51.m256i_i16[2] &= ~0x8000u;
          if ( v51.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(v5, &v51);
            if ( (int)result < 0 )
              return result;
            v4 = a4;
          }
          v16 = *(_DWORD *)(v7 + 256);
          goto LABEL_36;
        }
      }
      else if ( v12 + 40LL == v51.m256i_u16[1] )
      {
        goto LABEL_25;
      }
    }
    return 3221225485LL;
  }
  v51 = *a2;
  v52 = a2[1].m256i_i64[0];
  LOBYTE(a2) = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
  result = AlpcpValidateMessage(&v51, a2, v5);
  if ( (int)result < 0 )
    return result;
  v13 = v51.m256i_i32[6];
  v15 = v51.m256i_i16[2];
  v49 = v51.m256i_i16[0];
LABEL_36:
  v17 = (v16 & 0x1000) != 0 || (v8 & 2) != 0;
  v18 = (unsigned __int8)v15;
  v19 = v15 & 0xFF00;
  if ( v17 )
  {
    if ( (v8 & 1) != 0 )
    {
      if ( v13 )
      {
        v19 = 0;
        v18 = 2;
LABEL_62:
        v51.m256i_i32[6] = v13;
        if ( !v4 )
          LODWORD(v52) = 0;
        goto LABEL_64;
      }
      return 3221225485LL;
    }
    if ( (v8 & 0x10000) != 0 )
    {
      if ( v18 )
      {
        if ( (unsigned int)v18 - 3 > 3 && v18 != 13 || (v8 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v18 = 3;
      }
    }
    else if ( v18 )
    {
      if ( v18 == 1 )
      {
        if ( !v13 )
          return 3221225485LL;
        goto LABEL_62;
      }
      if ( (unsigned int)v18 - 7 > 2 || (v8 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v18 = 1;
    }
    v13 = 0;
    goto LABEL_62;
  }
  if ( v18 != 7 || v4 )
  {
    if ( v13 <= 0 )
    {
      if ( (v8 & 0x10000) != 0 )
        v18 = 3;
      else
        v18 = 1;
    }
    else
    {
      v18 = ((v8 & 0x10000) != 0) + 1;
    }
  }
  if ( !v13 && *(_OWORD *)&v51.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_64:
  v51.m256i_i16[2] = v18 | v19 & 0xEFFF;
  if ( (unsigned __int64)v51.m256i_u16[1] > *(_QWORD *)(v7 + 272) )
    return 3221225519LL;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v13 = v51.m256i_i32[6];
    v49 = v51.m256i_i16[0];
  }
  if ( !v13 )
  {
    ++dword_140CEBC94;
    v20 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v20 )
    {
      ++dword_140CEBC98;
      v20 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CEBCB0)(
                            (unsigned int)dword_140CEBCA4,
                            (unsigned int)dword_140CEBCAC,
                            (unsigned int)dword_140CEBCA8);
      if ( !v20 )
        return 3221225626LL;
    }
    LOWORD(v20[1].Next) = 512;
    *(_DWORD *)((char *)&v20[1].Next + 2) = 0;
    HIWORD(v20[1].Next) = 0;
    *((_QWORD *)&v20[2].Next + 1) = 0LL;
    v20[2].Next = 0LL;
    *((_QWORD *)&v20->Next + 1) = v20;
    v20->Next = v20;
    LOBYTE(v20[1].Next) |= 2u;
    *((_QWORD *)&v20[1].Next + 1) = 1LL;
    v21 = (ULONG_PTR)&v20[3];
    if ( v20 == (PSLIST_ENTRY)-48LL )
      return 3221225626LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[2], 0LL);
    *(_BYTE *)(v21 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v21, 0x26uLL, BugCheckParameter4);
    v23 = *(_DWORD *)(v21 + 264);
    memset((void *)v21, 0, 0x118uLL);
    *(_WORD *)(v21 + 242) = 40;
    --*(_WORD *)(v21 - 30);
    *(_DWORD *)(v21 + 264) = v23 & 0x7FFFFFFF;
    do
      v24 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v24 );
    *(_DWORD *)(v21 + 272) = v24;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v21);
    *(_WORD *)(v21 + 242) = 40;
    v25 = 0;
    v13 = v51.m256i_i32[6];
    v49 = v51.m256i_i16[0];
    goto LABEL_121;
  }
  v8 |= 0x10u;
  v25 = AlpcpLookupMessage(v7, v13, v52, a4, (__int64)&v53);
  v50 = v25;
  v21 = v53;
  if ( v25 < 0 )
    goto LABEL_120;
  v26 = *(_DWORD *)(v53 + 40);
  if ( (v26 & 0x80u) != 0 )
    goto LABEL_120;
  v27 = *(_QWORD *)(v53 + 24);
  v55 = v27;
  if ( v27 )
  {
    v28 = *(_QWORD *)(v53 + 16);
    if ( v28 != v7 )
    {
      if ( !v28 )
      {
        v29 = *(_QWORD **)(v27 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v29 - 2), 0LL);
        if ( ((*(_DWORD *)(v55 + 416) >> 1) & 3) == 2 )
          v30 = *v29 == v7 || v29[1] == v7;
        else
          v30 = v29[2] == v7;
        if ( _InterlockedCompareExchange64(v29 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v29 - 2);
        KeAbPostRelease((ULONG_PTR)(v29 - 2));
        v31 = !v30;
        v21 = v53;
        if ( !v31 )
        {
          v13 = v51.m256i_i32[6];
          v49 = v51.m256i_i16[0];
          v25 = v50;
          goto LABEL_106;
        }
LABEL_118:
        AlpcpUnlockMessage(v21);
        return 3221225506LL;
      }
      if ( (*(_BYTE *)(v7 + 416) & 6) != 6 )
        goto LABEL_118;
      v33 = *(_QWORD **)(v7 + 16);
      if ( !v33 || *v33 != v28 )
        goto LABEL_118;
    }
    if ( (v26 & 7) == 3 )
      goto LABEL_106;
    goto LABEL_118;
  }
LABEL_106:
  if ( *(_QWORD *)(v21 + 32) && !*(_QWORD *)(v21 + 48) && (v8 & 0x30000) == 0 )
  {
    v32 = 792LL;
    if ( *(_QWORD *)(v21 + 224) )
      v32 = *(_QWORD *)(v21 + 232) + 792LL;
    v25 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v32);
    if ( v25 < 0 )
    {
      AlpcpUnlockMessage(v53);
      return (unsigned int)v25;
    }
    *(_QWORD *)(v21 + 48) = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
    v13 = v51.m256i_i32[6];
    v49 = v51.m256i_i16[0];
    v21 = v53;
  }
LABEL_120:
  if ( v25 < 0 )
    return (unsigned int)v25;
LABEL_121:
  v34 = 0LL;
  v35 = a3;
  if ( a3 )
  {
    v34 = v58;
    v25 = AlpcpCaptureAttributes(v54, v8, a3, v21, v58);
    v35 = a3;
  }
  if ( v13 && ((*(_DWORD *)(v21 + 40) & 0x200) != 0 || (*(_DWORD *)(v21 + 40) & 0x80) != 0) )
  {
    v36 = (*(_DWORD *)(v21 + 40) & 0x80) != 0 ? 0xC0000703 : 0;
    if ( v35 )
      AlpcpReleaseAttributes(v34);
    AlpcpReleaseAttributes(v21 + 104);
    AlpcpCancelMessage(v54, v21, 0x10000LL);
    return v36;
  }
  else if ( v25 >= 0 )
  {
    if ( v13 )
    {
      v37 = *(_QWORD *)(v21 + 208);
      if ( v37 )
      {
        PspChargeProcessWakeCounter((PVOID)(v37 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
        *(_QWORD *)(v21 + 208) = 0LL;
      }
      v38 = *(_QWORD *)(v21 + 216);
      if ( v38 )
      {
        PsReleaseProcessWakeCounter(v38, *(unsigned int *)(v21 + 264));
        *(_QWORD *)(v21 + 216) = 0LL;
      }
    }
    v39 = 0LL;
    if ( v13 > 0 )
    {
      v39 = *(_QWORD *)(v21 + 160);
      *(_QWORD *)(v21 + 160) = 0LL;
      v40 = *(_QWORD *)(v21 + 136);
      if ( v40 )
      {
        AlpcpDereferenceBlobEx(v40);
        *(_QWORD *)(v21 + 136) = 0LL;
      }
      v41 = *(_QWORD *)(v21 + 144);
      if ( v41 )
      {
        AlpcpReleaseViewAttribute(v41);
        *(_QWORD *)(v21 + 144) = 0LL;
      }
      v42 = *(_QWORD *)(v21 + 152);
      if ( v42 )
      {
        AlpcpDereferenceBlobEx(v42);
        *(_QWORD *)(v21 + 152) = 0LL;
      }
      v43 = *(_QWORD *)(v21 + 160);
      if ( (v43 & 1) != 0 )
      {
        if ( v43 >= 4 && (v43 & 2) != 0 )
          HalPutDmaAdapter((PADAPTER_OBJECT)(v43 & 0xFFFFFFFFFFFFFFFCuLL));
        *(_QWORD *)(v21 + 160) = 0LL;
      }
    }
    if ( v34 )
    {
      *(_OWORD *)(v21 + 104) = *v34;
      *(_OWORD *)(v21 + 120) = v34[1];
      *(_OWORD *)(v21 + 136) = v34[2];
      *(_OWORD *)(v21 + 152) = v34[3];
      *(_QWORD *)(v21 + 168) = *((_QWORD *)v34 + 8);
    }
    if ( v39 )
      *(_QWORD *)(v21 + 160) = v39;
    v44 = 24LL;
    if ( (v8 & 0xC0000000) != 0x80000000 )
      v44 = 40LL;
    v45 = &v61->m256i_i8[v44];
    if ( a4 && (unsigned __int64)&v45[v49] > 0x7FFFFFFF0000LL )
    {
      AlpcpUnlockMessage(v21);
      return 3221225477LL;
    }
    else
    {
      *(_QWORD *)(v21 + 176) = v45;
      v46 = AlpcpAvailableBufferSize(v21);
      if ( v47 > v46 )
        v6 = AlpcpCaptureMessageData(v48, v47, 0LL);
      if ( v6 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = v21;
        *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v51.m256i_i32 + 2);
        *(_WORD *)(a1 + 56) = v51.m256i_i16[3];
        if ( *(_QWORD *)(v21 + 24) )
        {
          if ( *(_QWORD *)(v21 + 32) )
            return AlpcpDispatchReplyToWaitingThread(a1);
          else
            return AlpcpDispatchReplyToPort();
        }
        else
        {
          return AlpcpDispatchNewMessage();
        }
      }
      else
      {
        AlpcpUnlockMessage(v21);
        return (unsigned int)v6;
      }
    }
  }
  else
  {
    AlpcpUnlockMessage(v21);
    return (unsigned int)v25;
  }
}
