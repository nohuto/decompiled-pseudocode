/*
 * XREFs of DbgkpWerFreePool @ 0x14088BDE8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404ECD78 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
