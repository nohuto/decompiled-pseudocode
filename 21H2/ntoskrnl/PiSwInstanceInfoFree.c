/*
 * XREFs of PiSwInstanceInfoFree @ 0x140661D3C
 * Callers:
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     PiSwInstanceInfoInit @ 0x1407661D0 (PiSwInstanceInfoInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
