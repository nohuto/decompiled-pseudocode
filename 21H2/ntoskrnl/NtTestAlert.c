/*
 * XREFs of NtTestAlert @ 0x1406AA730
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140277530 (KeTestAlertThread.c)
 */

__int64 __fastcall NtTestAlert(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode, a2, a3, a4) != 0 ? 0x101 : 0;
}
