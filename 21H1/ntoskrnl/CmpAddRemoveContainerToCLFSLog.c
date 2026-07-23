/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x14076803C
 * Callers:
 *     CmpStartCLFSLog @ 0x14076C9D4 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x140870ABC (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D37B0 (sprintf_s.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     PsDisableImpersonation @ 0x1405E0AB0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1405E0BE0 (PsRestoreImpersonation.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer)
{
  NTSTATUS v11; // edi
  BOOLEAN v12; // bl
  _DWORD *v13; // r9
  __int64 v14; // r8
  _DWORD *v15; // r9
  int v16; // edx
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v20; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v24[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+B0h] [rbp-50h] BYREF
  char *v26; // [rsp+D0h] [rbp-30h]
  int v27; // [rsp+D8h] [rbp-28h]
  int v28; // [rsp+DCh] [rbp-24h]
  NTSTATUS *v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+ECh] [rbp-14h]
  _DWORD *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]
  wchar_t *Buffer; // [rsp+100h] [rbp+0h]
  _DWORD v36[2]; // [rsp+108h] [rbp+8h] BYREF
  char DstBuf[16]; // [rsp+110h] [rbp+10h] BYREF

  SourceString = 0LL;
  Destination = 0LL;
  DestinationString = 0LL;
  ImpersonationState = 0LL;
  memset(v24, 0, sizeof(v24));
  RtlInitUnicodeString(&DestinationString, 0LL);
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + Sourcea->Length + 34;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v11 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v11 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v12 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v24, v13);
    v11 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KiUnstackDetachProcess((__int64)v24, 0LL, v14, v15);
    if ( v12 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v36[1] = 0;
      v26 = &v18;
      v29 = &v20;
      v32 = v36;
      Buffer = Destination.Buffer;
      v36[0] = Destination.Length;
      v18 = v16;
      v27 = v16;
      v20 = v11;
      v30 = 4;
      v33 = 2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140022EDB,
        0LL,
        0LL,
        6u,
        &v25);
    }
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v11;
}
