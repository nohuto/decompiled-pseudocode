/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x140241460
 * Callers:
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     EtwpRotateCompressionTarget @ 0x1405A7B74 (EtwpRotateCompressionTarget.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1402415DC (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1402416B8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140241704 (EtwpLockBufferList.c)
 *     EtwpResetBufferHeader @ 0x140241760 (EtwpResetBufferHeader.c)
 *     EtwpEnqueueOverflowBuffer @ 0x140321768 (EtwpEnqueueOverflowBuffer.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     EtwpDisableCompression @ 0x1405A7508 (EtwpDisableCompression.c)
 */

unsigned int *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  char v1; // bp
  bool v3; // zf
  __int64 v4; // rcx
  unsigned int *v5; // rdi
  signed __int32 v6; // edx
  __int64 v7; // rax
  __int64 v8; // r8
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int64 v18; // rdx
  char v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 72) == 0LL;
  v19 = 0;
  if ( v3 && !*(_QWORD *)(a1 + 88) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    EtwpLockBufferList(a1, &v19);
    v5 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 80);
    if ( !v5 )
      v5 = (unsigned int *)EtwpDequeueBuffer(v4, a1 + 64);
    if ( *(_DWORD *)(a1 + 1184) )
    {
      v14 = *(_QWORD *)(a1 + 72);
      if ( !v14 || ((*(_DWORD *)(v14 + 12) - 4) & 0xFFFFFFFD) == 0 )
        v1 = 1;
    }
    EtwpUnlockBufferList(a1, &v19);
    if ( v1 )
      EtwpDisableCompression(a1);
    if ( !v5 )
      return 0LL;
    do
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
      if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
      {
        v6 = v5[11];
        if ( (unsigned int)(v6 - 4) <= 1 )
          goto LABEL_12;
      }
      v6 = 0;
LABEL_12:
      if ( !v5[3] && v6 == _InterlockedCompareExchange((volatile signed __int32 *)v5 + 11, 1, v6) )
        break;
      EtwpEnqueueOverflowBuffer(a1);
      EtwpLockBufferList(a1, &v19);
      v5 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 64);
      EtwpUnlockBufferList(v15, &v19);
    }
    while ( v5 );
    if ( !v5 )
      return 0LL;
    v7 = *(_QWORD *)(a1 + 1312);
    if ( v7 )
    {
      v8 = *((unsigned __int16 *)v5 + 20);
      v9 = *(_QWORD *)(v7 + 8 * v8);
      do
      {
        v10 = *((_QWORD *)v5 + 2);
        if ( v10 <= v9 )
          break;
        v11 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1312) + 8 * v8), v10, v9);
      }
      while ( v11 != v9 );
      if ( *((_QWORD *)v5 + 3) <= *(_QWORD *)(a1 + 1328) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1320) + 8 * v8);
        do
        {
          v18 = *((_QWORD *)v5 + 2);
          if ( v18 <= v16 )
            break;
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1320) + 8 * v8), v18, v16);
        }
        while ( v17 != v16 );
      }
    }
    EtwpResetBufferHeader(v5, 0LL);
  }
  else
  {
    EtwpLockBufferList(a1, &v19);
    v5 = (unsigned int *)EtwpDequeueBuffer(a1, a1 + 64);
    EtwpUnlockBufferList(v13, &v19);
    if ( !v5 )
      return 0LL;
    EtwpResetBufferHeader(v5, 0LL);
    v5[11] = 1;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 244));
  }
  if ( *(_DWORD *)(a1 + 4) != *v5 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)v5, *(unsigned int *)(a1 + 4), *v5);
  return v5;
}
