/*
 * XREFs of EtwpFreePlaceholderList @ 0x140340144
 * Callers:
 *     EtwpFreeCompression @ 0x14033FF7C (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1405A7918 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1200);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1200) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
