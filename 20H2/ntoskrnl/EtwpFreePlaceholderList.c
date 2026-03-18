/*
 * XREFs of EtwpFreePlaceholderList @ 0x1403606D4
 * Callers:
 *     EtwpFreeCompression @ 0x140360504 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1405ABB68 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
