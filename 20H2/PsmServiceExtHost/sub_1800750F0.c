/*
 * XREFs of sub_1800750F0 @ 0x1800750F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_180075060 @ 0x180075060 (sub_180075060.c)
 */

__int64 __fastcall sub_1800750F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 48);
  result = sub_180075060(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( !sub_180071270(v2) )
      return 0LL;
    v6 = *(_QWORD *)(a1 + 8) >> 1;
    if ( (*(_BYTE *)(v2 + 1465) & 1) == 0 )
      v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a2 + 8) >> 1;
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 1465LL) & 1) == 0 )
      v7 = *(_QWORD *)(a2 + 8);
    if ( v6 > v7 )
      return 0xFFFFFFFFLL;
    return v6 < v7;
  }
  return result;
}
