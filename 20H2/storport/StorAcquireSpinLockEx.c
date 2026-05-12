/*
 * XREFs of StorAcquireSpinLockEx @ 0x1C0037EF8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000B9A8 (RaidAdapterAcquireStartIoLock.c)
 */

__int64 __fastcall StorAcquireSpinLockEx(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v4 = 0;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !a4 )
    return 3238002694LL;
  *(_DWORD *)a4 = a2;
  v7 = a2 - 1;
  if ( !v7 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      if ( a3 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
        return v4;
      }
      return (unsigned int)-1056964602;
    }
    return (unsigned int)-1056964600;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      RaidAdapterAcquireStartIoLock(v5, (struct _KLOCK_QUEUE_HANDLE *)(a4 + 8));
      return v4;
    }
    return (unsigned int)-1056964600;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      *(_BYTE *)(a4 + 24) = RaidAdapterAcquireInterruptLock(v5);
      return v4;
    }
    return (unsigned int)-1056964600;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 )
    {
      KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
      return v4;
    }
    return (unsigned int)-1056964602;
  }
  if ( v10 == 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      if ( a3 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
        return v4;
      }
      return (unsigned int)-1056964602;
    }
    return (unsigned int)-1056964600;
  }
  return (unsigned int)-1056964602;
}
