/*
 * XREFs of sub_180036330 @ 0x180036330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180036330(unsigned int a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 88) < a1 )
    return 0xFFFFFFFFLL;
  else
    return *(_DWORD *)(a2 + 88) > a1;
}
