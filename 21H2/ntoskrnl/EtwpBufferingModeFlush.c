/*
 * XREFs of EtwpBufferingModeFlush @ 0x1409E971C
 * Callers:
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     EtwpGetEnableInfoIndex @ 0x1402E10FC (EtwpGetEnableInfoIndex.c)
 *     EtwpQueryUsedProcessorCount @ 0x1402E1C80 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402E1CBC (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x1402E29C8 (EtwpLockUnlockBufferList.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140634830 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpFlushBufferToLogfile @ 0x1406C1524 (EtwpFlushBufferToLogfile.c)
 *     EtwpCreateLogFile @ 0x1406F0614 (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     EtwpSendDataBlock @ 0x140790CF8 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1407968D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCompleteBuffer @ 0x140798BE4 (EtwpCompleteBuffer.c)
 *     EtwpFlushBuffer @ 0x140798C10 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140798CFC (EtwpWaitForBufferReferenceCount.c)
 *     EtwpPrepareHeader @ 0x140798D30 (EtwpPrepareHeader.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1408836B4 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // r15d
  __int64 v3; // r12
  unsigned int UsedProcessorCount; // r14d
  signed int v6; // r13d
  _QWORD *CurrentServerSiloGlobals; // rax
  _QWORD *GuidEntryByGuid; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD **v10; // r14
  __int16 v11; // dx
  _QWORD *i; // rsi
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int32 v20; // eax
  signed __int64 j; // rcx
  signed __int64 v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  signed __int32 v29; // r15d
  signed __int32 v30; // esi
  unsigned int *v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  char *k; // rax
  unsigned int *v35; // rcx
  int v36; // ecx
  signed __int32 v37; // eax
  unsigned int v38; // r10d
  signed __int64 v39; // rsi
  unsigned int v40; // edx
  __int64 v41; // r8
  signed __int64 v42; // r9
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  __int64 m; // rbx
  unsigned int *n; // rax
  signed __int64 v47; // r8
  __int64 v48; // r9
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  unsigned int *v51; // rdx
  void *v52; // rcx
  int LogFile; // [rsp+28h] [rbp-59h]
  unsigned int v54; // [rsp+2Ch] [rbp-55h] BYREF
  _DWORD v55[30]; // [rsp+30h] [rbp-51h] BYREF

  v1 = a1[1];
  v3 = *a1;
  v54 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)a1 + 204, 4u);
  if ( !*((_QWORD *)a1 + 24) )
    return 0LL;
  LogFile = EtwpCreateLogFile((__int64)a1, 0, 0LL);
  v6 = LogFile;
  if ( LogFile < 0 )
    goto LABEL_104;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset(v55, 0, sizeof(v55));
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[108], qword_140041DB8, 0);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v10 = (_QWORD **)(GuidEntryByGuid + 7);
      GuidEntryByGuid[52] = KeGetCurrentThread();
      if ( *v10 == v10 || !EtwpGetEnableInfoIndex((__int64)GuidEntryByGuid, *a1, &v54) )
      {
        GuidEntryByGuid[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v55[0] = 3;
        v55[28] = 2;
        v55[18] = 2;
        HIWORD(v55[19]) = v11;
        for ( i = *v10; i != v10; i = (_QWORD *)*i )
          EtwpSendDataBlock((__int64)i, (__int64)v55);
        GuidEntryByGuid[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
        KeLeaveCriticalRegion();
        v13 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v13 )
        {
          do
          {
            v14 = *(_QWORD *)(v13 + 32);
            EtwpWaitForBufferReferenceCount(v13);
            v6 = EtwpFlushBuffer((__int64)a1, (unsigned int *)v13, v14 == 0);
            EtwpCompleteBuffer((__int64)a1, v13, v6);
            v13 = v14;
          }
          while ( v14 );
        }
        EtwpFinalizeHeader((__int64)a1, 0);
      }
    }
    goto LABEL_104;
  }
  if ( UsedProcessorCount )
  {
    v15 = v54;
    v16 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v17 = a1 + 32;
      }
      else
      {
        v18 = *((_QWORD *)a1 + 137);
        if ( v18 == EtwpHostSiloState )
          v17 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v15) + 34472) + 320LL) + 8 * v3);
        else
          v17 = (_QWORD *)(*(_QWORD *)((v16 << 6) + *(_QWORD *)(v18 + 4144)) + 8 * v3);
      }
      v19 = *v17 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v19 )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), v1);
        if ( v20 <= v1 )
          *(_DWORD *)(v19 + 4) = v20;
        _m_prefetchw(v17);
        for ( j = *v17; (v19 ^ j) <= 0xF; j = v22 )
        {
          v22 = _InterlockedCompareExchange64(v17, 0LL, j);
          if ( j == v22 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v19 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v19);
        }
        v15 = v54;
      }
      v54 = ++v15;
      v16 = v15;
    }
    while ( v15 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) != 0 )
  {
    EtwpBufferingModeCompressionFlush((__int64)a1);
    v23 = *((_QWORD *)a1 + 101) + 1LL;
    if ( v23 < 0 )
      goto LABEL_58;
    v24 = a1 + 20;
    while ( 1 )
    {
      --v23;
      v25 = 0LL;
      v26 = *v24 - 56LL;
      if ( (_QWORD *)*v24 == v24 )
        v26 = 0LL;
      if ( !v26 )
        goto LABEL_57;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v26 + 24);
        if ( v27 == v23 )
          break;
        if ( v27 < v23 && (!v25 || v27 > *(_QWORD *)(v25 + 24)) )
          v25 = v26;
        v28 = *(_QWORD **)(v26 + 56);
        v26 = (__int64)(v28 - 7);
        if ( v28 == v24 )
          v26 = 0LL;
        if ( !v26 )
          goto LABEL_51;
      }
      v25 = v26;
LABEL_51:
      if ( !v25 )
      {
LABEL_57:
        v6 = LogFile;
        goto LABEL_58;
      }
      v29 = *(_DWORD *)(v25 + 44);
      if ( (unsigned int)(v29 - 4) <= 1 )
      {
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 44), 3, v29);
        if ( v29 == v30 )
        {
          if ( *(_QWORD *)(v25 + 24) == v23 )
          {
            EtwpWaitForBufferReferenceCount(v25);
            if ( v30 == 5 )
            {
              if ( *(_DWORD *)(v25 + 8) == 72 )
              {
                _InterlockedExchange((volatile __int32 *)(v25 + 44), 0);
                goto LABEL_56;
              }
              v31 = (unsigned int *)(v25 + 72);
              v32 = v25 + *(unsigned int *)(v25 + 8);
              *(_QWORD *)(v25 + 104) = 0LL;
              v33 = *(unsigned int *)(v25 + 72);
              for ( k = (char *)(v25 + 72 + v33); (unsigned __int64)k < v32; k = (char *)v31 + *v31 )
              {
                v35 = v31;
                v31 = (unsigned int *)((char *)v31 + (unsigned int)v33);
                *((_QWORD *)v31 + 4) = v35;
                LODWORD(v33) = *v31;
              }
              do
              {
                if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v31, 64) == -2147483614 )
                {
                  v36 = LogFile;
                }
                else
                {
                  v36 = EtwpFlushBufferToLogfile((__int64)a1, v31);
                  LogFile = v36;
                }
                v31 = (unsigned int *)*((_QWORD *)v31 + 4);
              }
              while ( v31 );
              v24 = a1 + 20;
              v37 = 5;
            }
            else
            {
              if ( v30 != 4 )
                goto LABEL_56;
              if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v25, 0) == -2147483614 )
              {
                v36 = LogFile;
              }
              else
              {
                v36 = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v25);
                LogFile = v36;
              }
              v37 = 4;
            }
            _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 44), v29, v37);
            if ( v36 < 0 )
              goto LABEL_57;
          }
          else
          {
            _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 44), v29, 3);
          }
        }
      }
LABEL_56:
      if ( v23 < 0 )
        goto LABEL_57;
    }
  }
  v38 = EtwpQueryUsedProcessorCount((__int64)a1);
  v39 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 164, *((_QWORD *)a1 + 101), -1LL) != -1 )
    return 3221225539LL;
  if ( *((_QWORD *)a1 + 162) )
  {
    v40 = 0;
    if ( v38 )
    {
      v41 = 0LL;
      do
      {
        v42 = *(_QWORD *)(v41 + *((_QWORD *)a1 + 162));
        v43 = *(_QWORD *)(v41 + *((_QWORD *)a1 + 163));
        if ( v42 > v43 )
        {
          do
          {
            v44 = v43;
            v43 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8LL * v40),
                    v42,
                    v43);
          }
          while ( v44 != v43 && v42 > v43 );
        }
        ++v40;
        v41 += 8LL;
      }
      while ( v40 < v38 );
    }
  }
  for ( m = EtwpFindAndLockBufferForFlushing((__int64)a1, *((_QWORD *)a1 + 164));
        m;
        m = EtwpFindAndLockBufferForFlushing((__int64)a1, *((_QWORD *)a1 + 164)) )
  {
    EtwpWaitForBufferReferenceCount(m);
    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, m, 0) != -2147483614 )
    {
      v6 = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)m);
      if ( !v39 )
        v39 = *(_QWORD *)(m + 16);
    }
    _InterlockedDecrement64((volatile signed __int64 *)a1 + 164);
    _InterlockedExchange((volatile __int32 *)(m + 44), 0);
    if ( v6 < 0 )
      break;
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    for ( n = (unsigned int *)*((_QWORD *)a1 + 10); ; n = (unsigned int *)*((_QWORD *)v51 + 7) )
    {
      v51 = n - 14;
      if ( n == a1 + 20 )
        v51 = 0LL;
      if ( !v51 )
        break;
      v47 = *((_QWORD *)v51 + 2);
      v48 = *((unsigned __int16 *)v51 + 20);
      if ( v47 < v39 && *((_QWORD *)v51 + 3) <= *((_QWORD *)a1 + 164) )
      {
        v49 = *(_QWORD *)(*((_QWORD *)a1 + 163) + 8 * v48);
        do
        {
          if ( v47 <= v49 )
            break;
          v50 = v49;
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8 * v48), v47, v49);
        }
        while ( v50 != v49 );
      }
    }
  }
LABEL_58:
  EtwpFinalizeHeader((__int64)a1, 0);
  *((_QWORD *)a1 + 164) = -1LL;
  a1[62] = 0;
LABEL_104:
  v52 = (void *)*((_QWORD *)a1 + 100);
  if ( v52 )
  {
    ZwClose(v52);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v6;
}
