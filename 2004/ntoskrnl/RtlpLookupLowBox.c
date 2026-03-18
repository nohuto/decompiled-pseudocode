/*
 * XREFs of RtlpLookupLowBox @ 0x14024CAE8
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x140603120 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406F1C70 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406FFBE0 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x14090FEC8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x14024CC78 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x140355968 (RtlpAllowsLowBoxAccess.c)
 */

__int64 *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // ecx
  __int64 **v6; // rbx
  __int64 *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  v6 = (__int64 **)(a2 + 16);
  if ( !LowBoxId )
    return (__int64 *)(a2 + 16);
  for ( result = *v6; result != (__int64 *)v6; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 4) == LowBoxId )
      return result;
  }
  if ( !(unsigned __int8)RtlpAllowsLowBoxAccess(a2) || a3 )
    return 0LL;
  else
    return (__int64 *)(a2 + 16);
}
