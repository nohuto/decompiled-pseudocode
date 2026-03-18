/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14086B220
 * Callers:
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KCBNeedsVirtualImage @ 0x14030B554 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140626200 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x1406D0328 (CmpReparseToVirtualPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140918ADC (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  int AccessStateFromSubjectContext; // ebx
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  int v20; // edx
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v24[19]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v25[3]; // [rsp+190h] [rbp+90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v26[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v27[224]; // [rsp+260h] [rbp+160h] BYREF

  DestinationString = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(v27, 0, sizeof(v27));
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v25, 0, sizeof(v25));
  memset(v24, 0, 0x128uLL);
  LODWORD(v24[6]) = -1;
  *((_QWORD *)&v24[9] + 1) = &v24[9];
  *(_QWORD *)&v24[9] = &v24[9];
  memset((char *)&v24[13] + 8, 0, 0x50uLL);
  v8 = *a1;
  AccessStateFromSubjectContext = 0;
  v22 = 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( !*(_WORD *)(v10 + 66) && (*(_DWORD *)(v8 + 48) & 0x10) == 0 && KCBNeedsVirtualImage(*(_QWORD *)(v8 + 8)) )
  {
    v14 = *(_DWORD *)(v10 + 184);
    if ( (v14 & 0x800000) != 0 && (v14 & 0x20) == 0 )
    {
      CmpAttachToRegistryProcess((__int64)v25, v11, v12, v13);
      CmpLockRegistry();
      CmpLockKcbShared(v10);
      AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        if ( CmpReparseToVirtualPath(v10, v15, a4, &DestinationString) )
        {
          CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
          CmpUnlockRegistry();
          LODWORD(v24[1]) = *a5;
          LODWORD(v24[0]) = 8;
          *((_QWORD *)&v24[4] + 1) = *(_QWORD *)(v8 + 56);
          AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                            a4,
                                            (unsigned int)v26,
                                            (unsigned int)v27,
                                            a3,
                                            (__int64)CmKeyObjectType + 76);
          if ( AccessStateFromSubjectContext >= 0 )
          {
            v20 = 1600;
            if ( a2 != 1 )
              v20 = 576;
            if ( (int)ObReferenceObjectByName(
                        (unsigned __int64)&DestinationString,
                        v20,
                        (__int64 *)v26,
                        a3,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)v24,
                        (PADAPTER_OBJECT *)&v22) >= 0 )
            {
              *a1 = v22;
              HalPutDmaAdapter((PADAPTER_OBJECT)v8);
            }
            SeDeleteAccessState(v26);
            AccessStateFromSubjectContext = 0;
          }
          goto LABEL_10;
        }
        AccessStateFromSubjectContext = 0;
      }
      CmpUnlockKcb(v10);
      CmpUnlockRegistry();
LABEL_10:
      CmpDetachFromRegistryProcess((__int64)v25, v16, v17, v18);
    }
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v24, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
