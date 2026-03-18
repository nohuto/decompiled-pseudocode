/*
 * XREFs of MiFreePoolPagesLeft @ 0x14020351C
 * Callers:
 *     MmRaisePoolQuota @ 0x140314920 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140A41AA4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4C808;
    v2 = MiState;
  }
  else
  {
    v1 = qword_140C4EE68;
    v2 = qword_140C4EE78;
  }
  return v2 - v1;
}
