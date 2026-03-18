/*
 * XREFs of sub_1C0001940 @ 0x1C0001940
 * Callers:
 *     sub_1C0001760 @ 0x1C0001760 (sub_1C0001760.c)
 *     sub_1C0001850 @ 0x1C0001850 (sub_1C0001850.c)
 *     sub_1C0002C20 @ 0x1C0002C20 (sub_1C0002C20.c)
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 * Callees:
 *     sub_1C0003C20 @ 0x1C0003C20 (sub_1C0003C20.c)
 */

char __fastcall sub_1C0001940(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  unsigned int v4; // edi

  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    return 0;
  if ( byte_1C000722C )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v2 + 120) || !*(_BYTE *)(v2 + 132) && *(_QWORD *)(v2 + 80) )
    {
      v3 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( v3 > *(_BYTE *)(a1 + 104) )
        v3 = *(_BYTE *)(a1 + 104);
    }
    else
    {
      v3 = *(_BYTE *)(a1 + 104);
    }
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 106);
  }
  v4 = v3;
  if ( *(unsigned __int8 *)(a1 + 107) != v3 )
  {
    *(_BYTE *)(a1 + 107) = v3;
    if ( byte_1C0007358 )
      sub_1C0003C20(a1, v3);
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 96), v4);
  }
  return 1;
}
