/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x140756200
 * Callers:
 *     SepCheckAndCopySelfRelativeSD @ 0x140591858 (SepCheckAndCopySelfRelativeSD.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140765FA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407751D4 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A0C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A0EA4 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4FB54 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4FF14 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6A81C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlMakeSelfRelativeSD @ 0x140756224 (RtlMakeSelfRelativeSD.c)
 */

NTSTATUS __stdcall RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) < 0 )
    return -1073741593;
  else
    return RtlMakeSelfRelativeSD(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
}
