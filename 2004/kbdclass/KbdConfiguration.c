/*
 * XREFs of KbdConfiguration @ 0x1C0010560
 * Callers:
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002A40 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002B20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BB0 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0002DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00031C0 (memset.c)
 *     _tlgKeywordOn @ 0x1C0007378 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00073AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void KbdConfiguration()
{
  char v0; // di
  const WCHAR *v1; // rsi
  _DWORD *PoolWithTag; // rax
  int Length; // edx
  int v4; // r8d
  _DWORD *v5; // rbx
  WCHAR *v6; // rax
  unsigned __int64 v7; // rdx
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r9d
  int v17; // [rsp+20h] [rbp-99h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-89h] BYREF
  int v19; // [rsp+40h] [rbp-79h] BYREF
  int v20; // [rsp+44h] [rbp-75h] BYREF
  KSPIN_LOCK Lock; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-49h] BYREF
  int *v25; // [rsp+90h] [rbp-29h]
  __int64 v26; // [rsp+98h] [rbp-21h]
  int *v27; // [rsp+A0h] [rbp-19h]
  __int64 v28; // [rsp+A8h] [rbp-11h]
  _DWORD *v29; // [rsp+B0h] [rbp-9h]
  __int64 v30; // [rsp+B8h] [rbp-1h]
  PWSTR v31; // [rsp+C0h] [rbp+7h]
  _DWORD v32[2]; // [rsp+C8h] [rbp+Fh] BYREF
  KSPIN_LOCK *p_Lock; // [rsp+D0h] [rbp+17h]
  __int64 v34; // [rsp+D8h] [rbp+1Fh]
  char *v35; // [rsp+E0h] [rbp+27h]
  __int64 v36; // [rsp+E8h] [rbp+2Fh]

  DestinationString = 0LL;
  SourceString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&SourceString, 0LL);
  RtlInitUnicodeString(&SourceString, L"KeyboardClass");
  v0 = 1;
  dword_1C000A1D4 = 100;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 1LL;
  RtlCopyUnicodeString(&::DestinationString, &SourceString);
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x150uLL, 0x4364624Bu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v16 = 63;
LABEL_31:
    LOBYTE(Length) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v4, v16);
    goto LABEL_9;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  DestinationString.MaximumLength = word_1C000A2C8 + 26;
  v6 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C000A2C8 + 26), 0x4364624Bu);
  DestinationString.Buffer = v6;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v16 = 64;
    goto LABEL_31;
  }
  memset(v6, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    v7 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v7 + 1] = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v7, v4, 65);
    }
    v5[2] = 288;
    *((_QWORD *)v5 + 2) = L"KeyboardDataQueueSize";
    v5[8] = 67108868;
    *((_QWORD *)v5 + 3) = &dword_1C000A1D4;
    v5[16] = 288;
    *((_QWORD *)v5 + 9) = L"MaximumPortsServiced";
    v5[22] = 67108868;
    *((_QWORD *)v5 + 10) = &WPP_MAIN_CB.DeviceQueue.1;
    *((_QWORD *)v5 + 16) = L"KeyboardDeviceBaseName";
    *((_QWORD *)v5 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v5 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    *((_QWORD *)v5 + 30) = L"SendOutputToAllPorts";
    *((_QWORD *)v5 + 31) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    v5[30] = 288;
    *((_QWORD *)v5 + 17) = &::DestinationString;
    v5[36] = 16777217;
    v5[44] = 288;
    v5[50] = 67108868;
    v5[58] = 288;
    v5[64] = 67108868;
    Buffer = DestinationString.Buffer;
    SystemRoutineName = 0LL;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v17 = 0;
    v10 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
            0x80000000LL,
            Buffer,
            v5,
            0LL);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      LOBYTE(Length) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 66, 0, v10);
    }
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 67);
  }
LABEL_11:
  v11 = dword_1C000A1D4;
  if ( dword_1C000A1D4 )
  {
    if ( (unsigned int)dword_1C000A1D4 > 0x15555555 )
    {
      v12 = 1200;
      goto LABEL_14;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 68, v17, 0);
    v11 = 100;
  }
  v12 = 12 * v11;
LABEL_14:
  dword_1C000A1D4 = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 69, v17, v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Length) = 4;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 70, v17, WPP_MAIN_CB.DeviceQueue.Busy);
    }
  }
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v0 = 0;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  }
  else
  {
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Length) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 71, v17, v0);
  }
  if ( (unsigned int)dword_1C000A010 > 5 && tlgKeywordOn() )
  {
    v19 = dword_1C000A1D4;
    v25 = &v19;
    v20 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
    v27 = &v20;
    v29 = v32;
    v31 = ::DestinationString.Buffer;
    v32[0] = ::DestinationString.Length;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    p_Lock = &Lock;
    v35 = (char *)&Lock + 4;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 2LL;
    v32[1] = 0;
    v34 = 4LL;
    v36 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_1C000887D, v14, v15, 8u, &v24);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
