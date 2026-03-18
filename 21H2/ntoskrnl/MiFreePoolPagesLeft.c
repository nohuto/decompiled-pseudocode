/*
 * XREFs of MiFreePoolPagesLeft @ 0x1402693C8
 * Callers:
 *     MmRaisePoolQuota @ 0x140266430 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140B078E4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C4F048;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_140C534A8;
    v2 = qword_140C534B8;
  }
  return v2 - v1;
}
