/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140622930
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&Mutex);
  if ( dword_140C504E4 == 2 )
  {
    KeReleaseGuardedMutex(&Mutex);
  }
  else
  {
    dword_140C504E4 = 1;
    while ( qword_140C50498 != &qword_140C50498 )
    {
      v2 = qword_140C504A0;
      if ( *(PVOID **)qword_140C504A0 != &qword_140C50498
        || (v3 = (PVOID *)*((_QWORD *)qword_140C504A0 + 1), *v3 != qword_140C504A0) )
      {
        __fastfail(3u);
      }
      qword_140C504A0 = (PVOID)*((_QWORD *)qword_140C504A0 + 1);
      *v3 = &qword_140C50498;
      ExFreePoolWithTag(v2, 0);
      --dword_140C504E0;
    }
    KeReleaseGuardedMutex(&Mutex);
    if ( qword_140C504E8 )
      KeSetEvent(qword_140C504E8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
