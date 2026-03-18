/*
 * XREFs of ExpCreateWorkerThread @ 0x1406DCB98
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408520BC (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ExpPartitionCreateSystemThread @ 0x1406DCC74 (ExpPartitionCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ExpCreateWorkerThread(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // r8d
  signed __int32 v7; // ett
  int SystemThread; // edi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
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
    v10 = *((_DWORD *)a1 + 178);
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v10 & 0x3FFF) - 1, v10);
    }
    while ( v11 != v10 );
  }
  else
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
