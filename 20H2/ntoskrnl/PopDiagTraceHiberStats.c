/*
 * XREFs of PopDiagTraceHiberStats @ 0x14077057C
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     PopOpenPowerKey @ 0x1403A7834 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     PopComputeDerivedHiberStats @ 0x140770970 (PopComputeDerivedHiberStats.c)
 *     PopQpcTimeInMs @ 0x140993634 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140993688 (PopCaptureTimeOnProcZero.c)
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
  v3 = qword_140C23930;
  qword_140C23970 -= qword_140C23958 + qword_140C23950;
  qword_140C23938 = v2 - (qword_140C23958 + qword_140C23950);
  dword_140C23A3C = dword_140C23524;
  dword_140C23A38 = dword_140C235A8;
  v20 = qword_140C23930;
  LODWORD(qword_140C239E8) = PopQpcTimeInMs(&qword_140C23818, &qword_140C23820);
  qword_140C23898 = (unsigned int)PopQpcTimeInMs(&qword_140C237E8, &qword_140C238A0);
  PopComputeDerivedHiberStats(&qword_140C23858, v3, &v21);
  v4 = 47LL;
  v5 = (unsigned __int64 *)v22;
  v19 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v22;
  v8 = &qword_14098B180;
  do
  {
    v9 = *(v8 - 1);
    if ( (*(_DWORD *)v8 & 0x40000000) != 0 )
      v10 = &v22[v9 - 8];
    else
      v10 = (char *)&qword_140C23858 + v9;
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
  qword_140C239B0 /= v3;
  qword_140C23860 /= v3;
  v15 = qword_140C23938 / v3 - (unsigned int)qword_140C238A8 - (unsigned int)dword_140C238B0;
  qword_140C23A40 = v15;
  if ( v1 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C239B0, 4u);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberIoCpuTime");
    ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &qword_140C23860, 4u);
    if ( qword_140C239D8 )
    {
      dword_140C23504 += PopQpcTimeInMs(&qword_140C23808, &qword_140C239E0);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HybridBootAnimationTime");
      ZwSetValueKey(v1, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &dword_140C23504, 4u);
    }
    qword_140C23A48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ResumeCompleteTimestamp");
    ZwSetValueKey(DestinationString[0], (PUNICODE_STRING)&DestinationString[1], 0, 0xBu, &qword_140C23A48, 8u);
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
