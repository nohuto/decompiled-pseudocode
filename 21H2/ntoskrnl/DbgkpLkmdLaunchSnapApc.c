/*
 * XREFs of DbgkpLkmdLaunchSnapApc @ 0x1408884B4
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1404EE784 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkpLkmdLaunchSnapApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rax
  void *v9; // rdi
  volatile signed __int32 *v11; // r14
  void *v12; // rbp
  unsigned int v13; // ebx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-28h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x704E534Bu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *((_QWORD *)PoolWithTag + 13) = a2;
  v11 = (volatile signed __int32 *)(PoolWithTag + 88);
  *((_DWORD *)PoolWithTag + 22) = 0;
  v12 = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 12) = a1;
  *((_QWORD *)PoolWithTag + 14) = a4;
  KeInitializeEvent((PRKEVENT)PoolWithTag + 5, NotificationEvent, 0);
  KeInitializeApc((__int64)v9, a3, 0, (__int64)DbgkpLkmdSnapThreadApc, 0LL, 0LL, 0, 0LL);
  if ( KeInsertQueueApc((__int64)v9, (__int64)v9, (__int64)v11, 2) )
  {
    Timeout.QuadPart = -50000000LL;
    while ( 1 )
    {
      v13 = KeWaitForSingleObject(v12, Executive, 0, 0, &Timeout);
      if ( !v13 )
        break;
      if ( v13 == 258 )
        *(_DWORD *)(a4 + 4) |= 0x8000u;
      if ( !_InterlockedCompareExchange(v11, 1, 0) )
        return v13;
    }
    ExFreePoolWithTag(v9, 0x704E534Bu);
    return v13;
  }
  else
  {
    ExFreePoolWithTag(v9, 0x704E534Bu);
    *(_DWORD *)(a4 + 4) |= 0x4000u;
    return 3221225473LL;
  }
}
