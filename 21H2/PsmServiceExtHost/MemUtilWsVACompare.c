/*
 * XREFs of MemUtilWsVACompare @ 0x180086E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MemUtilWsVACompare(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8

  v2 = *a1;
  v3 = *a2 >> 12;
  v4 = v2 >> 12;
  if ( v4 >= v3 )
    return v4 > v3;
  else
    return 0xFFFFFFFFLL;
}
