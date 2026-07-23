/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1405F2E4C
 * Callers:
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 * Callees:
 *     EtwpRequestFlushTimer @ 0x14023602C (EtwpRequestFlushTimer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14024124C (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402417B8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x1402F15E0 (EtwpLockUnlockBufferList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1405F22E4 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x1405F2318 (EtwpFlushBuffer.c)
 *     EtwpCompleteBuffer @ 0x1405F2458 (EtwpCompleteBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1405F2538 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14067CF90 (EtwpRealtimeSendEmptyMarker.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  int v2; // r12d
  __int64 *v4; // r15
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned __int64 *v9; // r14
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int32 v13; // eax
  signed __int64 i; // rcx
  signed __int64 v15; // rax
  LARGE_INTEGER *QuadPart; // rax
  _QWORD **v17; // r14
  __int64 v18; // rbx
  __int64 *v19; // rdi
  int v20; // r10d
  int v21; // r11d
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // eax
  __int16 v27; // r13
  unsigned int v28; // ebp
  _QWORD *v29; // rbx
  __int16 v30; // ax
  unsigned int v31; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  LARGE_INTEGER v38; // rcx
  char v39; // [rsp+20h] [rbp-148h]
  _BYTE v41[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  memset(v41, 0, sizeof(v41));
  if ( !*((_QWORD *)a1 + 102) && !*((_QWORD *)a1 + 47) )
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v4 = (__int64 *)v41;
  v39 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 130) )
    v4 = (__int64 *)*((_QWORD *)a1 + 130);
  if ( (a1[3] & 0x40000) != 0 )
  {
    v37 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
    if ( v37 )
    {
      *v4 = v37;
      v5 = 1;
    }
    goto LABEL_26;
  }
  v6 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  v7 = v6;
  if ( v6 < 0 )
    goto LABEL_25;
  v8 = (__int64)v6 << 6;
  v9 = (unsigned __int64 *)v4;
  do
  {
    if ( (a1[3] & 0x10000000) != 0 )
      v10 = a1 + 36;
    else
      v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v8) + 8LL * *a1);
    v11 = *v10 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 )
    {
      if ( a2 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), a1[1]);
        if ( v13 <= a1[1] )
          *(_DWORD *)(v11 + 4) = v13;
        _m_prefetchw(v10);
        for ( i = *v10; (v11 ^ i) <= 0xF; i = v15 )
        {
          v15 = _InterlockedCompareExchange64(v10, 0LL, i);
          if ( i == v15 )
            break;
        }
        QuadPart = (LARGE_INTEGER *)(i & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v11 )
        {
          _InterlockedExchangeAdd(&QuadPart[1].HighPart, -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, QuadPart);
        }
        else
        {
          if ( QuadPart )
          {
            do
            {
              v38 = QuadPart[4];
              if ( v38.QuadPart == v11 )
                break;
              QuadPart = (LARGE_INTEGER *)QuadPart[4].QuadPart;
            }
            while ( v38.QuadPart );
          }
          QuadPart[4].QuadPart = 0LL;
          v39 = 1;
        }
        *v9 = v11;
      }
      else
      {
        v12 = *(_QWORD *)((*v10 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
        if ( !v12 )
          goto LABEL_23;
        *v9 = v12;
        *(_QWORD *)(v11 + 32) = 0LL;
      }
      ++v5;
      ++v9;
    }
LABEL_23:
    v8 -= 64LL;
    --v7;
  }
  while ( v7 >= 0 );
  v2 = a2;
LABEL_25:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_26:
  v17 = 0LL;
  if ( v5 > 0 )
  {
    v18 = v5;
    v19 = &v4[v5 - 1];
    do
    {
      v20 = 1;
      v21 = 0;
      v22 = 1LL;
      v23 = 0LL;
      while ( v22 < v18 )
      {
        v33 = *(_QWORD *)(v4[v22] + 16);
        v34 = *(_QWORD *)(v4[v23] + 16);
        v35 = v22;
        if ( v33 <= v34 )
          v35 = v23;
        v23 = v35;
        v36 = v20;
        if ( v33 <= v34 )
          v36 = v21;
        ++v20;
        ++v22;
        v21 = v36;
      }
      v24 = v4[v23];
      v25 = *(_QWORD *)(v24 + 32);
      v4[v23] = v25;
      if ( !v25 )
      {
        --v18;
        v4[v23] = *v19--;
      }
      if ( *(int *)(v24 + 12) <= 0
        && (v26 = *(_DWORD *)(v24 + 4), v26 <= 0x48)
        && (v26 || *(_DWORD *)(v24 + 8) <= 0x48u) )
      {
        EtwpCompleteBuffer((__int64)a1, v24, 0);
      }
      else
      {
        *(_QWORD *)(v24 + 32) = v17;
        v17 = (_QWORD **)(v24 + 32);
      }
    }
    while ( v18 > 0 );
    v2 = a2;
  }
  v27 = 0;
  v28 = 0;
  if ( v17 )
  {
    v29 = *v17;
    do
    {
      v30 = a2 != 0;
      if ( v29 )
        v30 = v27;
      v27 = v30;
      EtwpAdjustFreeBuffers((__int64)a1);
      EtwpWaitForBufferReferenceCount((__int64)(v17 - 4));
      v31 = EtwpFlushBuffer((__int64)a1, (__int64)(v17 - 4), v27);
      EtwpCompleteBuffer((__int64)a1, (__int64)(v17 - 4), v31);
      v17 = (_QWORD **)v29;
      if ( v29 )
        v29 = (_QWORD *)*v29;
      if ( v31 )
        v28 = v31;
    }
    while ( v17 );
    if ( a1[56] && a2 && ((a1[3] & 0x10000000) == 0 || v39) )
      EtwpRequestFlushTimer((__int64)a1, 0);
  }
  else if ( v2 && (a1[208] & 8) != 0 )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v28;
}
