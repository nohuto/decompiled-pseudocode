/*
 * XREFs of RtlpHpVaMgrRangeCoalesce @ 0x180005EE8
 * Callers:
 *     RtlpHpVaMgrFree @ 0x180005E4C (RtlpHpVaMgrFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCoalesce(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int16 v5; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax

  v3 = *(unsigned __int16 *)(a1 + 40);
  *(_BYTE *)a2 &= ~1u;
  v4 = a2;
  v5 = *(_WORD *)(a2 + 24);
  v7 = 32 * v3 + (a2 & (-32 * v3));
  v8 = 32LL * *(unsigned __int16 *)(a2 + 26);
  v9 = a2 - v8;
  if ( a2 >= v8 && (*(_BYTE *)v9 & 1) == 0 )
  {
    RtlRbRemoveNode(a1 + 8, a2 - v8, a3);
    *(_WORD *)(v9 + 24) += *(_WORD *)(v4 + 24);
    *(_OWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_BYTE *)v4 = 2;
    *(_BYTE *)(v4 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v4 + 24) = 2309737967LL;
    v4 = v9;
  }
  v10 = *(_WORD *)(v4 + 24);
  v11 = v4 + 32LL * v10;
  if ( v11 < v7 && (*(_BYTE *)v11 & 1) == 0 )
  {
    RtlRbRemoveNode(a1 + 8, v4 + 32LL * *(unsigned __int16 *)(v4 + 24), a3);
    *(_WORD *)(v4 + 24) += *(_WORD *)(v11 + 24);
    *(_OWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_BYTE *)v11 = 2;
    *(_BYTE *)(v11 + 1) = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v11 + 24) = 2309737967LL;
    v10 = *(_WORD *)(v4 + 24);
  }
  v12 = v4 + 32LL * v10;
  if ( v10 > v5 && v12 < v7 )
    *(_WORD *)(v12 + 26) = v10;
  return v4;
}
