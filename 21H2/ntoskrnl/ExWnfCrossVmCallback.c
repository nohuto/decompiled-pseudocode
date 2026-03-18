/*
 * XREFs of ExWnfCrossVmCallback @ 0x140A01DB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     ExpNtDeleteWnfStateData @ 0x14085EB0C (ExpNtDeleteWnfStateData.c)
 */

__int64 __fastcall ExWnfCrossVmCallback(__int64 a1, __int64 a2, __int64 *a3, int a4, const void *a5, unsigned int a6)
{
  if ( a4 )
    return ExpNtUpdateWnfStateData((__int64)a3, a5, a6, 0LL, 0LL, 0, 0, a2 != 0);
  else
    return ExpNtDeleteWnfStateData(a3, 0LL, a2 != 0);
}
