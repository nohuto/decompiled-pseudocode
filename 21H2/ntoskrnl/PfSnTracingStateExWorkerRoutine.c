/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406C3D50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C504A4 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140C504A4 = 1;
    while ( qword_140C50458 != &qword_140C50458 )
    {
      v2 = qword_140C50460;
      if ( *(PVOID **)qword_140C50460 != &qword_140C50458
        || (v3 = (PVOID *)*((_QWORD *)qword_140C50460 + 1), *v3 != qword_140C50460) )
      {
        __fastfail(3u);
      }
      qword_140C50460 = (PVOID)*((_QWORD *)qword_140C50460 + 1);
      *v3 = &qword_140C50458;
      ExFreePoolWithTag(v2, 0);
      --dword_140C504A0;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140C504A8 )
      KeSetEvent(qword_140C504A8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
