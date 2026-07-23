/*
 * XREFs of IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1405FCD50
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelIrpsInCurrentThreadList @ 0x140239384 (IopCancelIrpsInCurrentThreadList.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListApcRoutine(__int64 a1)
{
  *(_DWORD *)(a1 + 132) |= IopCancelIrpsInCurrentThreadList(
                             *(_QWORD *)(a1 + 88),
                             (__int64)KeGetCurrentThread(),
                             *(_QWORD *)(a1 + 96),
                             *(_BYTE *)(a1 + 128));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
