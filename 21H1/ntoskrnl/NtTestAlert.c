/*
 * XREFs of NtTestAlert @ 0x1406D6A40
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x14032FC90 (KeTestAlertThread.c)
 */

__int64 __fastcall NtTestAlert(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode, a2, a3, a4) != 0 ? 0x101 : 0;
}
