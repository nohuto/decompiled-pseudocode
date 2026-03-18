/*
 * XREFs of DbgkpWerFreePool @ 0x140884F78
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404E8EB8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
