/*
 * XREFs of sub_180085490 @ 0x180085490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned int v5; // edx
  __int64 result; // rax

  v5 = *(_DWORD *)(a4 + 20) | 0x20;
  if ( *a5 != -1 )
    v5 = *(_DWORD *)(a4 + 20) & 0xFFFFFFDF;
  result = 0LL;
  *(_DWORD *)(a4 + 20) = v5;
  return result;
}
