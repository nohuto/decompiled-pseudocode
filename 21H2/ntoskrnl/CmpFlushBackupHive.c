/*
 * XREFs of CmpFlushBackupHive @ 0x1408710A0
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1408715C0 (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1403FB100 (ZwSetInformationObject.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     RtlAppendStringToString @ 0x14076DD80 (RtlAppendStringToString.c)
 *     CmpFreeOffsetArray @ 0x140871438 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x14087148C (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087178C (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x140876C3C (CmpCmdRenameHive.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408809B4 (HvSnapshotHiveToOffsetArray.c)
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
  int v9; // ecx
  void *v10; // rcx
  volatile signed __int32 *v11; // rbx
  void *v12; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v17; // [rsp+60h] [rbp-A8h] BYREF
  int v18; // [rsp+64h] [rbp-A4h] BYREF
  int v19[2]; // [rsp+68h] [rbp-A0h] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  int v21[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v25[3]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v26[432]; // [rsp+E8h] [rbp-20h] BYREF
  char v27; // [rsp+298h] [rbp+190h] BYREF

  v1 = a1;
  P = 0LL;
  v19[0] = 0;
  *(_QWORD *)v21 = 0LL;
  v19[1] = 0;
  DestinationString = 0LL;
  v2 = 0;
  *(_QWORD *)&Destination.Length = 0x800000LL;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  IoStatusBlock = 0LL;
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v5 = 25 * v1;
  Destination.Buffer = &v27;
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
      inited = CmpInitBackupHive(v6, CmpMachineHiveList[v5]);
      if ( inited < 0 )
        goto LABEL_14;
      CmpAttachToRegistryProcess((__int64)v25);
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
        inited = HvSnapshotHiveToOffsetArray(v6, v19, v21, &v19[1]);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 36);
        KeAbPostRelease((ULONG_PTR)(v6 + 36));
        v2 = v19[0];
        v3 = *(_QWORD *)v21;
        v4 = v19[1];
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      KiUnstackDetachProcess((__int64)v25, 0LL);
      if ( inited < 0 )
        goto LABEL_14;
      inited = CmpWriteOffsetArrayToFile(v9, v2, v3, v4, *((HANDLE *)v6 + 195));
      CmpFreeOffsetArray(v2, v3);
      if ( inited < 0
        || (v10 = (void *)*((_QWORD *)v6 + 195),
            ObjectInformation = 0,
            ZwSetInformationObject(v10, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v6 + 195)),
            *((_QWORD *)v6 + 195) = 0LL,
            FileInformation = 0,
            inited = CmpCmdHiveOpen(
                       (const UNICODE_STRING *)&Destination,
                       0,
                       &FileInformation,
                       (ULONG_PTR *)&P,
                       0x1190001u,
                       0,
                       0LL,
                       0LL,
                       v26),
            inited < 0) )
      {
LABEL_14:
        v12 = (void *)*((_QWORD *)v6 + 195);
        if ( v12 )
        {
          LOWORD(v18) = 0;
          ZwSetInformationObject(v12, ObjectHandleFlagInformation, &v18, 2u);
          ZwClose(*((HANDLE *)v6 + 195));
          *((_QWORD *)v6 + 195) = 0LL;
        }
        if ( (int)CmpCmdRenameHive(v7, 0LL, 1) >= 0 )
          *((_QWORD *)v6 + 195) = v7;
      }
      else
      {
        v11 = (volatile signed __int32 *)P;
        *((_QWORD *)v6 + 195) = *((_QWORD *)P + 192);
        *((_QWORD *)v11 + 192) = 0LL;
        CmpAttachToRegistryProcess((__int64)v25);
        CmpDestroyHive(v11);
        KiUnstackDetachProcess((__int64)v25, 0LL);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v17) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v17, 2u);
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
