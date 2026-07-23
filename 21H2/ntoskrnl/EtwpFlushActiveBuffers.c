/*
 * XREFs of EtwpFlushActiveBuffers @ 0x140638A20
 * Callers:
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpIsSingleStreamLogger @ 0x14025436C (EtwpIsSingleStreamLogger.c)
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x14025474C (EtwpLockUnlockBufferList.c)
 *     EtwpRequestFlushTimer @ 0x140281350 (EtwpRequestFlushTimer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpAdjustFreeBuffers @ 0x140637B80 (EtwpAdjustFreeBuffers.c)
 *     EtwpCompleteBuffer @ 0x1406398EC (EtwpCompleteBuffer.c)
 *     EtwpFlushBuffer @ 0x14063990C (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140639A4C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406B7F74 (EtwpRealtimeSendEmptyMarker.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  int v2; // r13d
  __int64 *v5; // r15
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbp
  unsigned __int64 *v10; // r14
  __int64 v11; // r12
  signed __int64 v12; // r8
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int32 v15; // eax
  signed __int64 i; // rcx
  signed __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _QWORD **v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rsi
  int v24; // r10d
  int v25; // r11d
  __int64 v26; // r8
  __int64 j; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned __int16 v35; // r12
  unsigned int v36; // ebp
  _QWORD *v37; // rbx
  unsigned __int16 v38; // ax
  _QWORD **v39; // rsi
  _QWORD *v40; // r13
  _QWORD *v41; // r14
  unsigned int v42; // eax
  unsigned int v43; // r15d
  char v44; // dl
  __int64 v45; // rcx
  char v46; // [rsp+20h] [rbp-158h]
  unsigned __int16 v48; // [rsp+28h] [rbp-150h]
  _BYTE v49[256]; // [rsp+40h] [rbp-138h] BYREF

  v2 = a2;
  memset(v49, 0, sizeof(v49));
  if ( !*((_QWORD *)a1 + 102) && !*((_QWORD *)a1 + 47) )
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v5 = (__int64 *)v49;
  v46 = 0;
  v6 = 0;
  if ( *((_QWORD *)a1 + 130) )
    v5 = (__int64 *)*((_QWORD *)a1 + 130);
  if ( (a1[3] & 0x40000) != 0 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
    if ( v7 )
    {
      *v5 = v7;
      v6 = 1;
    }
    goto LABEL_36;
  }
  v8 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (unsigned __int64 *)v5;
    v11 = (__int64)v8 << 6;
    while ( 1 )
    {
      if ( EtwpIsSingleStreamLogger((__int64)a1) )
        v13 = a1 + 36;
      else
        v13 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v11) + 8LL * *a1);
      v14 = *v13 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v14 )
        goto LABEL_34;
      if ( v2 )
        break;
      v20 = *(_QWORD *)((*v13 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
      if ( v20 )
      {
        *v10 = v20;
        *(_QWORD *)(v14 + 32) = v12;
LABEL_33:
        ++v6;
        ++v10;
      }
LABEL_34:
      v11 -= 64LL;
      if ( --v9 < 0 )
        goto LABEL_35;
    }
    v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), a1[1]);
    if ( v15 <= a1[1] )
      *(_DWORD *)(v14 + 4) = v15;
    _m_prefetchw(v13);
    for ( i = *v13; (v14 ^ i) <= 0xF; i = v17 )
    {
      v17 = _InterlockedCompareExchange64(v13, v12, i);
      if ( i == v17 )
        break;
    }
    v18 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v14 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), -(i & 0xF));
      EtwpPrepareDirtyBuffer((__int64)a1, v18);
    }
    else
    {
      if ( v18 )
      {
        do
        {
          v19 = *(_QWORD *)(v18 + 32);
          if ( v19 == v14 )
            break;
          v18 = *(_QWORD *)(v18 + 32);
        }
        while ( v19 );
      }
      *(_QWORD *)(v18 + 32) = v12;
      v46 = 1;
    }
    *v10 = v14;
    goto LABEL_33;
  }
LABEL_35:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_36:
  v21 = 0LL;
  if ( v6 > 0 )
  {
    v22 = v6;
    v23 = &v5[v6 - 1];
    do
    {
      v24 = 1;
      v25 = 0;
      v26 = 0LL;
      for ( j = 1LL; j < v22; v25 = v31 )
      {
        v28 = *(_QWORD *)(v5[j] + 16);
        v29 = *(_QWORD *)(v5[v26] + 16);
        v30 = j;
        if ( v28 <= v29 )
          v30 = v26;
        v26 = v30;
        v31 = v24;
        if ( v28 <= v29 )
          v31 = v25;
        ++v24;
        ++j;
      }
      v32 = v5[v26];
      v33 = *(_QWORD *)(v32 + 32);
      v5[v26] = v33;
      if ( !v33 )
      {
        --v22;
        v5[v26] = *v23--;
      }
      if ( *(int *)(v32 + 12) <= 0
        && (v34 = *(_DWORD *)(v32 + 4), v34 <= 0x48)
        && (v34 || *(_DWORD *)(v32 + 8) <= 0x48u) )
      {
        EtwpCompleteBuffer(a1, v32);
      }
      else
      {
        *(_QWORD *)(v32 + 32) = v21;
        v21 = (_QWORD **)(v32 + 32);
      }
    }
    while ( v22 > 0 );
    v2 = a2;
  }
  v35 = 0;
  v36 = 0;
  if ( v21 )
  {
    v37 = *v21;
    v38 = v2 != 0;
    v48 = v38;
    do
    {
      v39 = v21 - 4;
      if ( v37 )
        v38 = v35;
      v35 = v38;
      EtwpAdjustFreeBuffers((__int64)a1);
      EtwpWaitForBufferReferenceCount(v21 - 4);
      *v21 = 0LL;
      v40 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        v40 = v39[7];
        v41 = v39[8];
        v39[7] = 0LL;
        v39[8] = 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      v42 = EtwpFlushBuffer(a1, v39, v35);
      v43 = v42;
      if ( (a1[3] & 0x40000) != 0 )
      {
        *((_WORD *)v39 + 26) = 0;
        ((void (__fastcall *)(_QWORD, _QWORD **, _QWORD *))v40)(v42, v39, v41);
      }
      else
      {
        EtwpCompleteBuffer(a1, v39);
      }
      v21 = (_QWORD **)v37;
      if ( v37 )
        v37 = (_QWORD *)*v37;
      v38 = v48;
      if ( v43 )
        v36 = v43;
    }
    while ( v21 );
    if ( a1[56] && a2 && (!EtwpIsSingleStreamLogger((__int64)a1) || v46 != v44) )
      EtwpRequestFlushTimer(v45, v44);
  }
  else if ( v2 && (a1[208] & 8) != 0 )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v36;
}
