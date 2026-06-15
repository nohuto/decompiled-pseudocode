/*
 * XREFs of sub_18003C72B @ 0x18003C72B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003C72B(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    o__resetstkoflw();
  *(_DWORD *)(a2 + 32) = *v3;
  return 0LL;
}
