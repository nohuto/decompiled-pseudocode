/*
 * XREFs of AlpcpSendMessage @ 0x1406D3F60
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRequestPort @ 0x140610AB0 (NtRequestPort.c)
 *     NtReplyPort @ 0x1406CDAE0 (NtReplyPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8 (AlpcpSendLegacySynchronousRequest.c)
 *     LpcRequestPort @ 0x1406D3470 (LpcRequestPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x1406D7150 (NtAlpcSendWaitReceivePort.c)
 *     NtReplyWaitReceivePortEx @ 0x1406DA1C0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405CF054 (AlpcpAvailableBufferSize.c)
 *     AlpcpReleaseViewAttribute @ 0x140613954 (AlpcpReleaseViewAttribute.c)
 *     AlpcpChargePagedPoolQuota @ 0x14065586C (AlpcpChargePagedPoolQuota.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1406D2D1C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReleaseAttributes @ 0x1406D3150 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpValidateMessage @ 0x1406D3688 (AlpcpValidateMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1406D3BA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1406D49B0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408C2C00 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x1408C3138 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r11
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
  char v17; // dl
  bool v18; // al
  unsigned __int16 v19; // cx
  __int16 v20; // bx
  PSLIST_ENTRY v21; // rax
  ULONG_PTR v22; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v24; // ebx
  signed __int32 v25; // eax
  int v26; // ebx
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rbx
  bool v31; // di
  bool v32; // zf
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rax
  _OWORD *v35; // r12
  __int64 v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rbx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int8 *v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int16 v50; // [rsp+40h] [rbp-F8h]
  int v51; // [rsp+48h] [rbp-F0h]
  __m256i v52; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __m128i v57; // [rsp+90h] [rbp-A8h]
  __int64 v58; // [rsp+A0h] [rbp-98h]
  _OWORD v59[4]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-48h]

  v4 = a4;
  memset(&v52, 0, sizeof(v52));
  v53 = 0LL;
  v6 = 0;
  BugCheckParameter2 = 0LL;
  memset(v59, 0, sizeof(v59));
  v60 = 0LL;
  v7 = *(_QWORD *)a1;
  v55 = v7;
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
      v57 = *(__m128i *)v11;
      v58 = *(_QWORD *)(v11 + 16);
      v12 = _mm_cvtsi128_si32(v57);
      v52.m256i_i16[0] = v12;
      v52.m256i_i16[1] = v12 + 40;
      v52.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
      v52.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v57, 8));
      v52.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v57, 12));
      v13 = v58;
      v52.m256i_i32[6] = v58;
      v53 = HIDWORD(v58);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a2;
      v52 = *(__m256i *)v11;
      v53 = *(_QWORD *)(v11 + 32);
      v13 = v52.m256i_i32[6];
      v12 = v52.m256i_i16[0];
    }
    v50 = v12;
    v14 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
    if ( v12 < (unsigned __int16)(v12 + 40) )
    {
      if ( v14 )
      {
        if ( (unsigned __int64)v12 + 40 <= v52.m256i_u16[1] )
        {
          v52.m256i_i16[1] = v12 + 40;
LABEL_25:
          v15 = v52.m256i_i16[2] & 0x7FFF;
          v52.m256i_i16[2] &= ~0x8000u;
          if ( v52.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(a2, &v52);
            if ( (int)result < 0 )
              return result;
            v4 = a4;
          }
          v16 = *(_DWORD *)(v7 + 256);
          goto LABEL_36;
        }
      }
      else if ( v12 + 40LL == v52.m256i_u16[1] )
      {
        goto LABEL_25;
      }
    }
    return 3221225485LL;
  }
  v52 = *a2;
  v53 = a2[1].m256i_i64[0];
  v17 = (*(_DWORD *)(v7 + 256) & 0x1000) != 0 || (v8 & 2) != 0;
  result = AlpcpValidateMessage((unsigned __int16 *)&v52, v17);
  if ( (int)result < 0 )
    return result;
  v13 = v52.m256i_i32[6];
  v15 = v52.m256i_i16[2];
  v50 = v52.m256i_i16[0];
LABEL_36:
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
LABEL_62:
        v52.m256i_i32[6] = v13;
        if ( !v4 )
          LODWORD(v53) = 0;
        goto LABEL_64;
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
        goto LABEL_62;
      }
      if ( (unsigned int)v19 - 7 > 2 || (v8 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v19 = 1;
    }
    v13 = 0;
    goto LABEL_62;
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
  if ( !v13 && *(_OWORD *)&v52.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_64:
  v52.m256i_i16[2] = v19 | v20 & 0xEFFF;
  if ( (unsigned __int64)v52.m256i_u16[1] > *(_QWORD *)(v7 + 272) )
    return 3221225519LL;
  if ( (v8 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v13 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
  }
  if ( !v13 )
  {
    ++dword_140CEBF54;
    v21 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v21 )
    {
      ++dword_140CEBF58;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CEBF70)(
                            (unsigned int)dword_140CEBF64,
                            (unsigned int)dword_140CEBF6C,
                            (unsigned int)dword_140CEBF68);
      if ( !v21 )
        return 3221225626LL;
    }
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
    *(_BYTE *)(v22 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v22, 0x26uLL, BugCheckParameter4);
    v24 = *(_DWORD *)(v22 + 264);
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
    v13 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
    goto LABEL_122;
  }
  v8 |= 0x10u;
  v26 = AlpcpLookupMessage(v7, v13, v53, a4, (__int64)&BugCheckParameter2);
  v51 = v26;
  v22 = BugCheckParameter2;
  if ( v26 < 0 )
    goto LABEL_121;
  v27 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( (v27 & 0x80u) != 0 )
    goto LABEL_121;
  v28 = *(_QWORD *)(BugCheckParameter2 + 24);
  v56 = v28;
  if ( v28 )
  {
    v29 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v29 != v7 )
    {
      if ( (v27 & 7) == 0 )
      {
        v30 = *(_QWORD **)(v28 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v30 - 2), 0LL);
        if ( ((*(_DWORD *)(v56 + 416) >> 1) & 3) == 2 )
          v31 = *v30 == v7 || v30[1] == v7;
        else
          v31 = v30[2] == v7;
        if ( _InterlockedCompareExchange64(v30 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30 - 2);
        KeAbPostRelease((ULONG_PTR)(v30 - 2));
        v32 = !v31;
        v22 = BugCheckParameter2;
        if ( !v32 )
        {
          v13 = v52.m256i_i32[6];
          v50 = v52.m256i_i16[0];
          v26 = v51;
          goto LABEL_106;
        }
LABEL_119:
        AlpcpUnlockMessage(v22);
        return 3221225506LL;
      }
      if ( (*(_BYTE *)(v7 + 416) & 6) != 6 )
        goto LABEL_119;
      v34 = *(_QWORD **)(v7 + 16);
      if ( !v34 || *v34 != v29 )
        goto LABEL_119;
    }
    if ( (v27 & 7) != 3 || (v27 & 0x2000) != 0 )
      goto LABEL_119;
  }
LABEL_106:
  if ( *(_QWORD *)(v22 + 32) && !*(_QWORD *)(v22 + 48) && (v8 & 0x30000) == 0 )
  {
    v33 = 792LL;
    if ( *(_QWORD *)(v22 + 224) )
      v33 = *(_QWORD *)(v22 + 232) + 792LL;
    v26 = AlpcpChargePagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, v33);
    if ( v26 < 0 )
    {
      AlpcpUnlockMessage(BugCheckParameter2);
      return (unsigned int)v26;
    }
    *(_QWORD *)(v22 + 48) = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
    v13 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
    v22 = BugCheckParameter2;
  }
LABEL_121:
  if ( v26 < 0 )
    return (unsigned int)v26;
LABEL_122:
  v35 = 0LL;
  v36 = a3;
  if ( a3 )
  {
    v35 = v59;
    v26 = AlpcpCaptureAttributes(v55, v8, a3, v22, v59);
    v36 = a3;
  }
  if ( v13 && ((*(_DWORD *)(v22 + 40) & 0x200) != 0 || (*(_DWORD *)(v22 + 40) & 0x80) != 0) )
  {
    v37 = (*(_DWORD *)(v22 + 40) & 0x80) != 0 ? 0xC0000703 : 0;
    if ( v36 )
      AlpcpReleaseAttributes(v35);
    AlpcpReleaseAttributes((_QWORD *)(v22 + 104));
    AlpcpCancelMessage(v55, v22, 0x10000);
    return v37;
  }
  else if ( v26 >= 0 )
  {
    if ( v13 )
    {
      v38 = *(_QWORD *)(v22 + 208);
      if ( v38 )
      {
        PspChargeProcessWakeCounter(v38 & 0xFFFFFFFFFFFFFFF8uLL, -1, 1, 0LL);
        *(_QWORD *)(v22 + 208) = 0LL;
      }
      v39 = *(_QWORD *)(v22 + 216);
      if ( v39 )
      {
        PsReleaseProcessWakeCounter(v39);
        *(_QWORD *)(v22 + 216) = 0LL;
      }
    }
    v40 = 0LL;
    if ( v13 > 0 )
    {
      v40 = *(_QWORD *)(v22 + 160);
      *(_QWORD *)(v22 + 160) = 0LL;
      v41 = *(_QWORD *)(v22 + 136);
      if ( v41 )
      {
        AlpcpDereferenceBlobEx(v41);
        *(_QWORD *)(v22 + 136) = 0LL;
      }
      v42 = *(_QWORD *)(v22 + 144);
      if ( v42 )
      {
        AlpcpReleaseViewAttribute(v42);
        *(_QWORD *)(v22 + 144) = 0LL;
      }
      v43 = *(_QWORD *)(v22 + 152);
      if ( v43 )
      {
        AlpcpDereferenceBlobEx(v43);
        *(_QWORD *)(v22 + 152) = 0LL;
      }
      v44 = *(_QWORD *)(v22 + 160);
      if ( (v44 & 1) != 0 )
      {
        if ( v44 >= 4 && (v44 & 2) != 0 )
          HalPutDmaAdapter((PADAPTER_OBJECT)(v44 & 0xFFFFFFFFFFFFFFFCuLL));
        *(_QWORD *)(v22 + 160) = 0LL;
      }
    }
    if ( v35 )
    {
      *(_OWORD *)(v22 + 104) = *v35;
      *(_OWORD *)(v22 + 120) = v35[1];
      *(_OWORD *)(v22 + 136) = v35[2];
      *(_OWORD *)(v22 + 152) = v35[3];
      *(_QWORD *)(v22 + 168) = *((_QWORD *)v35 + 8);
    }
    if ( v40 )
      *(_QWORD *)(v22 + 160) = v40;
    v45 = 24LL;
    if ( (v8 & 0xC0000000) != 0x80000000 )
      v45 = 40LL;
    v46 = &a2->m256i_i8[v45];
    if ( a4 && (unsigned __int64)&v46[v50] > 0x7FFFFFFF0000LL )
    {
      AlpcpUnlockMessage(v22);
      return 3221225477LL;
    }
    else
    {
      *(_QWORD *)(v22 + 176) = v46;
      v47 = AlpcpAvailableBufferSize(v22);
      if ( v48 > v47 )
        v6 = AlpcpCaptureMessageData(v49, v48, 0LL);
      if ( v6 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = v22;
        *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v52.m256i_i32 + 2);
        *(_WORD *)(a1 + 56) = v52.m256i_i16[3];
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
  else
  {
    AlpcpUnlockMessage(v22);
    return (unsigned int)v26;
  }
}
