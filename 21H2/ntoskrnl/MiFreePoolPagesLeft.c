/*
 * XREFs of MiFreePoolPagesLeft @ 0x140272480
 * Callers:
 *     MmRaisePoolQuota @ 0x1402C4210 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140646800 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4C8C8;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_140C4EF28;
    v2 = qword_140C4EF38;
  }
  return v2 - v1;
}
