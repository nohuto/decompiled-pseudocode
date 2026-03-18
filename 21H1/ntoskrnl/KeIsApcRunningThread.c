/*
 * XREFs of KeIsApcRunningThread @ 0x140514D40
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x1409D7D00 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
