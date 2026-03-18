/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14086C570
 * Callers:
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KCBNeedsVirtualImage @ 0x1402787B8 (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x1405F0BE0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x14064FC48 (CmpReparseToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeDeleteAccessState @ 0x14067A200 (SeDeleteAccessState.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140919D8C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  int AccessStateFromSubjectContext; // ebx
  ULONG_PTR v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v14; // edx
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v18[19]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v19[3]; // [rsp+190h] [rbp+90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v20[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v21[224]; // [rsp+260h] [rbp+160h] BYREF

  DestinationString = 0LL;
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, 0x128uLL);
  LODWORD(v18[6]) = -1;
  *((_QWORD *)&v18[9] + 1) = &v18[9];
  *(_QWORD *)&v18[9] = &v18[9];
  memset((char *)&v18[13] + 8, 0, 0x50uLL);
  v8 = *a1;
  AccessStateFromSubjectContext = 0;
  v16 = 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( !*(_WORD *)(v10 + 66) && (*(_DWORD *)(v8 + 48) & 0x10) == 0 && KCBNeedsVirtualImage() )
  {
    v11 = *(_DWORD *)(v10 + 184);
    if ( (v11 & 0x800000) != 0 && (v11 & 0x20) == 0 )
    {
      CmpAttachToRegistryProcess((__int64)v19);
      CmpLockRegistry();
      CmpLockKcbShared(v10);
      AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        if ( CmpReparseToVirtualPath(v10, v12, a4, &DestinationString) )
        {
          CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
          CmpUnlockRegistry();
          LODWORD(v18[1]) = *a5;
          LODWORD(v18[0]) = 8;
          *((_QWORD *)&v18[4] + 1) = *(_QWORD *)(v8 + 56);
          AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                            a4,
                                            (unsigned int)v20,
                                            (unsigned int)v21,
                                            a3,
                                            (__int64)CmKeyObjectType + 76);
          if ( AccessStateFromSubjectContext >= 0 )
          {
            v14 = 1600;
            if ( a2 != 1 )
              v14 = 576;
            if ( (int)ObReferenceObjectByName(
                        (__int64)&DestinationString,
                        v14,
                        (__int64 *)v20,
                        a3,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)v18,
                        (PADAPTER_OBJECT *)&v16) >= 0 )
            {
              *a1 = v16;
              HalPutDmaAdapter((PADAPTER_OBJECT)v8);
            }
            SeDeleteAccessState(v20);
            AccessStateFromSubjectContext = 0;
          }
          goto LABEL_10;
        }
        AccessStateFromSubjectContext = 0;
      }
      CmpUnlockKcb(v10);
      CmpUnlockRegistry();
LABEL_10:
      CmpDetachFromRegistryProcess((__int64)v19);
    }
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v18, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
