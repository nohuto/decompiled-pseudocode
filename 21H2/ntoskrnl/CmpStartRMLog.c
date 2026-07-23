/*
 * XREFs of CmpStartRMLog @ 0x14077D6A4
 * Callers:
 *     CmpInitCmRM @ 0x1406C46C8 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x140767524 (CmpStartRMLogs.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14066AB70 (CmpQueryFileSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x1406C4E88 (CmpQueryNameString.c)
 *     CmpStartCLFSLog @ 0x14077DB44 (CmpStartCLFSLog.c)
 *     CmpRmAnalysisPhase @ 0x140875740 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140875980 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x140875B54 (CmpRmUnDoPhase.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  CLFS_INFORMATION *PoolWithTag; // r15
  bool v7; // zf
  int started; // ebx
  __int64 v9; // r12
  ULONG_PTR v10; // rax
  PVOID *v11; // r14
  PLOG_FILE_OBJECT *v12; // r13
  __int64 v13; // rax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  FILE_OBJECT *v16; // rcx
  PVOID v17; // rcx
  NTSTATUS v18; // ecx
  CLFS_LSN LastLsn; // rax
  PVOID v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  CLFS_LSN v29; // rbx
  FILE_OBJECT *v30; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn2; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  ULONG pcbReadBuffer; // [rsp+60h] [rbp-69h] BYREF
  PVOID P; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING GuidString; // [rsp+70h] [rbp-59h] BYREF
  ULONG pcbInfoBuffer; // [rsp+80h] [rbp-49h] BYREF
  ULONG pcbRestartBuffer; // [rsp+84h] [rbp-45h] BYREF
  PVOID pvReadContext; // [rsp+88h] [rbp-41h] BYREF
  PCUNICODE_STRING Source; // [rsp+90h] [rbp-39h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-31h] BYREF
  PVOID ppvRestartBuffer; // [rsp+A8h] [rbp-21h] BYREF
  CLFS_LSN plsn; // [rsp+B0h] [rbp-19h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+B8h] [rbp-11h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+C0h] [rbp-9h] BYREF
  PVOID ppvReadBuffer; // [rsp+C8h] [rbp-1h] BYREF
  CLFS_LSN plsnRecord; // [rsp+D0h] [rbp+7h] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+D8h] [rbp+Fh] BYREF
  CLFS_LSN plsnFirst; // [rsp+E0h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+130h] [rbp+67h] BYREF
  char v51; // [rsp+140h] [rbp+77h]
  ULONG pcbWritten; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  v51 = 1;
  ppvRestartBuffer = 0LL;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn2.ullOffset = 0LL;
  pcbWritten = 0;
  pvRestartBuffer.ullOffset = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  --CurrentThread->KernelApcDisable;
  GuidString.Buffer = 0LL;
  P = 0LL;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)a1 + 16), 1u);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_47;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
LABEL_47:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v7 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v7 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140C01170 + 64) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_140C01170 + 64) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_33;
    v9 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 5242880LL;
    v10 = qword_140C01170;
  }
  else
  {
    started = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 1536LL), &UnicodeString);
    if ( started < 0 )
      goto LABEL_33;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_33;
    v10 = *((_QWORD *)a1 + 10);
    v9 = (__int64)(a1 + 72);
    *((_QWORD *)a1 + 9) = 0x100000LL;
  }
  started = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v10 + 1536), &P);
  if ( started < 0 )
  {
    P = 0LL;
  }
  else
  {
    v11 = (PVOID *)(a1 + 96);
    v12 = (PLOG_FILE_OBJECT *)(a1 + 88);
    v13 = (__int64)(a1 + 68);
    while ( 1 )
    {
      started = CmpStartCLFSLog(Source, &GuidString, ppvReadContext, v9, v13, (__int64)v12, (__int64)(a1 + 96));
      if ( started < 0 )
        break;
      pcbInfoBuffer = 120;
      v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
      v15 = v14;
      if ( v14 )
      {
        ClfsGetLogFileInformation(*v12, v14, &pcbInfoBuffer);
        ExFreePoolWithTag(v15, 0);
      }
      v16 = *v12;
      pcbWritten = 120;
      started = ClfsGetLogFileInformation(v16, PoolWithTag, &pcbWritten);
      *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
      if ( started < 0 )
        break;
      if ( ClfsReadRestartArea(*v11, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
        || !ppvRestartBuffer )
      {
        plsn2 = PoolWithTag->BaseLsn;
      }
      else
      {
        plsn2 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( ClfsLsnEqual(&plsn, &plsn2) )
        {
          v17 = *v11;
          plsnFirst = plsn2;
          pvReadContext = 0LL;
          ppvReadBuffer = 0LL;
          pcbReadBuffer = 0;
          plsnUndoNext.ullOffset = 0LL;
          plsnPrevious.ullOffset = 0LL;
          plsnRecord.ullOffset = 0LL;
          peRecordType = 0;
          if ( ClfsReadLogRecord(
                 v17,
                 &plsnFirst,
                 ClfsContextForward,
                 &ppvReadBuffer,
                 &pcbReadBuffer,
                 &peRecordType,
                 &plsnUndoNext,
                 &plsnPrevious,
                 &pvReadContext) >= 0 )
          {
            peRecordType = 1;
            v18 = ClfsReadNextLogRecord(
                    pvReadContext,
                    &ppvReadBuffer,
                    &pcbReadBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
            if ( v18 == -1073741807 )
            {
              LastLsn = PoolWithTag->LastLsn;
            }
            else
            {
              LastLsn = plsn2;
              if ( v18 >= 0 )
                LastLsn = plsnRecord;
            }
            plsn2 = LastLsn;
          }
          if ( pvReadContext )
            ClfsTerminateReadLog(pvReadContext);
        }
      }
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      if ( !ClfsLsnEqual(&plsn2, &PoolWithTag->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
      {
        v29 = plsn2;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn2.ullOffset) >= 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v29.ullOffset);
          CmpRmUnDoPhase(a1);
        }
        *((_DWORD *)a1 + 26) &= ~4u;
      }
      v20 = *v11;
      pvRestartBuffer = PoolWithTag->LastLsn;
      v21 = ClfsWriteRestartArea(v20, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
      started = v21;
      if ( !v51 || v21 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
        break;
      v51 = 0;
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      v12 = (PLOG_FILE_OBJECT *)(a1 + 88);
      ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
      ClfsDeleteMarshallingArea(*v11);
      v30 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
      *v11 = 0LL;
      ClfsCloseLogFileObject(v30);
      v13 = (__int64)(a1 + 68);
      *((_QWORD *)a1 + 11) = 0LL;
      *((_DWORD *)a1 + 17) = 0;
    }
    if ( pvCursorContext )
      ClfsTerminateReadLog(pvCursorContext);
    if ( started < 0 )
    {
      if ( *v11 )
        *v11 = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
    }
  }
LABEL_33:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)started;
}
