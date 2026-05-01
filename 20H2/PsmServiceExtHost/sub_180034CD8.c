/*
 * XREFs of sub_180034CD8 @ 0x180034CD8
 * Callers:
 *     sub_180034CA0 @ 0x180034CA0 (sub_180034CA0.c)
 * Callees:
 *     sub_180023D30 @ 0x180023D30 (sub_180023D30.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180034D68 @ 0x180034D68 (sub_180034D68.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 */

signed __int64 __fastcall sub_180034CD8(__int64 a1)
{
  __int64 v2; // rcx
  signed __int64 result; // rax
  _QWORD *v4; // rcx

  if ( (*(_DWORD *)(a1 + 616) & 0xE0) != 0x80 )
    sub_180023D30(*(_QWORD *)(a1 + 88));
  if ( (*(_DWORD *)(a1 + 608) & 0x10000) != 0 )
    sub_180034E40(
      (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
    + 376,
      a1);
  v2 = *(_QWORD *)(a1 + 560);
  if ( v2 )
    TpReleaseWork(v2);
  result = sub_180034D68(a1);
  v4 = *(_QWORD **)(a1 + 88);
  if ( v4 )
    return sub_1800274E0(v4);
  return result;
}
