/*
 * XREFs of SepRmDestroyCapTable @ 0x140921790
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403C774C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405907D0 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x1403166B0 (RtlInitEnumerationHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140316CC0 (RtlEndEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140339DD0 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140339EF0 (RtlRemoveEntryHashTable.c)
 *     RtlDeleteHashTable @ 0x140376410 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
