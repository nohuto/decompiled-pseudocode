/*
 * XREFs of SeFilterToken @ 0x140787370
 * Callers:
 *     CmpCreateRegistryProcessToken @ 0x14078721C (CmpCreateRegistryProcessToken.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
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
  NTSTATUS inserted; // ebx
  ULONG v14; // ecx
  ULONG *p_Attributes; // rax
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
    && (v8 = RestrictedSids->GroupCount, Groups = RestrictedSids->Groups, v14 = 0, RestrictedSids->GroupCount) )
  {
    p_Attributes = &RestrictedSids->Groups[0].Attributes;
    while ( !*p_Attributes )
    {
      ++v14;
      p_Attributes += 4;
      if ( v14 >= v8 )
        goto LABEL_6;
    }
    return -1073741811;
  }
  else
  {
LABEL_6:
    inserted = SepFilterToken(
                 (__int64)ExistingToken,
                 0,
                 Flags,
                 GroupCount,
                 (unsigned __int64)SidsToDisable->Groups & -(__int64)(SidsToDisable != 0LL),
                 PrivilegeCount,
                 (unsigned __int64)PrivilegesToDelete->Privileges & -(__int64)(PrivilegesToDelete != 0LL),
                 v8,
                 &Groups->Sid,
                 0,
                 &DmaAdapter);
    if ( inserted >= 0 )
    {
      inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8, SeAliasAdminsSid);
        *v6 = DmaAdapter;
      }
    }
    return inserted;
  }
}
