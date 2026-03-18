/*
 * XREFs of MiFreePoolPagesLeft @ 0x14027C82C
 * Callers:
 *     MmRaisePoolQuota @ 0x14027C530 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140A47300 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4C6C8;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_140C4ED28;
    v2 = qword_140C4ED38;
  }
  return v2 - v1;
}
