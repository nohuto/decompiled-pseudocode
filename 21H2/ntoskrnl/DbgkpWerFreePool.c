/*
 * XREFs of DbgkpWerFreePool @ 0x14092BED8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140540798 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
