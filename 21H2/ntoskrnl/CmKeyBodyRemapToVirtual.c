/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14086F980
 * Callers:
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x14023A1EC (KCBNeedsVirtualImage.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmpReparseToVirtualPath @ 0x1405FFF2C (CmpReparseToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D32C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // r9
  int v15; // eax
  struct _DMA_ADAPTER *v17; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  _OWORD v25[19]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v26[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v27[5]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v28[224]; // [rsp+290h] [rbp+190h] BYREF

  DestinationString = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v28, 0, sizeof(v28));
  v19[1] = 0;
  v23 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, 0x128uLL);
  LODWORD(v25[6]) = -1;
  *((_QWORD *)&v25[9] + 1) = &v25[9];
  *(_QWORD *)&v25[9] = &v25[9];
  memset((char *)&v25[13] + 8, 0, 0x50uLL);
  v8 = *a1;
  v17 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 66)
    || (*(_DWORD *)(v8 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v11 = *(_DWORD *)(v9 + 184), (v11 & 0x800000) == 0)
    || (v11 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess((__int64)v26);
  CmpLockRegistry();
  CmpLockKcbShared(v9);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( CmpReparseToVirtualPath(v9, v12, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry();
      LODWORD(v25[1]) = *a5;
      LODWORD(v25[0]) = 8;
      *((_QWORD *)&v25[4] + 1) = *(_QWORD *)(v8 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        (unsigned int)v27,
                                        (unsigned int)v28,
                                        a3,
                                        (__int64)CmKeyObjectType + 76);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v20 = 0LL;
        v15 = 1600;
        v19[0] = 48;
        if ( a2 != 1 )
          v15 = 576;
        v22 = v15;
        p_DestinationString = &DestinationString;
        v24 = 0LL;
        if ( (int)CmObReferenceObjectByName((int)v19, (int)v27, a3, v14, 0, (__int64)v25, &v17) >= 0 )
        {
          *a1 = (__int64)v17;
          HalPutDmaAdapter((PADAPTER_OBJECT)v8);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState(v27);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = -1073741790;
  }
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
LABEL_11:
  CmpDetachFromRegistryProcess((__int64)v26);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v25, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
