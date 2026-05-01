/*
 * XREFs of sub_180003140 @ 0x180003140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003140(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 88) != *(_QWORD *)a2 )
    return 1LL;
  if ( (int)PsmGetDynamicIdFromKey((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 48, *(_QWORD *)(a2 + 8)) < 0 )
    *(_OWORD *)*(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 1;
  return 0LL;
}
