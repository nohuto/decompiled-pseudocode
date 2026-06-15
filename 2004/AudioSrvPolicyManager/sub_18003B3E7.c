/*
 * XREFs of sub_18003B3E7 @ 0x18003B3E7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003B3E7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    o__resetstkoflw();
  *(_DWORD *)(a2 + 48) = *v3;
  return 0LL;
}
