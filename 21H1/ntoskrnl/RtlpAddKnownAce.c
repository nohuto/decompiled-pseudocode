/*
 * XREFs of RtlpAddKnownAce @ 0x1406064C0
 * Callers:
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1405D5DEC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     SepCreateImpersonationTokenDacl @ 0x140605930 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14067D7C0 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406EACC0 (PopCreateNotificationName.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140702DB0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140703C00 (ObpVerifyAccessToBoundaryEntry.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14071DE9C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140721AA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140751974 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407645F4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140769DC8 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14076CE40 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x14076FDF0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14077ECE0 (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x1407830F8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407834E0 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407836D8 (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x14078A620 (RtlAddAccessDeniedAceEx.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140791974 (CmpAdminSystemSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1407AA9AC (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407B48B0 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B6C8C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14089F748 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14089F900 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14089FB84 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14090DB00 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14090DB60 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x14090DDC0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x14090DE00 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14090DE50 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409281B8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097A06C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14097C0FC (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlValidAcl @ 0x140606620 (RtlValidAcl.c)
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
