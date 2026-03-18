/*
 * XREFs of EtwpFlushActiveBuffers @ 0x14066B214
 * Callers:
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027DFDC (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027E550 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1402C8E5C (EtwpRequestFlushTimer.c)
 *     EtwpLockUnlockBufferList @ 0x14032D380 (EtwpLockUnlockBufferList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpFlushBuffer @ 0x14069BE48 (EtwpFlushBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1406CA45C (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406CA960 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpCompleteBuffer @ 0x1406FCBB4 (EtwpCompleteBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406FFCA8 (EtwpWaitForBufferReferenceCount.c)
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
  unsigned __int64 v16; // rax
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
  unsigned __int16 v27; // r13
  unsigned int v28; // ebp
  _QWORD *v29; // rbx
  unsigned __int16 v30; // ax
  __int64 v31; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // [rsp+20h] [rbp-148h]
  _BYTE v41[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  memset(v41, 0, sizeof(v41));
  if ( !*((_QWORD *)a1 + 102) && !*((_QWORD *)a1 + 47) )
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0LL);
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
        v16 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v11 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v16);
        }
        else
        {
          if ( v16 )
          {
            do
            {
              v38 = *(_QWORD *)(v16 + 32);
              if ( v38 == v11 )
                break;
              v16 = *(_QWORD *)(v16 + 32);
            }
            while ( v38 );
          }
          *(_QWORD *)(v16 + 32) = 0LL;
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
        EtwpCompleteBuffer(a1, v24, 0LL);
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
      EtwpAdjustFreeBuffers(a1);
      EtwpWaitForBufferReferenceCount(v17 - 4);
      v31 = (unsigned int)EtwpFlushBuffer(a1, v17 - 4, v27);
      EtwpCompleteBuffer(a1, v17 - 4, v31);
      v17 = (_QWORD **)v29;
      if ( v29 )
        v29 = (_QWORD *)*v29;
      if ( (_DWORD)v31 )
        v28 = v31;
    }
    while ( v17 );
    if ( a1[56] && a2 && ((a1[3] & 0x10000000) == 0 || v39) )
      EtwpRequestFlushTimer((__int64)a1, 0LL);
  }
  else if ( v2 && (a1[208] & 8) != 0 )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v28;
}
