/*
 * XREFs of EtwpFlushActiveBuffers @ 0x180055234
 * Callers:
 *     EtwpLogger @ 0x180055030 (EtwpLogger.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180055420 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x180055494 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180055688 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpSendSessionNotification @ 0x180055EA4 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned int v7; // esi
  unsigned __int16 v8; // r13
  __int64 *v9; // rdx
  __int64 v10; // r8
  _QWORD **v11; // rax
  _QWORD *v12; // rdi
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // ax
  _QWORD *v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rcx
  unsigned __int32 v21; // eax
  __int64 v22; // rcx
  unsigned __int16 v23; // [rsp+58h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 208);
  v3 = a1 + 88;
  v4 = *(unsigned int *)(a1 + 204);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection(a1 + 88);
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v9 = (__int64 *)(a1 + 576);
    v10 = v4;
    do
    {
      v20 = *v9;
      if ( *v9 && *(_DWORD *)(v20 + 8) != 72 )
      {
        *v9 = 0LL;
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), v2);
        if ( v21 <= v2 )
          *(_DWORD *)(v20 + 4) = v21;
        *(_DWORD *)(v20 + 44) = 3;
        v22 = v20 + 32;
        **(_QWORD **)(a1 + 280) = v22;
        *(_QWORD *)(a1 + 280) = v22;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  v11 = *(_QWORD ***)(a1 + 272);
  if ( v11 == *(_QWORD ***)(a1 + 280) )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = *v11;
    *v11 = 0LL;
    *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 272);
  }
  RtlLeaveCriticalSection(v3, (__int64)v9, v10);
  if ( v12 )
  {
    v13 = a2 != 0;
    do
    {
      v14 = v13;
      v15 = v12;
      if ( *v12 )
        v14 = v8;
      v16 = v12;
      v12 = (_QWORD *)*v12;
      v23 = v14;
      EtwpWaitForBufferReferenceCount(v15 - 4);
      v7 = EtwpFlushBuffer(a1, v15 - 4, v23);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3LL, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v16 + 3) = 0;
      *v15 = 0LL;
      *(v16 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v15;
      *(_QWORD *)(a1 + 256) = v15;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      RtlLeaveCriticalSection(v3, v17, v18);
      RtlWakeAllConditionVariable(a1 + 80);
      v8 = v23;
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v12 );
  }
  return v7;
}
