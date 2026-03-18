/*
 * XREFs of NtFilterToken @ 0x1406623D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SepFinalizeTokenAcls @ 0x140659D50 (SepFinalizeTokenAcls.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406651C8 (SeReleaseLuidAndAttributesArray.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14079E674 (SeCaptureLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  ULONG v9; // ecx
  int inserted; // edi
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v14; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v16; // [rsp+6Ch] [rbp-7Ch]
  __int64 v17; // [rsp+70h] [rbp-78h] BYREF
  PVOID v18; // [rsp+78h] [rbp-70h] BYREF
  __int64 v19; // [rsp+80h] [rbp-68h] BYREF
  ULONG v20; // [rsp+88h] [rbp-60h]
  __int64 v21; // [rsp+8Ch] [rbp-5Ch] BYREF
  PVOID v22; // [rsp+98h] [rbp-50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v25; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-30h] BYREF
  ULONG v28; // [rsp+F8h] [rbp+10h]

  v28 = Flags;
  v18 = 0LL;
  v16 = 0;
  v19 = 0LL;
  v17 = 0LL;
  GroupCount = 0;
  v23 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
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
    v20 = 0;
    while ( v9 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v9) = 0;
      v20 = v9;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 SidsToDisable->Groups,
                 0,
                 HandleInformation,
                 v14,
                 (__int64)&v23,
                 (__int64)&v21);
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
    HIDWORD(v17) = PrivilegesToDelete->PrivilegeCount;
    inserted = SeCaptureLuidAndAttributesArray(
                 PrivilegesToDelete->Privileges,
                 Object,
                 HandleInformation,
                 v14,
                 (__int64)&v24,
                 (__int64)&v21 + 4);
  }
  if ( inserted >= 0 && RestrictedSids )
  {
    if ( ((unsigned __int8)RestrictedSids & 3) == 0 )
    {
      v16 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   RestrictedSids->Groups,
                   0,
                   HandleInformation,
                   v14,
                   (__int64)&v19,
                   (__int64)&v17);
      goto LABEL_19;
    }
LABEL_18:
    ExRaiseDatatypeMisalignment();
  }
LABEL_19:
  if ( inserted >= 0 )
  {
    *(_QWORD *)&Flags = 0LL;
    while ( Flags < v16 )
    {
      if ( *(_DWORD *)(v19 + 16LL * Flags + 8) )
      {
        inserted = -1073741811;
        goto LABEL_30;
      }
      *(_QWORD *)&Flags = Flags + 1;
    }
    v22 = 0LL;
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v22,
                 &v25);
    if ( inserted >= 0 )
    {
      v18 = 0LL;
      LOBYTE(Flags) = PreviousMode;
      inserted = SepFilterToken(
                   (_DWORD)v22,
                   Flags,
                   v28,
                   GroupCount,
                   v23,
                   HIDWORD(v17),
                   v24,
                   v16,
                   v19,
                   v17,
                   (__int64)&v18);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx(v18, 0LL, 0, 0LL, (__int64)&v26);
        if ( inserted >= 0 )
        {
          SepFinalizeTokenAcls(v18);
          ObfDereferenceObject(v18);
        }
      }
      ObfDereferenceObject(v22);
      if ( inserted >= 0 )
        *NewTokenHandle = (HANDLE)v26;
    }
  }
LABEL_30:
  if ( v23 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v23, *(_QWORD *)&Flags);
  }
  if ( v24 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v24, *(_QWORD *)&Flags);
  }
  if ( v19 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v19, *(_QWORD *)&Flags);
  }
  return inserted;
}
