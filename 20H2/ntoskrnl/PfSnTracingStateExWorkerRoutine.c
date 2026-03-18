/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406E40B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C50324 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140C50324 = 1;
    while ( qword_140C502D8 != &qword_140C502D8 )
    {
      v2 = qword_140C502E0;
      if ( *(PVOID **)qword_140C502E0 != &qword_140C502D8
        || (v3 = (PVOID *)*((_QWORD *)qword_140C502E0 + 1), *v3 != qword_140C502E0) )
      {
        __fastfail(3u);
      }
      qword_140C502E0 = (PVOID)*((_QWORD *)qword_140C502E0 + 1);
      *v3 = &qword_140C502D8;
      ExFreePoolWithTag(v2, 0);
      --dword_140C50320;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140C50328 )
      KeSetEvent(qword_140C50328, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
