/*
 * XREFs of HalpPciGetMmConfigPhysicalAddress @ 0x140303530
 * Callers:
 *     HalpPciAccessMmConfigSpace @ 0x140303480 (HalpPciAccessMmConfigSpace.c)
 * Callees:
 *     Feature_Servicing_29814886__private_IsEnabled @ 0x1403EBF4C (Feature_Servicing_29814886__private_IsEnabled.c)
 */

__int64 __fastcall HalpPciGetMmConfigPhysicalAddress(__int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v5; // rdi
  int v6; // r9d
  _BYTE *i; // r8

  v5 = a2;
  Feature_Servicing_29814886__private_IsEnabled();
  v6 = 0;
  if ( !HalpPciMcfgTableCount )
    return 0LL;
  for ( i = (_BYTE *)(HalpPciMcfgTable + 54);
        a1 != *((_WORD *)i - 1) || (unsigned __int8)v5 < *i || (unsigned __int8)v5 > i[1];
        i += 16 )
  {
    if ( ++v6 >= (unsigned int)HalpPciMcfgTableCount )
      return 0LL;
  }
  return *(_QWORD *)(i - 10) + (((a3 >> 5) + 8 * ((a3 & 0x1F) + 32 * v5)) << 12);
}
