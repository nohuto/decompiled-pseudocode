/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1402DED30
 * Callers:
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1405F2538 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x14067ACA0 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14024161C (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x1402416B8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140241704 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x1402DEE60 (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x1402DEEBC (EtwpAllocateTraceBuffer.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  bool v4; // zf
  unsigned __int32 v7; // edi
  __int64 TraceBuffer; // r14
  unsigned __int32 v9; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  unsigned __int8 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 832) & 0x1000) == 0;
  v13 = 0;
  if ( !v4 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      if ( v7 > *(_DWORD *)(a1 + 252) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
        goto LABEL_12;
      }
      TraceBuffer = EtwpAllocateTraceBuffer(a1, v2);
      if ( !TraceBuffer )
        break;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a1 + 260);
        if ( v9 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 260), v7, v9);
      }
      EtwpInitializeBufferHeader(a1, TraceBuffer);
      EtwpLockBufferList(a1, &v13);
      v10 = *(_QWORD **)(a1 + 104);
      v11 = (_QWORD *)(TraceBuffer + 56);
      if ( *v10 != a1 + 96 )
        __fastfail(3u);
      *(_QWORD *)(TraceBuffer + 64) = v10;
      *v11 = a1 + 96;
      *v10 = v11;
      *(_QWORD *)(a1 + 104) = v11;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)TraceBuffer, 0);
      if ( ++v3 >= a2 )
        goto LABEL_12;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
  else
  {
LABEL_12:
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(a1 + 1112) + 4LL * (*(_DWORD *)(a1 + 316) & 1) + 4116),
      *(_DWORD *)(a1 + 4) * v3);
  }
  return v3;
}
