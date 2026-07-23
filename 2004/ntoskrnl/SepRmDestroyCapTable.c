/*
 * XREFs of SepRmDestroyCapTable @ 0x140922808
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403C855C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140590EC0 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x14032ABF0 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14032AD10 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14032AD70 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x14032ADC0 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x140377220 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
