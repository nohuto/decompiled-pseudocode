/*
 * XREFs of IommuUnmapIdentityRangeEx @ 0x140528E60
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14045939A (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainUnmapIdentityRange @ 0x14051AC78 (HalpIommuDomainUnmapIdentityRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14051AD44 (HalpIommuDomainUnmapLogicalRange.c)
 *     IommupProcessPhysicalAddress @ 0x14052936C (IommupProcessPhysicalAddress.c)
 */

__int64 __fastcall IommuUnmapIdentityRangeEx(ULONG_PTR a1, int a2)
{
  int v3; // ecx
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR v12; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  LOBYTE(v11) = 0;
  if ( v3 )
  {
    if ( v3 == 1 )
      return 0LL;
    else
      return 3221225711LL;
  }
  else if ( (int)IommupProcessPhysicalAddress(
                   a2,
                   (unsigned int)&v13,
                   (unsigned int)&v11,
                   (unsigned int)&v10,
                   (__int64)&v12) >= 0 )
  {
    v5 = v13;
    v6 = v13 >> 12;
    if ( (_BYTE)v11 )
    {
      result = HalpIommuDomainFreeLogicalAddressRange(a1, v12);
      if ( (int)result >= 0 )
      {
        v11 = v5;
        return HalpIommuDomainUnmapLogicalRange(a1, v12, &v11, 0);
      }
    }
    else
    {
      v7 = v10;
      v8 = 0;
      if ( v6 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          result = HalpIommuDomainFreeLogicalAddressRange(a1, (unsigned __int16)*(_QWORD *)(v7 + 8 * v9) << 12);
          if ( (int)result < 0 )
            break;
          v9 = ++v8;
          if ( v8 >= v6 )
            return HalpIommuDomainUnmapIdentityRange(a1, v7, v6);
        }
      }
      else
      {
        return HalpIommuDomainUnmapIdentityRange(a1, v7, v6);
      }
    }
  }
  else
  {
    return 3221225712LL;
  }
  return result;
}
