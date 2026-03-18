/*
 * XREFs of NtFilterToken @ 0x1406322B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140618EDC (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140618FC0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406305B0 (SeCaptureSidAndAttributesArray.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
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
  ULONG i; // edx
  int v12; // edx
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v16; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v18; // [rsp+6Ch] [rbp-7Ch]
  ULONG ulAddend[2]; // [rsp+70h] [rbp-78h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-70h] BYREF
  __int64 v21; // [rsp+80h] [rbp-68h] BYREF
  ULONG v22; // [rsp+88h] [rbp-60h]
  __int64 v23; // [rsp+8Ch] [rbp-5Ch] BYREF
  PVOID v24; // [rsp+98h] [rbp-50h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-30h] BYREF

  DmaAdapter = 0LL;
  v18 = 0;
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
      goto LABEL_18;
    GroupCount = SidsToDisable->GroupCount;
    v9 = 0;
    v22 = 0;
    while ( v9 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v9) = 0;
      v22 = v9;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 (char *)SidsToDisable->Groups,
                 GroupCount,
                 PreviousMode,
                 0LL,
                 0,
                 HandleInformation,
                 v16,
                 (PVOID *)&v25,
                 (unsigned int *)&v23);
  }
  else
  {
    inserted = 0;
  }
  if ( inserted < 0 )
    goto LABEL_19;
  if ( PrivilegesToDelete )
  {
    if ( ((unsigned __int8)PrivilegesToDelete & 3) != 0 )
      goto LABEL_18;
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
    if ( ((unsigned __int8)RestrictedSids & 3) == 0 )
    {
      v18 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   (char *)RestrictedSids->Groups,
                   RestrictedSids->GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   HandleInformation,
                   v16,
                   (PVOID *)&v21,
                   ulAddend);
      goto LABEL_19;
    }
LABEL_18:
    ExRaiseDatatypeMisalignment();
  }
LABEL_19:
  if ( inserted >= 0 )
  {
    for ( i = 0; i < v18; ++i )
    {
      if ( *(_DWORD *)(v21 + 16LL * i + 8) )
      {
        inserted = -1073741811;
        goto LABEL_30;
      }
    }
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
      LOBYTE(v12) = PreviousMode;
      inserted = SepFilterToken(
                   (int)v24,
                   v12,
                   Flags,
                   GroupCount,
                   v25,
                   ulAddend[1],
                   v26,
                   v18,
                   v21,
                   ulAddend[0],
                   (__int64)&DmaAdapter);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0LL, (__int64)&v28);
        if ( inserted >= 0 )
        {
          SepAppendAceToTokenObjectAcl(DmaAdapter, 8LL, SeAliasAdminsSid);
          HalPutDmaAdapter(DmaAdapter);
        }
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v24);
      if ( inserted >= 0 )
        *NewTokenHandle = (HANDLE)v28;
    }
  }
LABEL_30:
  if ( v25 )
    SeReleaseLuidAndAttributesArray((void *)v25, PreviousMode);
  if ( v26 )
    SeReleaseLuidAndAttributesArray((void *)v26, PreviousMode);
  if ( v21 )
    SeReleaseLuidAndAttributesArray((void *)v21, PreviousMode);
  return inserted;
}
