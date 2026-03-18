/*
 * XREFs of PiSwInstanceInfoFree @ 0x1407200C0
 * Callers:
 *     PiSwDeviceFree @ 0x14071FF8C (PiSwDeviceFree.c)
 *     PiSwInstanceInfoInit @ 0x1407540E0 (PiSwInstanceInfoInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInstanceInfoFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
