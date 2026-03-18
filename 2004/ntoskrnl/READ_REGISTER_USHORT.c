/*
 * XREFs of READ_REGISTER_USHORT @ 0x140327980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall READ_REGISTER_USHORT(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
