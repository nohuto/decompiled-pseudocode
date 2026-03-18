/*
 * XREFs of WbFreeWarbirdProcess @ 0x14065CF10
 * Callers:
 *     sub_14065F2BC @ 0x14065F2BC (sub_14065F2BC.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405D4BB8 (WbFreeWarbirdEncryptionSegment.c)
 *     WbFreeMemoryBlock @ 0x14065D558 (WbFreeMemoryBlock.c)
 *     sub_14065F0A0 @ 0x14065F0A0 (sub_14065F0A0.c)
 *     sub_14065F904 @ 0x14065F904 (sub_14065F904.c)
 *     sub_1406E322C @ 0x1406E322C (sub_1406E322C.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbFreeWarbirdProcess(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  unsigned int j; // ebp
  char *v5; // rsi
  char *v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_14065F0A0(P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_1406E322C(P + 22);
    for ( j = 0; j < P[3]; ++j )
      sub_14065F904(P, *(_QWORD *)(j * P[2] + *((_QWORD *)P + 3)));
    sub_1406E322C(P + 2);
    v5 = (char *)(P + 16);
    while ( 1 )
    {
      v6 = *(char **)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( v6 == v5 )
        break;
      sub_14065F904(P, v6);
    }
    for ( k = 0; k < P[35]; ++k )
      WbFreeWarbirdEncryptionSegment(*(_QWORD **)(k * P[34] + *((_QWORD *)P + 19)));
    sub_1406E322C(P + 34);
    if ( P[47] )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_1406E322C(P + 46);
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}
