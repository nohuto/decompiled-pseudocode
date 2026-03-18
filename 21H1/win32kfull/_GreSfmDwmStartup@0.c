/*
 * XREFs of _GreSfmDwmStartup@0 @ 0xE1DB2
 * Callers:
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     <none>
 */

int __stdcall GreSfmDwmStartup()
{
  char *v0; // eax
  char *v1; // ecx
  char *v3; // eax

  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  v0 = (char *)gpSfmState + 24;
  v1 = (char *)*((_DWORD *)gpSfmState + 6);
  while ( v1 != v0 )
  {
    v3 = v1;
    v1 = *(char **)v1;
    if ( !*((_DWORD *)v3 + 35) )
      *((_DWORD *)v3 + 34) |= 0x10u;
    v0 = (char *)gpSfmState + 24;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  return GreReleaseSemaphoreInternal(_ghsemDwmState);
}
