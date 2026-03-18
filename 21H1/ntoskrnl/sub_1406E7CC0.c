/*
 * XREFs of sub_1406E7CC0 @ 0x1406E7CC0
 * Callers:
 *     WbFreeWarbirdProcess @ 0x1406E7B88 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406E7CC0(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x42524157u);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
