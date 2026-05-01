/*
 * XREFs of sub_180035740 @ 0x180035740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035740(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a2 + 168);
  if ( *(_QWORD *)a1 < v2 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)a1 > v2 )
    return 1LL;
  v4 = *(_DWORD *)(a2 + 176);
  if ( *(_DWORD *)(a1 + 8) < v4 )
    return 0xFFFFFFFFLL;
  return *(_DWORD *)(a1 + 8) > v4;
}
