/*
 * XREFs of EtwpUpdateStringFilterData @ 0x140940E84
 * Callers:
 *     EtwpUpdateFilterData @ 0x1406BA5B0 (EtwpUpdateFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUpdateStringFilterData(void **a1, void **a2, char a3)
{
  void *v3; // r9

  v3 = *a1;
  if ( a3 )
  {
    *a1 = 0LL;
  }
  else
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
