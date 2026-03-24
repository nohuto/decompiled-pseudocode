/*
 * XREFs of DbgkpWerFreePool @ 0x140889388
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404EE658 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
