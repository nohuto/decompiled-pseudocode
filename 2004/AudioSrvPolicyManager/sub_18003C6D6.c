/*
 * XREFs of sub_18003C6D6 @ 0x18003C6D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003C6D6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return 0LL;
}
