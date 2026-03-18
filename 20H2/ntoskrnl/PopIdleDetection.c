/*
 * XREFs of PopIdleDetection @ 0x1408E6A50
 * Callers:
 *     PopSystemIdleWorker @ 0x1408F3900 (PopSystemIdleWorker.c)
 * Callees:
 *     PopScanIdleList @ 0x140362C84 (PopScanIdleList.c)
 */

__int64 __fastcall PopIdleDetection(int a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( PsWin32CalloutsEstablished )
    return PopScanIdleList(a1, a2);
  return result;
}
