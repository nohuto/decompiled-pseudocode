/*
 * XREFs of IommuUnmapLogicalRange @ 0x140528F50
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14045939A (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14051AD44 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall IommuUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  __int16 v3; // bx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(_DWORD *)(a1 + 8) )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v6 = a3 << 12;
  result = HalpIommuDomainUnmapLogicalRange(a1, a2, &v6, 0);
  if ( (int)result >= 0 )
    return HalpIommuDomainFreeLogicalAddressRange(a1, v3);
  return result;
}
