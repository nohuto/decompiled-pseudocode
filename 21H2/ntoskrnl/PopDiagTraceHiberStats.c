/*
 * XREFs of PopDiagTraceHiberStats @ 0x14077460C
 * Callers:
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     PopOpenPowerKey @ 0x1403A7DDC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     PopComputeDerivedHiberStats @ 0x140774A00 (PopComputeDerivedHiberStats.c)
 *     PopQpcTimeInMs @ 0x140991634 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140991688 (PopCaptureTimeOnProcZero.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 *v5; // r12
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r15
  _BYTE *Data; // r13
  __int64 *v8; // rsi
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rax
  int v12; // edi
  int v13; // edi
  ULONG DataSize; // ebx
  unsigned __int64 v15; // rax
  REGHANDLE v16; // rbx
  HANDLE DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int128 v21; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v22[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v21 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  v0 = PopOpenPowerKey((__int64)DestinationString);
  v1 = DestinationString[0];
  if ( v0 < 0 )
    v1 = 0LL;
  DestinationString[0] = v1;
  v2 = PopCaptureTimeOnProcZero();
  v3 = qword_140C24090;
  qword_140C240D0 -= qword_140C240B8 + qword_140C240B0;
  qword_140C24098 = v2 - (qword_140C240B8 + qword_140C240B0);
  dword_140C2419C = dword_140C23EA4;
  dword_140C24198 = dword_140C23F28;
  v20 = qword_140C24090;
  LODWORD(qword_140C24148) = PopQpcTimeInMs(&qword_140C23F78, &qword_140C23F80);
  qword_140C23FF8 = (unsigned int)PopQpcTimeInMs(&qword_140C23F48, &qword_140C24000);
  PopComputeDerivedHiberStats(&qword_140C23FB8, v3, &v21);
  v4 = 47LL;
  v5 = (unsigned __int64 *)v22;
  v19 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v8 = &qword_140988A80;
  do
  {
    v9 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v10 = &v22[v9 - 8];
    else
      v10 = (char *)&qword_140C23FB8 + v9;
    if ( (*(_DWORD *)v8 & 2) != 0 )
      v11 = *(_QWORD *)v10;
    else
      v11 = *(unsigned int *)v10;
    *v5 = v11;
    v12 = *(_DWORD *)v8;
    if ( *(int *)v8 < 0 )
    {
      v4 = v19;
      *v5 = v11 / v3;
    }
    v13 = v12 & 0x20;
    DataSize = v13 != 0 ? 8 : 4;
    if ( v1 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], (PCWSTR)*(v8 - 2));
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, v13 != 0 ? 11 : 4, Data, DataSize);
      v4 = v19;
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v3 = v20;
    v8 += 3;
    p_Reserved->Reserved = 0;
    ++v5;
    p_Reserved += 4;
    v19 = --v4;
  }
  while ( v4 );
  qword_140C24110 /= v3;
  qword_140C23FC0 /= v3;
  v15 = qword_140C24098 / v3 - (unsigned int)qword_140C24008 - (unsigned int)dword_140C24010;
  qword_140C241A0 = v15;
  if ( v1 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C24110, 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C23FC0, 4u);
    if ( qword_140C24138 )
    {
      dword_140C23E84 += PopQpcTimeInMs(&qword_140C23F68, &qword_140C24140);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140C23E84, 4u);
    }
    qword_140C241A8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &qword_140C241A8, 8u);
    LOBYTE(v15) = ZwClose(DestinationString[0]);
  }
  if ( PopDiagHandleRegistered )
  {
    v16 = PopDiagHandle;
    LOBYTE(v15) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v15 )
      LOBYTE(v15) = EtwWrite(v16, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x2Fu, &UserData);
  }
  return v15;
}
