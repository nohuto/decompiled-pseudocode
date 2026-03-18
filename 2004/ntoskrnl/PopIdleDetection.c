/*
 * XREFs of PopIdleDetection @ 0x1408E0C10
 * Callers:
 *     PopSystemIdleWorker @ 0x1408EDCF0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopScanIdleList @ 0x1402DCEA0 (PopScanIdleList.c)
 */

__int64 __fastcall PopIdleDetection(int a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( PsWin32CalloutsEstablished )
    return PopScanIdleList(a1, a2);
  return result;
}
