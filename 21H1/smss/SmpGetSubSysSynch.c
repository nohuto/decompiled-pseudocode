/*
 * XREFs of SmpGetSubSysSynch @ 0x1400157BC
 * Callers:
 *     SmpCreateKnownSubSys @ 0x140003DEC (SmpCreateKnownSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400158A8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

_DWORD *SmpGetSubSysSynch()
{
  _DWORD *v0; // rbx
  PVOID Heap; // rax

  v0 = 0LL;
  if ( SmpSubSysSynchCache )
  {
    RtlAcquireSRWLockExclusive(&SmpSubSysSynchLock);
    if ( SmpSubSysSynchCache )
    {
      --SmpSubSysSynchCacheSize;
      v0 = (_DWORD *)SmpSubSysSynchCache;
      SmpSubSysSynchCache = *(_QWORD *)SmpSubSysSynchCache;
    }
    RtlReleaseSRWLockExclusive(&SmpSubSysSynchLock);
    if ( v0 )
      goto LABEL_9;
  }
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x10uLL);
  v0 = Heap;
  if ( Heap )
  {
    if ( NtCreateEvent((PHANDLE)Heap + 1, 0x100002u, 0LL, NotificationEvent, 0) < 0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
      v0 = 0LL;
    }
    if ( v0 )
LABEL_9:
      *v0 = 0;
  }
  return v0;
}
