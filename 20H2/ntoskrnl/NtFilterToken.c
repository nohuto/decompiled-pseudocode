/*
 * XREFs of NtFilterToken @ 0x1406A83E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1406310FC (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406311E0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406A99F0 (SeCaptureSidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  ULONG v9; // ecx
  NTSTATUS inserted; // edi
  ULONG v11; // ecx
  _DWORD *v12; // rax
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v16; // [rsp+30h] [rbp-B8h]
  ULONG v17; // [rsp+68h] [rbp-80h]
  ULONG GroupCount; // [rsp+6Ch] [rbp-7Ch]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-78h] BYREF
  ULONG ulAddend[2]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v21; // [rsp+80h] [rbp-68h] BYREF
  ULONG v22; // [rsp+88h] [rbp-60h]
  __int64 v23; // [rsp+8Ch] [rbp-5Ch] BYREF
  PVOID v24; // [rsp+98h] [rbp-50h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-30h] BYREF
  char v30; // [rsp+F8h] [rbp+10h]

  v30 = Flags;
  DmaAdapter = 0LL;
  v17 = 0;
  v21 = 0LL;
  ulAddend[0] = 0;
  GroupCount = 0;
  v25 = 0LL;
  v23 = 0LL;
  ulAddend[1] = 0;
  v26 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)NewTokenHandle < 0x7FFFFFFF0000LL )
    v8 = (__int64)NewTokenHandle;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  if ( SidsToDisable )
  {
    if ( ((unsigned __int8)SidsToDisable & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    GroupCount = SidsToDisable->GroupCount;
    v9 = 0;
    v22 = 0;
    while ( v9 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v9) = 0;
      v22 = v9;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 SidsToDisable->Groups,
                 0,
                 HandleInformation,
                 v16,
                 (__int64)&v25,
                 (__int64)&v23);
  }
  else
  {
    inserted = 0;
  }
  if ( inserted >= 0 )
  {
    if ( PrivilegesToDelete )
    {
      if ( ((unsigned __int8)PrivilegesToDelete & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ulAddend[1] = PrivilegesToDelete->PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   (char *)PrivilegesToDelete->Privileges,
                   ulAddend[1],
                   PreviousMode,
                   (__int64)PrivilegesToDelete,
                   Object,
                   HandleInformation,
                   v16,
                   &v26,
                   (_DWORD *)&v23 + 1);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   RestrictedSids->Groups,
                   0,
                   HandleInformation,
                   v16,
                   (__int64)&v21,
                   (__int64)ulAddend);
    }
  }
  if ( inserted >= 0 )
  {
    v11 = 0;
    if ( v17 )
    {
      v12 = (_DWORD *)(v21 + 8);
      while ( !*v12 )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= v17 )
          goto LABEL_23;
      }
      inserted = -1073741811;
    }
    else
    {
LABEL_23:
      v24 = 0LL;
      inserted = ObReferenceObjectByHandle(
                   ExistingTokenHandle,
                   2u,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &v24,
                   &v27);
      if ( inserted >= 0 )
      {
        DmaAdapter = 0LL;
        inserted = SepFilterToken(
                     (__int64)v24,
                     PreviousMode,
                     v30,
                     GroupCount,
                     v25,
                     ulAddend[1],
                     (_DWORD *)v26,
                     v17,
                     (PSID *)v21,
                     ulAddend[0],
                     &DmaAdapter);
        if ( inserted >= 0 )
        {
          inserted = ObInsertObjectEx(DmaAdapter, 0LL, v27.GrantedAccess, 1, 0, 0LL, &v28);
          if ( inserted >= 0 )
          {
            if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
              SepFinalizeTokenAcls(DmaAdapter);
            else
              SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8u, SeAliasAdminsSid);
            HalPutDmaAdapter(DmaAdapter);
          }
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)v24);
        if ( inserted >= 0 )
          *NewTokenHandle = (HANDLE)v28;
      }
    }
  }
  if ( v25 )
    SeReleaseLuidAndAttributesArray((void *)v25, PreviousMode);
  if ( v26 )
    SeReleaseLuidAndAttributesArray((void *)v26, PreviousMode);
  if ( v21 )
    SeReleaseLuidAndAttributesArray((void *)v21, PreviousMode);
  return inserted;
}
