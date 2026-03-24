/*
 * XREFs of EtwpFreePlaceholderList @ 0x1402C80F4
 * Callers:
 *     EtwpFreeCompression @ 0x1402C7F24 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1405AD568 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1168);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1168) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
