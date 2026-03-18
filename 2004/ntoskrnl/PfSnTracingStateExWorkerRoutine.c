/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140711570
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C502A4 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140C502A4 = 1;
    while ( qword_140C50258 != &qword_140C50258 )
    {
      v2 = qword_140C50260;
      if ( *(PVOID **)qword_140C50260 != &qword_140C50258
        || (v3 = (PVOID *)*((_QWORD *)qword_140C50260 + 1), *v3 != qword_140C50260) )
      {
        __fastfail(3u);
      }
      qword_140C50260 = (PVOID)*((_QWORD *)qword_140C50260 + 1);
      *v3 = &qword_140C50258;
      ExFreePoolWithTag(v2, 0);
      --dword_140C502A0;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140C502A8 )
      KeSetEvent(qword_140C502A8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
