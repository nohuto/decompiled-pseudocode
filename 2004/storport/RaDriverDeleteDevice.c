/*
 * XREFs of RaDriverDeleteDevice @ 0x1C00332F8
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002FD44 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDriverDeleteDevice(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  KSPIN_LOCK *DriverObjectExtension; // rax
  KSPIN_LOCK *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v2 = a1 + 8;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1[8] && a1[9] )
  {
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(a1[1] + 8LL), DriverEntry);
    v4 = DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
      v5 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      --*((_DWORD *)v4 + 18);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    else
    {
      return 3221225701LL;
    }
  }
  return result;
}
