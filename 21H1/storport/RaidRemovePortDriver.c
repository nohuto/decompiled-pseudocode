/*
 * XREFs of RaidRemovePortDriver @ 0x1C00344C8
 * Callers:
 *     RaDeleteDriver @ 0x1C0078D7C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidRemovePortDriver(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 24), &LockHandle);
  v4 = (_QWORD *)(a2 + 24);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --*(_DWORD *)(a1 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
