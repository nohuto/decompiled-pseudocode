/*
 * XREFs of MiFreePoolPagesLeft @ 0x14023DFEC
 * Callers:
 *     MmRaisePoolQuota @ 0x140323070 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140A4D59C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4C748;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_140C4EDA8;
    v2 = qword_140C4EDB8;
  }
  return v2 - v1;
}
