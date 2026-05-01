/*
 * XREFs of sub_180004934 @ 0x180004934
 * Callers:
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_18000375C @ 0x18000375C (sub_18000375C.c)
 *     sub_180004818 @ 0x180004818 (sub_180004818.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 *     sub_18007D374 @ 0x18007D374 (sub_18007D374.c)
 * Callees:
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 */

__int64 __fastcall sub_180004934(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdi

  v4 = sub_180006258(a1, a2, a3);
  v7 = 0;
  while ( 1 )
  {
    v8 = v4;
    if ( !v4 )
      break;
    if ( *(_BYTE *)(v4 + 548) == 3
      && (*(_BYTE *)(v4 + 544) & 0x28) == 0
      && (unsigned int)sub_1800049F4((PULONG)(v4 + 496)) )
    {
      return 1;
    }
    v4 = sub_1800062A4(v8, v5, v6);
  }
  if ( (*(_QWORD *)(a1 + 648) & 0x800000000000000LL) != 0
    && (unsigned int)sub_1800049F4((PULONG)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776)
                                                                                            + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 528)) )
  {
    return 1;
  }
  return v7;
}
