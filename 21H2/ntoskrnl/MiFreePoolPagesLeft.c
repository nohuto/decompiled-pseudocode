/*
 * XREFs of MiFreePoolPagesLeft @ 0x140260420
 * Callers:
 *     MmRaisePoolQuota @ 0x140242790 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14063B5F0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140A4FB3C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4C908;
    v2 = MiState;
  }
  else
  {
    v1 = qword_140C4EF68;
    v2 = qword_140C4EF78;
  }
  return v2 - v1;
}
