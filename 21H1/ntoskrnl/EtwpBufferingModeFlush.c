/*
 * XREFs of EtwpBufferingModeFlush @ 0x1409388E8
 * Callers:
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024124C (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402417B8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x1402F15E0 (EtwpLockUnlockBufferList.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405A6898 (EtwpBufferingModeCompressionFlush.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1405F22E4 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpPrepareHeader @ 0x1405F23E0 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x140676FF8 (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x14067BDA8 (EtwpCreateLogFile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x140938D50 (EtwpFindAndLockBufferForFlushing.c)
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
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  signed __int32 v18; // r14d
  signed __int32 v19; // esi
  unsigned int *v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  char *j; // rax
  unsigned int *v24; // rcx
  void *v25; // rcx
  unsigned int v27; // r10d
  signed __int64 v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // r8
  signed __int64 v31; // r9
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned int *k; // rax
  signed __int64 v37; // r8
  __int64 v38; // r9
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  unsigned int *v41; // rdx

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
    v25 = (void *)*((_QWORD *)a1 + 102);
    if ( v25 )
    {
      ZwClose(v25);
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
        v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v6) + 8 * v3);
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
          EtwpPrepareDirtyBuffer((__int64)a1, (LARGE_INTEGER *)v8);
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
        --v12;
        v14 = 0LL;
        v15 = *v13 - 56LL;
        if ( (_QWORD *)*v13 == v13 )
          v15 = 0LL;
        if ( !v15 )
          goto LABEL_56;
        while ( 1 )
        {
          v16 = *(_QWORD *)(v15 + 24);
          if ( v16 == v12 )
            break;
          if ( v16 < v12 && (!v14 || v16 > *(_QWORD *)(v14 + 24)) )
            v14 = v15;
          v17 = *(_QWORD **)(v15 + 56);
          v15 = (__int64)(v17 - 7);
          if ( v17 == v13 )
            v15 = 0LL;
          if ( !v15 )
            goto LABEL_36;
        }
        v14 = v15;
LABEL_36:
        if ( !v14 )
          goto LABEL_56;
        v18 = *(_DWORD *)(v14 + 44);
        if ( (unsigned int)(v18 - 4) <= 1 )
        {
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 44), 3, v18);
          if ( v18 == v19 )
          {
            if ( *(_QWORD *)(v14 + 24) == v12 )
            {
              EtwpWaitForBufferReferenceCount(v14);
              if ( v19 == 5 )
              {
                if ( *(_DWORD *)(v14 + 8) != 72 )
                {
                  v20 = (unsigned int *)(v14 + 72);
                  v21 = v14 + *(unsigned int *)(v14 + 8);
                  *(_QWORD *)(v14 + 104) = 0LL;
                  v22 = *(unsigned int *)(v14 + 72);
                  for ( j = (char *)(v14 + 72 + v22); (unsigned __int64)j < v21; j = (char *)v20 + *v20 )
                  {
                    v24 = v20;
                    v20 = (unsigned int *)((char *)v20 + (unsigned int)v22);
                    *((_QWORD *)v20 + 4) = v24;
                    LODWORD(v22) = *v20;
                  }
                  do
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v20, 64) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, v20);
                    v20 = (unsigned int *)*((_QWORD *)v20 + 4);
                  }
                  while ( v20 );
                  _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 44), v18, 5);
                  goto LABEL_55;
                }
                _InterlockedExchange((volatile __int32 *)(v14 + 44), 0);
              }
              else if ( v19 == 4 )
              {
                if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v14, 0) != -2147483614 )
                  LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v14);
                _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 44), v18, 4);
LABEL_55:
                if ( LogFile < 0 )
                  goto LABEL_56;
              }
            }
            else
            {
              _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 44), v18, 3);
            }
          }
        }
        if ( v12 < 0 )
          goto LABEL_56;
      }
    }
    goto LABEL_56;
  }
  v27 = EtwpQueryUsedProcessorCount((__int64)a1);
  v28 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 166, *((_QWORD *)a1 + 103), -1LL) == -1 )
  {
    if ( *((_QWORD *)a1 + 164) )
    {
      v29 = 0;
      if ( v27 )
      {
        v30 = 0LL;
        do
        {
          v31 = *(_QWORD *)(v30 + *((_QWORD *)a1 + 164));
          v32 = *(_QWORD *)(v30 + *((_QWORD *)a1 + 165));
          if ( v31 > v32 )
          {
            do
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*((_QWORD *)a1 + 165) + 8LL * v29),
                      v31,
                      v32);
            }
            while ( v33 != v32 && v31 > v32 );
          }
          ++v29;
          v30 += 8LL;
        }
        while ( v29 < v27 );
      }
    }
    do
    {
      v34 = EtwpFindAndLockBufferForFlushing(a1, *((_QWORD *)a1 + 166));
      v35 = v34;
      if ( !v34 )
        break;
      EtwpWaitForBufferReferenceCount(v34);
      if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v35, 0) != -2147483614 )
      {
        LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v35);
        if ( !v28 )
          v28 = *(_QWORD *)(v35 + 16);
      }
      _InterlockedDecrement64((volatile signed __int64 *)a1 + 166);
      _InterlockedExchange((volatile __int32 *)(v35 + 44), 0);
    }
    while ( LogFile >= 0 );
    if ( *((_QWORD *)a1 + 165) )
    {
      for ( k = (unsigned int *)*((_QWORD *)a1 + 12); ; k = (unsigned int *)*((_QWORD *)v41 + 7) )
      {
        v41 = k - 14;
        if ( k == a1 + 24 )
          v41 = 0LL;
        if ( !v41 )
          break;
        v37 = *((_QWORD *)v41 + 2);
        v38 = *((unsigned __int16 *)v41 + 20);
        if ( v37 < v28 && *((_QWORD *)v41 + 3) <= *((_QWORD *)a1 + 166) )
        {
          v39 = *(_QWORD *)(*((_QWORD *)a1 + 165) + 8 * v38);
          do
          {
            if ( v37 <= v39 )
              break;
            v40 = v39;
            v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 165) + 8 * v38), v37, v39);
          }
          while ( v40 != v39 );
        }
      }
    }
LABEL_56:
    EtwpFinalizeHeader((__int64)a1, 0);
    *((_QWORD *)a1 + 166) = -1LL;
    a1[66] = 0;
    goto LABEL_57;
  }
  return 3221225539LL;
}
