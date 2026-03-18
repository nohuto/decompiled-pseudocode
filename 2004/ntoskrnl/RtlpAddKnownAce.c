/*
 * XREFs of RtlpAddKnownAce @ 0x14067E5A0
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406339C0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140634700 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     SepCreateImpersonationTokenDacl @ 0x14067DA10 (SepCreateImpersonationTokenDacl.c)
 *     RtlAddAccessAllowedAce @ 0x1406BB620 (RtlAddAccessAllowedAce.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406F3424 (PopCreateNotificationName.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406F3904 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F64D4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14071FC3C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140765FA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14076F5E0 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x140772200 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14077E4D0 (ObpCreateDefaultObjectTypeSD.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140785BE8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140788A7C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x140788E64 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14078905C (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x14078C4F0 (RtlAddAccessDeniedAceEx.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140790630 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140791ABC (CmpHiveRootSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1407ADB0C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407B7A20 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A0A68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A0C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A0EA4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14090EEA0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14090EF00 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x14090F160 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x14090F1A0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14090F1F0 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x140929468 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14097D49C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlValidAcl @ 0x14067E700 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  char v7; // bp
  unsigned __int8 v9; // cl
  char v10; // si
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // dx
  __int64 result; // rax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  v9 = *(_BYTE *)a1;
  if ( v9 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = v9;
  if ( v9 <= (unsigned __int8)a2 )
    v10 = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v12 = a1 + 8;
  v13 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v12 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v13;
      v12 += *(unsigned __int16 *)(v12 + 2);
      if ( v13 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v14 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || v12 + v15 > v14 )
    return 3221225625LL;
  *(_WORD *)(v12 + 2) = v15;
  *(_BYTE *)(v12 + 1) = v7;
  *(_BYTE *)v12 = a6;
  *(_DWORD *)(v12 + 4) = a4;
  memmove((void *)(v12 + 8), Src, 4LL * Src[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
