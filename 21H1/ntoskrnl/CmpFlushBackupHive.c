/*
 * XREFs of CmpFlushBackupHive @ 0x14086FC00
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1408701C0 (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403F2810 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1403F2EB0 (ZwSetInformationObject.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x140715158 (CmpDestroyHive.c)
 *     RtlAppendStringToString @ 0x140759410 (RtlAppendStringToString.c)
 *     CmpFreeOffsetArray @ 0x14086FF98 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x14086FFEC (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087038C (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x14087231C (CmpCmdRenameHive.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14087D64C (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r15d
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rbx
  wchar_t *v6; // rsi
  void *v7; // r14
  int inited; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // r8
  _DWORD *v13; // r9
  int v14; // ecx
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  volatile signed __int32 *v19; // rbx
  __int64 v20; // r8
  _DWORD *v21; // r9
  void *v22; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v27; // [rsp+60h] [rbp-A8h] BYREF
  int v28; // [rsp+64h] [rbp-A4h] BYREF
  int v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  int v31[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v35[3]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v36[432]; // [rsp+E8h] [rbp-20h] BYREF
  char v37; // [rsp+298h] [rbp+190h] BYREF

  v1 = a1;
  P = 0LL;
  v29[0] = 0;
  *(_QWORD *)v31 = 0LL;
  v29[1] = 0;
  DestinationString = 0LL;
  v2 = 0;
  *(_QWORD *)&Destination.Length = 0x800000LL;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  IoStatusBlock = 0LL;
  memset(v35, 0, sizeof(v35));
  memset(v36, 0, sizeof(v36));
  v5 = 25 * v1;
  Destination.Buffer = &v37;
  v6 = CmpMachineHiveList[v5 + 6];
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v5]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v7 = (void *)*((_QWORD *)v6 + 195);
  if ( v7 )
  {
    inited = CmpCmdRenameHive(v7, 0LL, 1);
    if ( inited >= 0 )
    {
      Destination.Length -= 8;
      *((_QWORD *)v6 + 195) = 0LL;
      inited = CmpInitBackupHive((ULONG_PTR)v6, CmpMachineHiveList[v5]);
      if ( inited < 0 )
        goto LABEL_14;
      CmpAttachToRegistryProcess((__int64)v35, v9, v10, v11);
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
        inited = HvSnapshotHiveToOffsetArray(v6, v29, v31, &v29[1]);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 36);
        KeAbPostRelease((ULONG_PTR)(v6 + 36));
        v2 = v29[0];
        v3 = *(_QWORD *)v31;
        v4 = v29[1];
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      KiUnstackDetachProcess((__int64)v35, 0LL, v12, v13);
      if ( inited < 0 )
        goto LABEL_14;
      inited = CmpWriteOffsetArrayToFile(v14, v2, v3, v4, *((HANDLE *)v6 + 195));
      CmpFreeOffsetArray(v2, v3);
      if ( inited < 0
        || (v15 = (void *)*((_QWORD *)v6 + 195),
            ObjectInformation = 0,
            ZwSetInformationObject(v15, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v6 + 195)),
            *((_QWORD *)v6 + 195) = 0LL,
            FileInformation = 0,
            inited = CmpCmdHiveOpen(
                       (const UNICODE_STRING *)&Destination,
                       0,
                       (__int64)&FileInformation,
                       (__int64)&P,
                       16777217,
                       0,
                       0LL,
                       0LL,
                       (__int64)v36),
            inited < 0) )
      {
LABEL_14:
        v22 = (void *)*((_QWORD *)v6 + 195);
        if ( v22 )
        {
          LOWORD(v28) = 0;
          ZwSetInformationObject(v22, ObjectHandleFlagInformation, &v28, 2u);
          ZwClose(*((HANDLE *)v6 + 195));
          *((_QWORD *)v6 + 195) = 0LL;
        }
        if ( (int)CmpCmdRenameHive(v7, 0LL, 1) >= 0 )
          *((_QWORD *)v6 + 195) = v7;
      }
      else
      {
        v19 = (volatile signed __int32 *)P;
        *((_QWORD *)v6 + 195) = *((_QWORD *)P + 192);
        *((_QWORD *)v19 + 192) = 0LL;
        CmpAttachToRegistryProcess((__int64)v35, v16, v17, v18);
        CmpDestroyHive(v19);
        KiUnstackDetachProcess((__int64)v35, 0LL, v20, v21);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v27) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v27, 2u);
        ZwClose(v7);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
