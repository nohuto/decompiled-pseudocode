/*
 * XREFs of MiProcessingPageExtendComplete @ 0x14052473C
 * Callers:
 *     MiProcessDereferenceList @ 0x1403842FC (MiProcessDereferenceList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

KIRQL __fastcall MiProcessingPageExtendComplete(__int64 a1, struct _KEVENT *a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL v6; // di

  v5 = (volatile LONG *)(a3 + 1344);
  if ( (*(_BYTE *)(a1 + 79) & 4) != 0 )
  {
    _InterlockedExchange(&a2[3].Header.Lock, 0);
    return ExAcquireSpinLockExclusive(v5);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( *(_QWORD *)(a1 + 80) )
    {
      a2[1].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 40);
      KeSetEvent(a2 + 2, 0, 0);
    }
  }
  return v6;
}
