/*
 * XREFs of DequeueAndReadyContext @ 0x1C0026C94
 * Callers:
 *     SignalASLEvent @ 0x1C0026A00 (SignalASLEvent.c)
 *     WriteCookAccess @ 0x1C0026A60 (WriteCookAccess.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 */

struct _SLIST_ENTRY *__fastcall DequeueAndReadyContext(struct _SLIST_ENTRY **a1)
{
  struct _SLIST_ENTRY *v2; // rdi
  struct _SLIST_ENTRY *v3; // rax
  struct _SLIST_ENTRY *Next; // rcx

  v2 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
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
  KeReleaseSpinLock(&SpinLock, NewIrql);
  return v2;
}
