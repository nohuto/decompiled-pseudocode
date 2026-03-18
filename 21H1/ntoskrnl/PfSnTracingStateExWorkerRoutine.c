/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406EDBE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C503E4 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140C503E4 = 1;
    while ( qword_140C50398 != &qword_140C50398 )
    {
      v2 = qword_140C503A0;
      if ( *(PVOID **)qword_140C503A0 != &qword_140C50398
        || (v3 = (PVOID *)*((_QWORD *)qword_140C503A0 + 1), *v3 != qword_140C503A0) )
      {
        __fastfail(3u);
      }
      qword_140C503A0 = (PVOID)*((_QWORD *)qword_140C503A0 + 1);
      *v3 = &qword_140C50398;
      ExFreePoolWithTag(v2, 0);
      --dword_140C503E0;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140C503E8 )
      KeSetEvent(qword_140C503E8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
