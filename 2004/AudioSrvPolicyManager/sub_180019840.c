/*
 * XREFs of sub_180019840 @ 0x180019840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_180019840(__int64 a1, int a2)
{
  _DWORD *i; // rax

  for ( i = *(_DWORD **)(a1 + 104); i != *(_DWORD **)(a1 + 112) && *i != a2; ++i )
    ;
  return i != *(_DWORD **)(a1 + 112);
}
