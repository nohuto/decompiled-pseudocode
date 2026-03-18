/*
 * XREFs of HalpIommuDomainUnmapIdentityRange @ 0x14051AC78
 * Callers:
 *     IommuUnmapIdentityRange @ 0x140528E00 (IommuUnmapIdentityRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x140528E60 (IommuUnmapIdentityRangeEx.c)
 * Callees:
 *     HalpIommuFlushDomainTbs @ 0x14051AEFC (HalpIommuFlushDomainTbs.c)
 *     IommupHvUnmapDeviceIdentityRange @ 0x140527BE0 (IommupHvUnmapDeviceIdentityRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x14052A328 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapIdentityRange(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 i; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r14
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  if ( HalpHvIommu )
    return IommupHvUnmapDeviceIdentityRange(a1);
  v7 = 0LL;
  if ( a3 )
  {
    do
    {
      v8 = v7 + 1;
      for ( i = *(_QWORD *)(a2 + 8 * v7); v8 < a3 && *(_QWORD *)(a2 + 8 * v8) == i + 1; i = *(_QWORD *)(a2 + 8 * v8++) )
        ;
      v10 = *(_QWORD *)(a2 + 8 * v7) << 12;
      v11 = v8 - v7;
      v12 = *(_QWORD *)(a1 + 40);
      v13 = v11 << 12;
      v14[0] = v13;
      result = HalpIommuUnmapLogicalRange(v12, v14, v10);
      if ( (int)result < 0 )
        break;
      result = HalpIommuFlushDomainTbs(a1, v10, v13);
      if ( (int)result < 0 )
        break;
      v7 = v8;
    }
    while ( v8 < a3 );
  }
  return result;
}
