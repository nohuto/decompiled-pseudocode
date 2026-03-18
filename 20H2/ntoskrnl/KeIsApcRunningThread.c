/*
 * XREFs of KeIsApcRunningThread @ 0x140518CC0
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x1409DDD80 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
