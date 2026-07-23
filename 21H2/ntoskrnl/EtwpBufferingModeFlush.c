/*
 * XREFs of EtwpBufferingModeFlush @ 0x14093D358
 * Callers:
 *     EtwpFlushTrace @ 0x1406B4984 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x14025474C (EtwpLockUnlockBufferList.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC72C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpFlushBufferToLogfile @ 0x14060A094 (EtwpFlushBufferToLogfile.c)
 *     EtwpPrepareHeader @ 0x1406399D4 (EtwpPrepareHeader.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140639A4C (EtwpWaitForBufferReferenceCount.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x14093D7CC (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // ebp
  int LogFile; // r12d
  __int64 v3; // r14
  __int64 UsedProcessorCount; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int32 v9; // eax
  signed __int64 i; // rcx
  signed __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // r13
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  signed __int32 v17; // r14d
  signed __int32 v18; // esi
  unsigned int *v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  char *j; // rax
  unsigned int *v23; // rcx
  void *v24; // rcx
  unsigned int v26; // r10d
  signed __int64 v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // r8
  signed __int64 v30; // r9
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned int *v35; // rdx
  bool k; // zf
  __int64 v37; // rcx
  signed __int64 v38; // r8
  __int64 v39; // r10
  signed __int64 v40; // rax
  signed __int64 v41; // rtt

  v1 = a1[1];
  LogFile = 0;
  v3 = *a1;
  UsedProcessorCount = (unsigned int)EtwpQueryUsedProcessorCount((__int64)a1);
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)a1 + 208, 4u);
  if ( !*((_QWORD *)a1 + 26) )
    return (unsigned int)LogFile;
  LogFile = EtwpCreateLogFile((__int64)a1, 0);
  if ( LogFile < 0 )
  {
LABEL_57:
    v24 = (void *)*((_QWORD *)a1 + 102);
    if ( v24 )
    {
      ZwClose(v24);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 42));
    return (unsigned int)LogFile;
  }
  if ( (_DWORD)UsedProcessorCount )
  {
    v6 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v7 = a1 + 36;
      else
        v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v6) + 8 * v3);
      v8 = *v7 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), v1);
        if ( v9 <= v1 )
          *(_DWORD *)(v8 + 4) = v9;
        _m_prefetchw(v7);
        for ( i = *v7; (v8 ^ i) <= 0xF; i = v11 )
        {
          v11 = _InterlockedCompareExchange64(v7, 0LL, i);
          if ( i == v11 )
            break;
        }
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v8 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v8);
        }
      }
      v6 += 64LL;
      --UsedProcessorCount;
    }
    while ( UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) != 0 )
  {
    EtwpBufferingModeCompressionFlush((__int64)a1);
    v12 = *((_QWORD *)a1 + 103) + 1LL;
    if ( v12 >= 0 )
    {
      v13 = a1 + 24;
      while ( 1 )
      {
        v14 = (_QWORD *)*v13;
        --v12;
        v15 = 0LL;
        if ( (_QWORD *)*v13 == v13 )
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_56;
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14[2] + 24LL);
          if ( v16 == v12 )
            break;
          if ( v16 < v12 && (!v15 || v16 > *(_QWORD *)(v15 + 24)) )
            v15 = v14[2];
          v14 = (_QWORD *)*v14;
          if ( v14 == v13 )
            v14 = 0LL;
          if ( !v14 )
            goto LABEL_36;
        }
        v15 = v14[2];
LABEL_36:
        if ( !v15 )
          goto LABEL_56;
        v17 = *(_DWORD *)(v15 + 44);
        if ( (unsigned int)(v17 - 4) <= 1 )
        {
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), 3, v17);
          if ( v17 == v18 )
          {
            if ( *(_QWORD *)(v15 + 24) == v12 )
            {
              EtwpWaitForBufferReferenceCount(v15);
              if ( v18 == 5 )
              {
                if ( *(_DWORD *)(v15 + 8) != 72 )
                {
                  v19 = (unsigned int *)(v15 + 72);
                  v20 = v15 + *(unsigned int *)(v15 + 8);
                  *(_QWORD *)(v15 + 104) = 0LL;
                  v21 = *(unsigned int *)(v15 + 72);
                  for ( j = (char *)(v15 + 72 + v21); (unsigned __int64)j < v20; j = (char *)v19 + *v19 )
                  {
                    v23 = v19;
                    v19 = (unsigned int *)((char *)v19 + (unsigned int)v21);
                    *((_QWORD *)v19 + 4) = v23;
                    LODWORD(v21) = *v19;
                  }
                  do
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v19, 64) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, v19);
                    v19 = (unsigned int *)*((_QWORD *)v19 + 4);
                  }
                  while ( v19 );
                  _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v17, 5);
                  goto LABEL_55;
                }
                _InterlockedExchange((volatile __int32 *)(v15 + 44), 0);
              }
              else if ( v18 == 4 )
              {
                if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v15, 0) != -2147483614 )
                  LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v15);
                _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v17, 4);
LABEL_55:
                if ( LogFile < 0 )
                  goto LABEL_56;
              }
            }
            else
            {
              _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v17, 3);
            }
          }
        }
        if ( v12 < 0 )
          goto LABEL_56;
      }
    }
    goto LABEL_56;
  }
  v26 = EtwpQueryUsedProcessorCount((__int64)a1);
  v27 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 162, *((_QWORD *)a1 + 103), -1LL) == -1 )
  {
    if ( *((_QWORD *)a1 + 160) )
    {
      v28 = 0;
      if ( v26 )
      {
        v29 = 0LL;
        do
        {
          v30 = *(_QWORD *)(v29 + *((_QWORD *)a1 + 160));
          v31 = *(_QWORD *)(v29 + *((_QWORD *)a1 + 161));
          if ( v30 > v31 )
          {
            do
            {
              v32 = v31;
              v31 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*((_QWORD *)a1 + 161) + 8LL * v28),
                      v30,
                      v31);
            }
            while ( v32 != v31 && v30 > v31 );
          }
          ++v28;
          v29 += 8LL;
        }
        while ( v28 < v26 );
      }
    }
    do
    {
      v33 = EtwpFindAndLockBufferForFlushing(a1, *((_QWORD *)a1 + 162));
      v34 = v33;
      if ( !v33 )
        break;
      EtwpWaitForBufferReferenceCount(v33);
      if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v34, 0) != -2147483614 )
      {
        LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v34);
        if ( !v27 )
          v27 = *(_QWORD *)(v34 + 16);
      }
      _InterlockedDecrement64((volatile signed __int64 *)a1 + 162);
      _InterlockedExchange((volatile __int32 *)(v34 + 44), 0);
    }
    while ( LogFile >= 0 );
    if ( *((_QWORD *)a1 + 161) )
    {
      v35 = (unsigned int *)*((_QWORD *)a1 + 12);
      for ( k = v35 == a1 + 24; ; k = v35 == a1 + 24 )
      {
        if ( k )
          v35 = 0LL;
        if ( !v35 )
          break;
        v37 = *((_QWORD *)v35 + 2);
        v38 = *(_QWORD *)(v37 + 16);
        v39 = *(unsigned __int16 *)(v37 + 40);
        if ( v38 < v27 && *(_QWORD *)(v37 + 24) <= *((_QWORD *)a1 + 162) )
        {
          v40 = *(_QWORD *)(*((_QWORD *)a1 + 161) + 8 * v39);
          do
          {
            if ( v38 <= v40 )
              break;
            v41 = v40;
            v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 161) + 8 * v39), v38, v40);
          }
          while ( v41 != v40 );
        }
        v35 = *(unsigned int **)v35;
      }
    }
LABEL_56:
    EtwpFinalizeHeader((__int64)a1, 0);
    *((_QWORD *)a1 + 162) = -1LL;
    a1[66] = 0;
    goto LABEL_57;
  }
  return 3221225539LL;
}
