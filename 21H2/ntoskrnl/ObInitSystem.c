/*
 * XREFs of ObInitSystem @ 0x140A3F538
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ObpLockDirectoryExclusive @ 0x140229730 (ObpLockDirectoryExclusive.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlGetAce @ 0x14026C9B0 (RtlGetAce.c)
 *     ObpReleaseLookupContext @ 0x14026CA70 (ObpReleaseLookupContext.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A210 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpInsertDirectoryEntry @ 0x1405FA0B4 (ObpInsertDirectoryEntry.c)
 *     NtCreateDirectoryObject @ 0x140601A70 (NtCreateDirectoryObject.c)
 *     ExCreateHandleTable @ 0x140622DE8 (ExCreateHandleTable.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CA530 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 *     ObpInitObjectTypeSD @ 0x1407960FC (ObpInitObjectTypeSD.c)
 *     ObpLookupDirectoryEntry @ 0x1407962FC (ObpLookupDirectoryEntry.c)
 *     ObInitializeProcessor @ 0x1407963DC (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x1407A0B90 (ObpInitializeRootNamespace.c)
 *     ObInitServerSilo @ 0x1407C9400 (ObInitServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x1409125B0 (RtlAddAuditAccessAce.c)
 *     ExInitializeSystemLookasideList @ 0x14099D6E4 (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140A6987C (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140A719B0 (ObpInitStackTrace.c)
 */

char ObInitSystem()
{
  __int16 v0; // di
  __int16 v1; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // ebx
  unsigned int v6; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v7; // rdi
  __int64 v8; // rax
  _OWORD *v9; // rbx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  PADAPTER_OBJECT v12; // rsi
  __int64 *i; // rbx
  __int64 v14; // rdx
  ULONG v16; // edx
  ULONG v17; // edx
  void *v18; // r9
  _BYTE *v19; // rax
  BOOLEAN Size; // [rsp+28h] [rbp-E0h]
  BOOLEAN Tag; // [rsp+30h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v25[16]; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v27[2]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v28; // [rsp+138h] [rbp+30h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+38h] BYREF
  UNICODE_STRING v30; // [rsp+150h] [rbp+48h] BYREF
  UNICODE_STRING v31; // [rsp+160h] [rbp+58h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v33; // [rsp+190h] [rbp+88h]
  ACL Acl; // [rsp+198h] [rbp+90h] BYREF

  v33 = 0LL;
  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v28 = 0LL;
  v30 = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v25, 0, 0x78uLL);
  DirectoryHandle = 0LL;
  v31 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140CFB19C )
  {
    v0 = 64;
    v1 = 32;
  }
  else
  {
    v0 = 32;
    v1 = 16;
  }
  if ( !(_DWORD)InitializationPhase )
  {
    ObHeaderCookie = ExGenRandom(0);
    ExInitializeSystemLookasideList(
      (__int64)&ObpCreateInfoLookasideList,
      512,
      64,
      1766023759,
      v0,
      (__int64)&ExSystemLookasideListHead);
    ExInitializeSystemLookasideList(
      (__int64)&ObpNameBufferLookasideList,
      1,
      248,
      1833853519,
      v1,
      (__int64)&ExSystemLookasideListHead);
    CurrentPrcb = KeGetCurrentPrcb();
    ObpPendingObjectDirectoryList = 0LL;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    v3 = 256LL;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    v4 = &unk_140D25A08;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    ObpPendingObjectDirectoryListLock = 0LL;
    do
    {
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 2;
      --v3;
    }
    while ( v3 );
    ObpDefaultObject = 0;
    qword_140C25B90 = (__int64)&qword_140C25B88;
    qword_140C25B88 = (__int64)&qword_140C25B88;
    byte_140C25B82 = 6;
    dword_140C25B84 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[8] = ObpKernelHandleTable;
    if ( !ObpKernelHandleTable )
      return 0;
    ObpRemoveObjectWorkItem.Parameter = 0LL;
    ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
    qword_140C25AF8 = (__int64)ObpProcessRemoveObjectDpcWorker;
    ObpRemoveObjectWorkItem.List.Flink = 0LL;
    LODWORD(ObpRemoveObjectDpc) = 275;
    qword_140C25B00 = 0LL;
    qword_140C25B18 = 0LL;
    qword_140C25AF0 = 0LL;
    ObpInitInfoBlockOffsets();
    qword_140CFCE88 = (__int64)MmBadPointer;
    LODWORD(v25[1]) = 256;
    LOWORD(v25[0]) = 120;
    HIDWORD(v25[4]) = 512;
    RtlInitUnicodeString(&DestinationString, L"Type");
    BYTE2(v25[0]) |= 0x24u;
    HIDWORD(v25[3]) = 983041;
    HIDWORD(v25[5]) = 216;
    *(_OWORD *)((char *)&v25[1] + 4) = ObpTypeMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v25, 0LL, (__int64)&ObpTypeObjectType) < 0 )
      return 0;
    HIDWORD(v25[4]) = 1;
    RtlInitUnicodeString(&v30, L"Directory");
    HIDWORD(v25[5]) = 344;
    HIDWORD(v25[3]) = 983055;
    BYTE2(v25[0]) = BYTE2(v25[0]) & 0xD2 | 0xD;
    v25[8] = ObpCloseDirectoryObject;
    v25[9] = ObpDeleteDirectoryObject;
    *(_OWORD *)((char *)&v25[1] + 4) = ObpDirectoryMapping;
    if ( (int)ObCreateObjectType(&v30, (__int64)v25, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
      return 0;
    v25[8] = 0LL;
    ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    RtlInitUnicodeString(&v31, L"SymbolicLink");
    BYTE3(v25[0]) |= 1u;
    v25[9] = ObpDeleteSymbolicLink;
    HIDWORD(v25[5]) = 40;
    v25[10] = ObpParseSymbolicLinkEx;
    HIDWORD(v25[4]) = 1;
    HIDWORD(v25[3]) = 0xFFFFF;
    BYTE2(v25[0]) = BYTE2(v25[0]) & 0xF6 | 1;
    *(_OWORD *)((char *)&v25[1] + 4) = ObpSymbolicLinkMapping;
    if ( (int)ObCreateObjectType(&v31, (__int64)v25, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
      return 0;
    ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
    ObpInitStackTrace();
  }
  if ( (_DWORD)InitializationPhase != 1 )
    return 1;
  if ( ObInitServerSilo(0LL) >= 0 )
  {
    v5 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v5]) >= 0 )
      {
        if ( ++v5 >= (unsigned int)KeNumberProcessors_0 )
          goto LABEL_16;
      }
      return 0;
    }
LABEL_16:
    v6 = 0;
    v7 = &ObpWaitBlockLookaside;
    do
    {
      v8 = 14 * v6 + 24;
      if ( (unsigned int)v8 >= 0x40 )
        v8 = 64LL;
      ExInitializeNPagedLookasideList(v7, 0LL, 0LL, 0x200u, 48 * v8, 0x6D57624Fu, 0);
      ++v6;
      ++v7;
    }
    while ( v6 < 4 );
    v9 = (_OWORD *)SePublicDefaultUnrestrictedSd;
    if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
      goto LABEL_25;
    v16 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
    if ( v16 < 0xFA
      && RtlCreateAcl(&Acl, v16, 2u) >= 0
      && RtlAddAuditAccessAce(&Acl, v17, 0x60000000u, v18, Size, Tag) >= 0
      && RtlGetAce(&Acl, 0, &Ace) >= 0 )
    {
      v19 = Ace;
      if ( ObpAuditBaseDirectories )
        *((_BYTE *)Ace + 1) |= 0xAu;
      if ( ObpAuditBaseObjects )
        v19[1] |= 9u;
      v9 = SecurityDescriptor;
      if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
        && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
        && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
      {
LABEL_25:
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 80;
        ObjectAttributes.SecurityDescriptor = v9;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
        {
          v10 = DirectoryHandle;
          Object = 0LL;
          v11 = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpRootDirectoryObject = Object;
          if ( v11 >= 0 && (int)ObpInitializeRootNamespace(0LL, v10, 0LL) >= 0 && NtClose(v10) >= 0 )
          {
            LODWORD(v28) = -60876;
            ObpLockDirectoryExclusive((__int64)v27, ObpTypeDirectoryObject);
            v12 = ObpTypeObjectType;
            for ( i = *(__int64 **)&ObpTypeObjectType->Version; i != (__int64 *)v12; i = (__int64 *)*i )
            {
              if ( (*((_BYTE *)i + 58) & 2) != 0 )
                v14 = (__int64)i - ObpInfoMaskToOffset[*((_BYTE *)i + 58) & 3] + 32;
              else
                v14 = 0LL;
              if ( v14
                && !*(_QWORD *)v14
                && !ObpLookupDirectoryEntry(ObpTypeDirectoryObject, (unsigned __int16 *)(v14 + 8), 64, (__int64)v27)
                && (!i[9] && (int)ObpInitObjectTypeSD((__int64)(i + 10), 0LL) < 0
                 || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)i + 80, (__int64)v27)) )
              {
                return 0;
              }
            }
            ObpReleaseLookupContext((__int64)v27);
            Object = &ObpLUIDDeviceMapsEnabled;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
