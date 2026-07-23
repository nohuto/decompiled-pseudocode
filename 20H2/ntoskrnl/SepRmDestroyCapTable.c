/*
 * XREFs of SepRmDestroyCapTable @ 0x140928868
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CB19C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x140594960 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x1402E1500 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1402E1C10 (RtlInitEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402E1F90 (RtlRemoveEntryHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x1402E20F0 (RtlEnumerateEntryHashTable.c)
 *     RtlDeleteHashTable @ 0x1403791B0 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
