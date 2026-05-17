/*
 * XREFs of _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 *     _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB (_RtlpSysVolCreateSecurityDescriptor@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlSetDaclSecurityDescriptor(int a1, char a2, int a3, char a4)
{
  __int16 v4; // cx
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx

  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      v5 = v4 | 4;
      if ( a3 )
        *(_DWORD *)(a1 + 16) = a3;
      v6 = v5 & 0xFFF7;
      *(_WORD *)(a1 + 2) = v6;
      if ( !a4 )
        return 0;
      v8 = v6 | 8;
    }
    else
    {
      v8 = v4 & 0xFFFB;
    }
    *(_WORD *)(a1 + 2) = v8;
    return 0;
  }
  return -1073741703;
}
