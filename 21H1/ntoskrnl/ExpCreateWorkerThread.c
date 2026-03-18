/*
 * XREFs of ExpCreateWorkerThread @ 0x140655318
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x1407AD1DC (ExpWorkQueueInitializeWithMinimumThreads.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExpPartitionCreateSystemThread @ 0x1406553F4 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpCreateWorkerThread(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // r8d
  signed __int32 v7; // ett
  int SystemThread; // edi
  __int64 v9; // r8
  _DWORD *v10; // r9
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h]

  Handle = 0LL;
  _m_prefetchw(a1 + 89);
  v5 = *((_DWORD *)a1 + 178);
  do
  {
    v6 = (v5 + 1) | 0x4000;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, v6, v5);
  }
  while ( v7 != v5 );
  SystemThread = ExpPartitionCreateSystemThread(a1[86], a1[87], v6, a4);
  if ( SystemThread < 0 )
  {
    _m_prefetchw(a1 + 89);
    v12 = *((_DWORD *)a1 + 178);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v12 & 0x3FFF) - 1, v12);
    }
    while ( v13 != v12 );
  }
  else
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8LL, v9, v10);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
