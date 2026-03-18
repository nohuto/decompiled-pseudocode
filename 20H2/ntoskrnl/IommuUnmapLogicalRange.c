/*
 * XREFs of IommuUnmapLogicalRange @ 0x1404D9390
 * Callers:
 *     IommuMapLogicalRange @ 0x1404D8F80 (IommuMapLogicalRange.c)
 * Callees:
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C7964 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall IommuUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 44) )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v4 = a3 << 12;
  return HalpIommuDomainUnmapLogicalRange(a1, a2, (unsigned __int64 *)&v4, 0);
}
