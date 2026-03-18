/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140633C40
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403B9984 (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140590A9C (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406339C0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406347D8 (IopCreateSecurityDescriptorPerType.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140765FA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407751D4 (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140A5E800 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140A61110 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140A6BA88 (ExpKeyedEventInitialization.c)
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
