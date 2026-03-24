/*
 * XREFs of MouConfiguration @ 0x1C000F080
 * Callers:
 *     DriverEntry @ 0x1C000F500 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002310 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002410 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0002610 (WPP_RECORDER_SF_Dd.c)
 *     __security_check_cookie @ 0x1C0002950 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_D @ 0x1C0005804 (WPP_RECORDER_SF_D.c)
 *     _tlgKeywordOn @ 0x1C0006B68 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0006B9C (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void MouConfiguration()
{
  char v0; // di
  const WCHAR *v1; // rsi
  _DWORD *PoolWithTag; // rax
  int Length; // edx
  int v4; // r8d
  int v5; // r9d
  _DWORD *v6; // rbx
  WCHAR *v7; // rax
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // r9
  int v17; // [rsp+20h] [rbp-99h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  int v19; // [rsp+50h] [rbp-69h] BYREF
  int Lock_high; // [rsp+54h] [rbp-65h] BYREF
  int Lock; // [rsp+58h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+70h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+80h] [rbp-39h] BYREF
  int *v25; // [rsp+A0h] [rbp-19h]
  __int64 v26; // [rsp+A8h] [rbp-11h]
  int *p_Lock_high; // [rsp+B0h] [rbp-9h]
  __int64 v28; // [rsp+B8h] [rbp-1h]
  _DWORD *v29; // [rsp+C0h] [rbp+7h]
  __int64 v30; // [rsp+C8h] [rbp+Fh]
  PWSTR v31; // [rsp+D0h] [rbp+17h]
  _DWORD v32[2]; // [rsp+D8h] [rbp+1Fh] BYREF
  int *p_Lock; // [rsp+E0h] [rbp+27h]
  __int64 v34; // [rsp+E8h] [rbp+2Fh]

  Destination = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PointerClass");
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  v0 = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  RtlCopyUnicodeString(&::DestinationString, &DestinationString);
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x43756F4Du);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x118uLL);
    RtlInitUnicodeString(&Destination, 0LL);
    Destination.MaximumLength = word_1C00092A0 + 26;
    v7 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C00092A0 + 26), 0x43756F4Du);
    Destination.Buffer = v7;
    if ( v7 )
    {
      memset(v7, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(&Destination, v1);
      RtlAppendUnicodeToString(&Destination, L"\\Parameters");
      Length = Destination.Length;
      if ( Destination.MaximumLength >= (unsigned __int64)Destination.Length + 2 )
      {
        Destination.Buffer[((unsigned __int64)Destination.Length >> 1) + 1] = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Fu, v17, Destination.Buffer);
        v6[2] = 288;
        *((_QWORD *)v6 + 2) = L"MouseDataQueueSize";
        v6[8] = 67108868;
        *((_QWORD *)v6 + 3) = &WPP_MAIN_CB.Reserved + 1;
        v6[16] = 288;
        *((_QWORD *)v6 + 9) = L"MaximumPortsServiced";
        v6[22] = 67108868;
        *((_QWORD *)v6 + 10) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
        *((_QWORD *)v6 + 16) = L"PointerDeviceBaseName";
        *((_QWORD *)v6 + 23) = L"ConnectMultiplePorts";
        *((_QWORD *)v6 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
        v6[30] = 288;
        *((_QWORD *)v6 + 17) = &::DestinationString;
        v6[36] = 16777217;
        v6[44] = 288;
        v6[50] = 67108868;
        Buffer = Destination.Buffer;
        SystemRoutineName = 0LL;
        RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlQueryRegistryValues;
        v17 = 0;
        v10 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
                0x80000000LL,
                Buffer,
                v6,
                0LL);
        if ( v10 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_13;
          LOBYTE(Length) = 3;
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 64, 0, v10);
        }
      }
      goto LABEL_11;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v16 = 62;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v16 = 61;
  }
  WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, v16, v17, v1);
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x41u, v17, ::DestinationString.Buffer);
LABEL_13:
  v11 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, Length, v4, v5, v17, 0);
    v11 = 100;
    goto LABEL_15;
  }
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) <= 0xAAAAAAAu )
  {
LABEL_15:
    v12 = 24 * v11;
    goto LABEL_16;
  }
  v12 = 2400;
LABEL_16:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      WPP_GLOBAL_Control->DeviceExtension,
      Length,
      v4,
      v5,
      v17,
      v12,
      SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
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
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v4, 68, v17, v0);
  }
  if ( (unsigned int)dword_1C0009010 > 5 && tlgKeywordOn() )
  {
    v19 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
    v25 = &v19;
    Lock_high = HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    p_Lock_high = &Lock_high;
    v29 = v32;
    v31 = ::DestinationString.Buffer;
    v32[0] = ::DestinationString.Length;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    p_Lock = &Lock;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 2LL;
    v32[1] = 0;
    v34 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_1C000782D, v14, v15, 7u, &v24);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
