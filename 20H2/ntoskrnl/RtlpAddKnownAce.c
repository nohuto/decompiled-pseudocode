/*
 * XREFs of RtlpAddKnownAce @ 0x140606130
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405D9630 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406055A0 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14062F538 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     RtlAddAccessAllowedAce @ 0x1406FBF80 (RtlAddAccessAllowedAce.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x14071AE94 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x14071BEE8 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14072DC2C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140759CA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140764C44 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140774FD8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077AF38 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14077DB90 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x140780800 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14078BA70 (ObpCreateDefaultObjectTypeSD.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140793854 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14079678C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x140796B74 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x140796D6C (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x140798C30 (RtlAddAccessDeniedAceEx.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14079CFE0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14079E35C (CmpHiveRootSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1407BBA4C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407C62AC (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407C868C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A6598 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A6750 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A69D4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409149E0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140914A40 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x140914CA0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140914CE0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x140914D30 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092F290 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1409811DC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14098326C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlValidAcl @ 0x140606290 (RtlValidAcl.c)
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
