/*
 * XREFs of PfpGetParameter @ 0x1408504E0
 * Callers:
 *     PfpSetBaseTime @ 0x14084FCD4 (PfpSetBaseTime.c)
 *     PfpParametersRead @ 0x14084FDCC (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x14084FF94 (PfSnParametersRead.c)
 *     PfpParametersInitialize @ 0x140B23B40 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __fastcall PfpGetParameter(HANDLE KeyHandle, const WCHAR *a2, int a3, void *a4, unsigned int *a5)
{
  NTSTATUS result; // eax
  unsigned int v9; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-158h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-138h] BYREF
  int v13; // [rsp+54h] [rbp-134h]
  unsigned int Src; // [rsp+58h] [rbp-130h]
  int Src_4; // [rsp+5Ch] [rbp-12Ch] BYREF

  ResultLength = 272;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !KeyHandle )
    return -1073741811;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( ResultLength < 0x10 )
    {
      return -1073741823;
    }
    else if ( v13 == a3 )
    {
      v9 = Src;
      if ( Src > *a5 )
      {
        return -1073741789;
      }
      else
      {
        memmove(a4, &Src_4, Src);
        result = 0;
        *a5 = v9;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
