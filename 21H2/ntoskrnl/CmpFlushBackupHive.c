/*
 * XREFs of CmpFlushBackupHive @ 0x140917A40
 * Callers:
 *     CmpSyncNextBackupHive @ 0x140917F4C (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14041C2E0 (ZwSetInformationObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     RtlAppendStringToString @ 0x1406E24E0 (RtlAppendStringToString.c)
 *     CmpCmdHiveOpen @ 0x14070AAD0 (CmpCmdHiveOpen.c)
 *     CmpFreeOffsetArray @ 0x140917DC4 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x140917E18 (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1409180B0 (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x14091D570 (CmpCmdRenameHive.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x1409220A0 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AB4C18 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  wchar_t *v3; // rdi
  int v4; // esi
  void *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  char FileInformation[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  int v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v33[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v34[432]; // [rsp+D0h] [rbp-30h] BYREF
  char v35; // [rsp+280h] [rbp+180h] BYREF

  v1 = a1;
  FileInformation[0] = 1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v30 = 0LL;
  v25 = 0;
  DestinationString = 0LL;
  *(_QWORD *)v29 = 0LL;
  v27 = 0;
  IoStatusBlock = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  v2 = 23 * v1;
  v3 = CmpMachineHiveList[v2 + 6];
  if ( !CmpDoIdleProcessing )
    return (unsigned int)-1073741431;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v35;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v2]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v5 = (void *)*((_QWORD *)v3 + 196);
  if ( v5 )
  {
    v4 = CmpCmdRenameHive(v5, 0LL, 1);
    if ( v4 >= 0 )
    {
      Destination.Length -= 8;
      *((_QWORD *)v3 + 196) = 0LL;
      if ( (int)CmpInitBackupHive(v3, CmpMachineHiveList[v2]) >= 0 )
      {
        CmpAttachToRegistryProcess(v33);
        CmpLockRegistry(v7, v6, v8);
        HvLockHiveFlusherExclusive(v3);
        if ( (int)HvAllocateOffsetArraysForHiveSnapshot(v3, &v25, v29, &v27) < 0
          || (v10 = *(_QWORD *)v29, (int)HvSnapshotHiveToOffsetArray(v3, v9, *(_QWORD *)v29) < 0) )
        {
          HvUnlockHiveFlusherExclusive(v3);
          CmpUnlockRegistry(v20, v19, v21, v22);
          CmpDetachFromRegistryProcess(v33);
        }
        else
        {
          HvUnlockHiveFlusherExclusive(v3);
          CmpUnlockRegistry(v12, v11, v13, v14);
          CmpDetachFromRegistryProcess(v33);
          v16 = CmpWriteOffsetArrayToFile(v15, v25, v10, v27, *((HANDLE *)v3 + 196));
          CmpFreeOffsetArray((unsigned int)v25, v10);
          if ( v16 >= 0 )
          {
            v17 = *((_QWORD *)v3 + 196);
            LOWORD(v25) = 0;
            ZwSetInformationObject(v17, 4LL);
            ZwClose(*((HANDLE *)v3 + 196));
            *((_QWORD *)v3 + 196) = 0LL;
            LOBYTE(v25) = 0;
            v4 = CmpCmdHiveOpen((int)&Destination, 0, (int)&v25, (__int64)&v30, 17367041, 0, 0LL, 0LL, v34);
            if ( v4 >= 0 )
            {
              v18 = v30;
              *((_QWORD *)v3 + 196) = *(_QWORD *)(v30 + 1544);
              *(_QWORD *)(v18 + 1544) = 0LL;
              CmpAttachToRegistryProcess(v33);
              CmpDestroyHive(v18);
              CmpDetachFromRegistryProcess(v33);
              ZwSetInformationFile(v5, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
              LOWORD(v25) = 0;
              ZwSetInformationObject((__int64)v5, 4LL);
              ZwClose(v5);
              return (unsigned int)v4;
            }
          }
        }
      }
      v23 = *((_QWORD *)v3 + 196);
      if ( v23 )
      {
        LOWORD(v25) = 0;
        ZwSetInformationObject(v23, 4LL);
        ZwClose(*((HANDLE *)v3 + 196));
        *((_QWORD *)v3 + 196) = 0LL;
      }
      v4 = CmpCmdRenameHive(v5, 0LL, 1);
      if ( v4 >= 0 )
        *((_QWORD *)v3 + 196) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
