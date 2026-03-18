/*
 * XREFs of IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406C2A80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140318B84 (IopCancelIrpsInCurrentThreadList.c)
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
