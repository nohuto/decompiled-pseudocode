/*
 * XREFs of _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlSetOwnerSecurityDescriptor(int a1, int a2, char a3)
{
  __int16 v3; // cx
  __int16 v4; // cx

  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 < 0 )
    return -1073741703;
  *(_DWORD *)(a1 + 4) = 0;
  if ( a2 )
    *(_DWORD *)(a1 + 4) = a2;
  v4 = v3 & 0xFFFE;
  *(_WORD *)(a1 + 2) = v4;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v4 | 1;
  return 0;
}
