/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x140537754
 * Callers:
 *     MiFlushComplete @ 0x140537640 (MiFlushComplete.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiFlushRelease @ 0x1402A3248 (MiFlushRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(__int64 **P)
{
  struct _KEVENT *v1; // rdi
  __int64 *v3; // rcx

  v1 = (struct _KEVENT *)P[4];
  MiFlushRelease(**P, (ULONG_PTR)*P, (ULONG_PTR)P[1]);
  v3 = P[5];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v1, 0, 0);
}
