/*
 * XREFs of sub_180075060 @ 0x180075060
 * Callers:
 *     sub_1800750F0 @ 0x1800750F0 (sub_1800750F0.c)
 *     sub_180075180 @ 0x180075180 (sub_180075180.c)
 * Callees:
 *     sub_180071270 @ 0x180071270 (sub_180071270.c)
 *     sub_1800712C4 @ 0x1800712C4 (sub_1800712C4.c)
 */

__int64 __fastcall sub_180075060(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int16 v4; // ax

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_WORD *)(a2 + 60);
  if ( *(__int16 *)(a1 + 60) < 0 )
  {
    if ( v4 < 0 )
      return sub_1800712C4(0LL, a1, a2);
    return 0xFFFFFFFFLL;
  }
  if ( v4 < 0 )
    return 1LL;
  if ( sub_180071270(*(_QWORD *)(a1 + 48)) && !sub_180071270(v3) )
    return 0xFFFFFFFFLL;
  return !sub_180071270(v2) && sub_180071270(v3);
}
