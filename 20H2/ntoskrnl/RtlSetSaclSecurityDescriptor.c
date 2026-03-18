/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1405D7F40
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403BBE04 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14059453C (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1405D9708 (IopCreateSecurityDescriptorPerType.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140774FD8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407837D4 (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140A65B60 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140A684D0 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140A7236C (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  __int64 v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v8 = v5 | 0x10;
      v9 = 0LL;
      if ( a3 )
        v9 = a3;
      *(_QWORD *)(a1 + 24) = v9;
      v10 = v8 & 0xFFDF;
      *(_WORD *)(a1 + 2) = v10;
      if ( !a4 )
        return 0LL;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *(_WORD *)(a1 + 2) = v6;
    return 0LL;
  }
  return 3221225593LL;
}
