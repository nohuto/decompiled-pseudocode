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
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 *v10; // r14
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int32 v14; // eax
  signed __int64 i; // rcx
  signed __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD **v18; // r14
  __int64 v19; // rbx
  __int64 *v20; // rdi
  int v21; // r10d
  int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int16 v28; // r13
  unsigned int v29; // ebp
  _QWORD *v30; // rbx
  __int16 v31; // ax
  unsigned int v32; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // [rsp+20h] [rbp-148h]
  _BYTE v42[256]; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  memset(v42, 0, sizeof(v42));
  if ( !*((_QWORD *)a1 + 102) && !*((_QWORD *)a1 + 47) )
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v4 = (__int64 *)v42;
  v40 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 130) )
    v4 = (__int64 *)*((_QWORD *)a1 + 130);
  if ( (a1[3] & 0x40000) != 0 )
  {
    v38 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
    if ( v38 )
    {
      *v4 = v38;
      v5 = 1;
    }
    goto LABEL_26;
  }
  v6 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_25;
  v9 = (__int64)v6 << 6;
  v10 = (unsigned __int64 *)v4;
  do
  {
    if ( (a1[3] & 0x10000000) != 0 )
      v11 = a1 + 36;
    else
      v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v9) + 8LL * *a1);
    v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v12 )
    {
      if ( a2 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), a1[1]);
        if ( v14 <= a1[1] )
          *(_DWORD *)(v12 + 4) = v14;
        _m_prefetchw(v11);
        for ( i = *v11; (v12 ^ i) <= 0xF; i = v16 )
        {
          v16 = _InterlockedCompareExchange64(v11, 0LL, i);
          if ( i == v16 )
            break;
        }
        v17 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v12 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v17, 0LL, v7);
        }
        else
        {
          if ( v17 )
          {
            do
            {
              v39 = *(_QWORD *)(v17 + 32);
              if ( v39 == v12 )
                break;
              v17 = *(_QWORD *)(v17 + 32);
            }
            while ( v39 );
          }
          *(_QWORD *)(v17 + 32) = 0LL;
          v40 = 1;
        }
        *v10 = v12;
      }
      else
      {
        v13 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
        if ( !v13 )
          goto LABEL_23;
        *v10 = v13;
        *(_QWORD *)(v12 + 32) = 0LL;
      }
      ++v5;
      ++v10;
    }
LABEL_23:
    v9 -= 64LL;
    --v8;
  }
  while ( v8 >= 0 );
  v2 = a2;
LABEL_25:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_26:
  v18 = 0LL;
  if ( v5 > 0 )
  {
    v19 = v5;
    v20 = &v4[v5 - 1];
    do
    {
      v21 = 1;
      v22 = 0;
      v23 = 1LL;
      v24 = 0LL;
      while ( v23 < v19 )
      {
        v34 = *(_QWORD *)(v4[v23] + 16);
        v35 = *(_QWORD *)(v4[v24] + 16);
        v36 = v23;
        if ( v34 <= v35 )
          v36 = v24;
        v24 = v36;
        v37 = v21;
        if ( v34 <= v35 )
          v37 = v22;
        ++v21;
        ++v23;
        v22 = v37;
      }
      v25 = v4[v24];
      v26 = *(_QWORD *)(v25 + 32);
      v4[v24] = v26;
      if ( !v26 )
      {
        --v19;
        v4[v24] = *v20--;
      }
      if ( *(int *)(v25 + 12) <= 0
        && (v27 = *(_DWORD *)(v25 + 4), v27 <= 0x48)
        && (v27 || *(_DWORD *)(v25 + 8) <= 0x48u) )
      {
        EtwpCompleteBuffer((__int64)a1, v25, 0);
      }
      else
      {
        *(_QWORD *)(v25 + 32) = v18;
        v18 = (_QWORD **)(v25 + 32);
      }
    }
    while ( v19 > 0 );
    v2 = a2;
  }
  v28 = 0;
  v29 = 0;
  if ( v18 )
  {
    v30 = *v18;
    do
    {
      v31 = a2 != 0;
      if ( v30 )
        v31 = v28;
      v28 = v31;
      EtwpAdjustFreeBuffers((__int64)a1);
      EtwpWaitForBufferReferenceCount((__int64)(v18 - 4));
      v32 = EtwpFlushBuffer((__int64)a1, (__int64)(v18 - 4), v28);
      EtwpCompleteBuffer((__int64)a1, (__int64)(v18 - 4), v32);
      v18 = (_QWORD **)v30;
      if ( v30 )
        v30 = (_QWORD *)*v30;
      if ( v32 )
        v29 = v32;
    }
    while ( v18 );
    if ( a1[56] && a2 && ((a1[3] & 0x10000000) == 0 || v40) )
      EtwpRequestFlushTimer((__int64)a1, 0);
  }
  else if ( v2 && (a1[208] & 8) != 0 )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v29;
}
