/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x1407BDEF4
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140276BC8 (_tlgCreate1Sz_wchar_t.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PopOpenThermalLoggingKey @ 0x1403C934C (PopOpenThermalLoggingKey.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void PopThermalHandlePreviousShutdown()
{
  HANDLE v0; // rdi
  char v1; // r14
  WCHAR *v2; // rbx
  WCHAR *v3; // r15
  int v4; // esi
  WCHAR *PoolWithTag; // rax
  HANDLE v6; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-81h]
  ULONG Length; // [rsp+48h] [rbp-69h] BYREF
  int Data; // [rsp+4Ch] [rbp-65h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-59h] BYREF
  UNICODE_STRING v12; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-31h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-21h] BYREF
  int v16; // [rsp+A0h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+A8h] [rbp-9h] BYREF
  char v18[16]; // [rsp+C8h] [rbp+17h] BYREF
  HANDLE *p_KeyHandle; // [rsp+D8h] [rbp+27h]
  int v20; // [rsp+E0h] [rbp+2Fh]
  int v21; // [rsp+E4h] [rbp+33h]

  KeyHandle = 0LL;
  Length = 0;
  Data = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  v12 = 0LL;
  ValueName = 0LL;
  if ( (int)PopOpenThermalLoggingKey(0, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&v12, L"ShutdownSource");
    RtlInitUnicodeString(&ValueName, L"ShutdownTemperature");
    v0 = KeyHandle;
    v16 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &Length) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      if ( ZwQueryValueKey(v0, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Length) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        v1 = 1;
        Data = HIDWORD(KeyValueInformation);
      }
      else
      {
        v1 = 0;
      }
      v2 = 0LL;
      v3 = (WCHAR *)L"Unknown";
      v4 = 16;
      if ( ZwQueryValueKey(v0, &v12, KeyValuePartialInformation, 0LL, 0, &Length) == -1073741789 )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x6D726854u);
        v2 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, Length + 2LL);
          if ( ZwQueryValueKey(v0, &v12, KeyValuePartialInformation, v2, Length, &Length) >= 0
            && *((_DWORD *)v2 + 1) == 1 )
          {
            v4 = *((_DWORD *)v2 + 2);
            v3 = v2 + 6;
          }
        }
      }
      if ( ZwDeleteValueKey(v0, &DestinationString) >= 0 )
      {
        if ( (int)PopOpenThermalLoggingKey(1, &Handle) >= 0 )
        {
          ResultLength = v4;
          v6 = Handle;
          ZwSetValueKey(Handle, &v12, 0, 1u, v3, ResultLength);
          if ( v1 )
            ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
          ZwClose(v6);
        }
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
        if ( (unsigned int)dword_140C021E8 > 5 && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
        {
          tlgCreate1Sz_wchar_t((__int64)v18, (const size_t *)v3);
          v21 = 0;
          p_KeyHandle = &KeyHandle;
          LODWORD(KeyHandle) = Data;
          v20 = 4;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C021E8,
            (unsigned __int8 *)&dword_140025FC4,
            0LL,
            0LL,
            4u,
            &v17);
        }
        ZwDeleteValueKey(v0, &ValueName);
        ZwDeleteValueKey(v0, &v12);
      }
      if ( v2 )
        ExFreePoolWithTag(v2, 0x6D726854u);
    }
    if ( v0 )
      ZwClose(v0);
  }
}
