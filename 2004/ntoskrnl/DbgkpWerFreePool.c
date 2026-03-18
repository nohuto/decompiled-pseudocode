/*
 * XREFs of DbgkpWerFreePool @ 0x140886298
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404E94E8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
