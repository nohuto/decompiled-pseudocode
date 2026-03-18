/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C0073850
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 */

_QWORD *__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2, int a3)
{
  _QWORD *result; // rax
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 16) = a2;
  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore((HSEMAPHORE)MultiUserEngAllocListLock);
  result = (_QWORD *)qword_1C02561E0;
  if ( *(struct _LIST_ENTRY **)qword_1C02561E0 != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  qword_1C02561E0 = a1;
  if ( MultiUserEngAllocListLock )
  {
    result = (_QWORD *)EtwTraceGreLockReleaseSemaphore(
                         (__int64)L"MultiUserEngAllocListLock",
                         (int)MultiUserEngAllocListLock,
                         a3);
    if ( MultiUserEngAllocListLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(MultiUserEngAllocListLock);
      return (_QWORD *)PsLeavePriorityRegion(v5);
    }
  }
  return result;
}
