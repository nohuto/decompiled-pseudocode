/*
 * XREFs of ZwDeleteBootEntry @ 0x1403F4FC0
 * Callers:
 *     BiDeleteBootEntry @ 0x14096E31C (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteBootEntry(ULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Id);
}
