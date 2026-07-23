/*
 * XREFs of CmpStartCLFSLog @ 0x14076F174
 * Callers:
 *     CmpStartRMLog @ 0x14076ECD4 (CmpStartRMLog.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PsDisableImpersonation @ 0x140666DB0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140666EE0 (PsRestoreImpersonation.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        ULONGLONG *a6,
        int *a7,
        FILE_OBJECT **a8,
        PVOID *a9)
{
  unsigned __int16 v12; // cx
  BOOLEAN v13; // r13
  NTSTATUS LogFileInformation; // ebx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v16; // rsi
  int TotalContainers; // edi
  FILE_OBJECT *pplfoLog; // [rsp+60h] [rbp-79h] BYREF
  ULONG pcbInfoBuffer; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-69h] BYREF
  PVOID ppvMarshalContext; // [rsp+80h] [rbp-59h] BYREF
  PULONGLONG pcbContainer; // [rsp+88h] [rbp-51h]
  int *v24; // [rsp+90h] [rbp-49h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-31h] BYREF

  pcbContainer = a6;
  *a8 = 0LL;
  *a9 = 0LL;
  v24 = a7;
  v12 = Source->Length + 26 + a2->Length;
  pcbInfoBuffer = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v12;
  ImpersonationState = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a8 = 0LL;
  *a9 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v13 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, 0x200u, 0LL, 0);
  if ( LogFileInformation < 0 )
  {
    if ( LogFileInformation == -1073741772 )
    {
      LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 2u, 8u, 0, 0x200u, 0LL, 0);
      if ( LogFileInformation >= 0 )
      {
        TotalContainers = 0;
        while ( 1 )
        {
          LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                                 pplfoLog,
                                 Source,
                                 a2,
                                 &CmpLogExt,
                                 &CmpContainerSuffix,
                                 TotalContainers,
                                 pcbContainer);
          if ( LogFileInformation < 0 )
            break;
          if ( (unsigned int)++TotalContainers >= 3 )
            goto LABEL_6;
        }
      }
    }
  }
  else
  {
    pcbInfoBuffer = 120;
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, PoolWithTag, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v16, 0);
      }
      else
      {
        TotalContainers = v16->TotalContainers;
        ExFreePoolWithTag(v16, 0);
LABEL_6:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          *v24 = TotalContainers;
          *a8 = pplfoLog;
          *a9 = ppvMarshalContext;
        }
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v13 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
