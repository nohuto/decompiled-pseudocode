/*
 * XREFs of sub_1800D1240 @ 0x1800D1240
 * Callers:
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 * Callees:
 *     sub_1800D1154 @ 0x1800D1154 (sub_1800D1154.c)
 *     sub_1800D1E24 @ 0x1800D1E24 (sub_1800D1E24.c)
 */

__int64 __fastcall sub_1800D1240(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = a2[1];
  for ( i = *a2; i != v2; i += 152LL )
  {
    v5 = a1[4];
    v6 = (v5 + 1) % (unsigned __int64)((a1[2] - a1[1]) / 152LL);
    a1[4] = v6;
    v7 = a1[1] + 152 * v6;
    if ( *(_BYTE *)(i + 120) )
    {
      result = sub_1800D1154(v7, i);
    }
    else
    {
      sub_1800D1154(v7, a1[1] + 152 * v5);
      *(_BYTE *)(v7 + 120) = 0;
      *(_QWORD *)(v7 + 128) = *(_QWORD *)(i + 128);
      result = sub_1800D1E24(v7 + 136);
    }
  }
  return result;
}
