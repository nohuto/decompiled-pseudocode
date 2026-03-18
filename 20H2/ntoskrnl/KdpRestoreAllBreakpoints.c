/*
 * XREFs of KdpRestoreAllBreakpoints @ 0x1409BD598
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x14050F24C (KdEnableDebuggerWithLock.c)
 * Callees:
 *     KdpLowRestoreBreakpoint @ 0x1409BD398 (KdpLowRestoreBreakpoint.c)
 */

char KdpRestoreAllBreakpoints()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdi
  int v2; // eax

  v0 = 0;
  v1 = &unk_140C330A0;
  do
  {
    v2 = *v1 & 5;
    if ( (*(_BYTE *)v1 & 5) == 5 )
    {
      *v1 &= ~4u;
      LOBYTE(v2) = KdpLowRestoreBreakpoint(v0);
    }
    ++v0;
    v1 += 10;
  }
  while ( v0 < 0x20 );
  return v2;
}
