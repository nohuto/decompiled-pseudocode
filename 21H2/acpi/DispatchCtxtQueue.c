/*
 * XREFs of DispatchCtxtQueue @ 0x1C00106B0
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  char v1; // cl
  __int64 v2; // rcx
  __int64 v3; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = gReadyQueue & 0xFD;
  NewIrql = v0;
  gReadyQueue &= ~2u;
  if ( (__int64 *)qword_1C0081D68 != &qword_1C0081D68
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v1 & 8) == 0 )
  {
    while ( 1 )
    {
      v2 = qword_1C0081D68;
      if ( (__int64 *)qword_1C0081D68 == &qword_1C0081D68 )
        break;
      if ( *(__int64 **)(qword_1C0081D68 + 8) != &qword_1C0081D68
        || (v3 = *(_QWORD *)qword_1C0081D68, *(_QWORD *)(*(_QWORD *)qword_1C0081D68 + 8LL) != qword_1C0081D68) )
      {
        __fastfail(3u);
      }
      qword_1C0081D68 = *(_QWORD *)qword_1C0081D68;
      *(_QWORD *)(v3 + 8) = &qword_1C0081D68;
      *(_DWORD *)(v2 + 32) &= ~0x40u;
      *(_QWORD *)(v2 + 8) = v2;
      *(_QWORD *)v2 = v2;
      RunContext((PSLIST_ENTRY)(v2 - 32));
    }
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
