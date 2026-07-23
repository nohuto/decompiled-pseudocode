/*
 * XREFs of SeFilterToken @ 0x1407C2500
 * Callers:
 *     CmpCreateRegistryProcessToken @ 0x1407C23A4 (CmpCreateRegistryProcessToken.c)
 * Callees:
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall SeFilterToken(
        PACCESS_TOKEN ExistingToken,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PACCESS_TOKEN *FilteredToken)
{
  PACCESS_TOKEN *v6; // rdi
  ULONG GroupCount; // ebx
  ULONG v8; // r10d
  SID_AND_ATTRIBUTES *Groups; // r11
  ULONG PrivilegeCount; // esi
  ULONG v12; // ecx
  ULONG *p_Attributes; // rax
  NTSTATUS inserted; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp+18h] BYREF

  v6 = FilteredToken;
  GroupCount = 0;
  DmaAdapter = 0LL;
  v8 = 0;
  Groups = 0LL;
  PrivilegeCount = 0;
  *FilteredToken = 0LL;
  if ( SidsToDisable )
    GroupCount = SidsToDisable->GroupCount;
  if ( PrivilegesToDelete )
    PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
  if ( RestrictedSids
    && (v8 = RestrictedSids->GroupCount, Groups = RestrictedSids->Groups, v12 = 0, RestrictedSids->GroupCount) )
  {
    p_Attributes = &RestrictedSids->Groups[0].Attributes;
    while ( !*p_Attributes )
    {
      ++v12;
      p_Attributes += 4;
      if ( v12 >= v8 )
        goto LABEL_10;
    }
    return -1073741811;
  }
  else
  {
LABEL_10:
    inserted = SepFilterToken(
                 (__int64)ExistingToken,
                 0,
                 Flags,
                 GroupCount,
                 (unsigned __int64)SidsToDisable->Groups & -(__int64)(SidsToDisable != 0LL),
                 PrivilegeCount,
                 (_DWORD *)((unsigned __int64)PrivilegesToDelete->Privileges & -(__int64)(PrivilegesToDelete != 0LL)),
                 v8,
                 &Groups->Sid,
                 0,
                 &DmaAdapter);
    if ( inserted >= 0 )
    {
      inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
          SepFinalizeTokenAcls(DmaAdapter);
        else
          SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8u, SeAliasAdminsSid);
        *v6 = DmaAdapter;
      }
    }
    return inserted;
  }
}
