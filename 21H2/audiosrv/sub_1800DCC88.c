/*
 * XREFs of sub_1800DCC88 @ 0x1800DCC88
 * Callers:
 *     _isctype_l @ 0x1800EE8BC (_isctype_l.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DCC88(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // eax

  if ( a2 )
    *a2 = *(unsigned __int8 *)(a1 + 188);
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 264) || (v4 = 1, (*(_BYTE *)(a1 + 268) & 1) == 0) )
      v4 = 0;
    *a3 = v4;
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 272);
  return 0LL;
}
