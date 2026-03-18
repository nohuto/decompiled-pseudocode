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
  __int64 v6; // r9
  __int64 v7; // rsi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int32 v10; // eax
  signed __int64 i; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  signed __int32 v19; // r14d
  signed __int32 v20; // esi
  unsigned int *v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  char *j; // rax
  unsigned int *v25; // rcx
  void *v26; // rcx
  unsigned int v28; // r10d
  signed __int64 v29; // rsi
  unsigned int v30; // edx
  __int64 v31; // r8
  signed __int64 v32; // r9
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int *k; // rax
  signed __int64 v38; // r8
  __int64 v39; // r9
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  unsigned int *v42; // rdx

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
    v26 = (void *)*((_QWORD *)a1 + 102);
    if ( v26 )
    {
      ZwClose(v26);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 42));
    return (unsigned int)LogFile;
  }
  if ( (_DWORD)UsedProcessorCount )
  {
    v7 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v8 = a1 + 36;
      else
        v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v7) + 8 * v3);
      v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v1);
        if ( v10 <= v1 )
          *(_DWORD *)(v9 + 4) = v10;
        _m_prefetchw(v8);
        for ( i = *v8; (v9 ^ i) <= 0xF; i = v12 )
        {
          v12 = _InterlockedCompareExchange64(v8, 0LL, i);
          if ( i == v12 )
            break;
        }
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v9 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v9, (__int64)v8, v6);
        }
      }
      v7 += 64LL;
      --UsedProcessorCount;
    }
    while ( UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) != 0 )
  {
    EtwpBufferingModeCompressionFlush((__int64)a1);
    v13 = *((_QWORD *)a1 + 103) + 1LL;
    if ( v13 >= 0 )
    {
      v14 = a1 + 24;
      while ( 1 )
      {
        --v13;
        v15 = 0LL;
        v16 = *v14 - 56LL;
        if ( (_QWORD *)*v14 == v14 )
          v16 = 0LL;
        if ( !v16 )
          goto LABEL_56;
        while ( 1 )
        {
          v17 = *(_QWORD *)(v16 + 24);
          if ( v17 == v13 )
            break;
          if ( v17 < v13 && (!v15 || v17 > *(_QWORD *)(v15 + 24)) )
            v15 = v16;
          v18 = *(_QWORD **)(v16 + 56);
          v16 = (__int64)(v18 - 7);
          if ( v18 == v14 )
            v16 = 0LL;
          if ( !v16 )
            goto LABEL_36;
        }
        v15 = v16;
LABEL_36:
        if ( !v15 )
          goto LABEL_56;
        v19 = *(_DWORD *)(v15 + 44);
        if ( (unsigned int)(v19 - 4) <= 1 )
        {
          v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), 3, v19);
          if ( v19 == v20 )
          {
            if ( *(_QWORD *)(v15 + 24) == v13 )
            {
              EtwpWaitForBufferReferenceCount(v15);
              if ( v20 == 5 )
              {
                if ( *(_DWORD *)(v15 + 8) != 72 )
                {
                  v21 = (unsigned int *)(v15 + 72);
                  v22 = v15 + *(unsigned int *)(v15 + 8);
                  *(_QWORD *)(v15 + 104) = 0LL;
                  v23 = *(unsigned int *)(v15 + 72);
                  for ( j = (char *)(v15 + 72 + v23); (unsigned __int64)j < v22; j = (char *)v21 + *v21 )
                  {
                    v25 = v21;
                    v21 = (unsigned int *)((char *)v21 + (unsigned int)v23);
                    *((_QWORD *)v21 + 4) = v25;
                    LODWORD(v23) = *v21;
                  }
                  do
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v21, 64) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, v21);
                    v21 = (unsigned int *)*((_QWORD *)v21 + 4);
                  }
                  while ( v21 );
                  _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, 5);
                  goto LABEL_55;
                }
                _InterlockedExchange((volatile __int32 *)(v15 + 44), 0);
              }
              else if ( v20 == 4 )
              {
                if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v15, 0) != -2147483614 )
                  LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v15);
                _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, 4);
LABEL_55:
                if ( LogFile < 0 )
                  goto LABEL_56;
              }
            }
            else
            {
              _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, 3);
            }
          }
        }
        if ( v13 < 0 )
          goto LABEL_56;
      }
    }
    goto LABEL_56;
  }
  v28 = EtwpQueryUsedProcessorCount((__int64)a1);
  v29 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 166, *((_QWORD *)a1 + 103), -1LL) == -1 )
  {
    if ( *((_QWORD *)a1 + 164) )
    {
      v30 = 0;
      if ( v28 )
      {
        v31 = 0LL;
        do
        {
          v32 = *(_QWORD *)(v31 + *((_QWORD *)a1 + 164));
          v33 = *(_QWORD *)(v31 + *((_QWORD *)a1 + 165));
          if ( v32 > v33 )
          {
            do
            {
              v34 = v33;
              v33 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*((_QWORD *)a1 + 165) + 8LL * v30),
                      v32,
                      v33);
            }
            while ( v34 != v33 && v32 > v33 );
          }
          ++v30;
          v31 += 8LL;
        }
        while ( v30 < v28 );
      }
    }
    do
    {
      v35 = EtwpFindAndLockBufferForFlushing(a1, *((_QWORD *)a1 + 166));
      v36 = v35;
      if ( !v35 )
        break;
      EtwpWaitForBufferReferenceCount(v35);
      if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v36, 0) != -2147483614 )
      {
        LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v36);
        if ( !v29 )
          v29 = *(_QWORD *)(v36 + 16);
      }
      _InterlockedDecrement64((volatile signed __int64 *)a1 + 166);
      _InterlockedExchange((volatile __int32 *)(v36 + 44), 0);
    }
    while ( LogFile >= 0 );
    if ( *((_QWORD *)a1 + 165) )
    {
      for ( k = (unsigned int *)*((_QWORD *)a1 + 12); ; k = (unsigned int *)*((_QWORD *)v42 + 7) )
      {
        v42 = k - 14;
        if ( k == a1 + 24 )
          v42 = 0LL;
        if ( !v42 )
          break;
        v38 = *((_QWORD *)v42 + 2);
        v39 = *((unsigned __int16 *)v42 + 20);
        if ( v38 < v29 && *((_QWORD *)v42 + 3) <= *((_QWORD *)a1 + 166) )
        {
          v40 = *(_QWORD *)(*((_QWORD *)a1 + 165) + 8 * v39);
          do
          {
            if ( v38 <= v40 )
              break;
            v41 = v40;
            v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)a1 + 165) + 8 * v39), v38, v40);
          }
          while ( v41 != v40 );
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
