/*
 * XREFs of sub_180032FB8 @ 0x180032FB8
 * Callers:
 *     sub_180032E5C @ 0x180032E5C (sub_180032E5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180032FB8(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int16 v3; // r9
  __int16 v4; // r8
  __int16 v5; // r8
  __int16 v6; // r8
  __int64 result; // rax

  v2 = *(_WORD *)(a1 + 62);
  v3 = *(_WORD *)(a2 + 62) & 0x2C;
  if ( (*(_BYTE *)(a2 + 62) & 4) != 0 )
  {
    v3 = *(_WORD *)(a2 + 62) & 0x28;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    v4 = v2 | 4;
  }
  else
  {
    v4 = v2 & 0xFFFB;
  }
  if ( (v3 & 8) != 0 )
  {
    LOBYTE(v3) = v3 & 0xF7;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    v5 = v4 | 8;
  }
  else
  {
    v5 = v4 & 0xFFF7;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v6 = v5 | 0x20;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v6 = v5 & 0xFFDF;
  }
  result = 65519LL;
  *(_WORD *)(a1 + 62) = v6 & 0xFFEF;
  return result;
}
