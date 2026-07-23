/*
 * XREFs of ExGetExpirationDate @ 0x140793FD4
 * Callers:
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 *     ExInitializeTimeRefresh @ 0x140A59540 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x140341780 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rcx
  ULONG ResultDataSize; // [rsp+34h] [rbp-5h] BYREF
  ULONG Type; // [rsp+38h] [rbp-1h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  __int128 Data; // [rsp+60h] [rbp+27h] BYREF
  __int128 v10; // [rsp+70h] [rbp+37h]

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  Type = 0;
  ResultDataSize = 0;
  DestinationString = 0LL;
  Data = 0LL;
  v10 = 0LL;
  if ( Time )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
    v2 = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 0x10u, &ResultDataSize);
    if ( v2 < 0 )
      goto LABEL_13;
    v3 = v10 - Data;
    if ( (_QWORD)v10 == (_QWORD)Data )
      v3 = *((_QWORD *)&v10 + 1) - *((_QWORD *)&Data + 1);
    if ( v3 )
    {
      TimeFields.Year = Data;
      *(_DWORD *)&TimeFields.Month = *(_DWORD *)((char *)&Data + 2);
      TimeFields.Hour = WORD3(Data);
      *(_DWORD *)&TimeFields.Minute = DWORD2(Data);
      if ( !RtlTimeFieldsToTime(&TimeFields, Time) )
        v2 = -1073741823;
    }
    else
    {
      Time->QuadPart = 0LL;
    }
    if ( v2 < 0 )
LABEL_13:
      Time->QuadPart = 0LL;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
