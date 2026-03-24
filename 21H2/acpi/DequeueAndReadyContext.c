/*
 * XREFs of DequeueAndReadyContext @ 0x1C0029B50
 * Callers:
 *     WriteCookAccess @ 0x1C0029900 (WriteCookAccess.c)
 *     SignalASLEvent @ 0x1C0068798 (SignalASLEvent.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C00047A0 (InsertReadyQueue.c)
 */

struct _SLIST_ENTRY *__fastcall DequeueAndReadyContext(struct _SLIST_ENTRY **a1)
{
  struct _SLIST_ENTRY *v2; // rdi
  struct _SLIST_ENTRY *v3; // rax
  struct _SLIST_ENTRY *Next; // rcx

  v2 = 0LL;
  byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = *a1;
  if ( *a1 != (struct _SLIST_ENTRY *)a1 )
  {
    if ( *((struct _SLIST_ENTRY ***)&v3->Next + 1) != a1 || (Next = v3->Next, *(&v3->Next->Next + 1) != v3) )
      __fastfail(3u);
    *a1 = Next;
    v2 = v3 - 2;
    *((_QWORD *)&Next->Next + 1) = a1;
    *((_QWORD *)&v3->Next + 1) = v3;
    v3->Next = v3;
    InsertReadyQueue(v3 - 2, 1);
  }
  KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
  return v2;
}
