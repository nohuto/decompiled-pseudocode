/*
 * XREFs of _WerpEscalationReadUlongFromKey@12 @ 0x4B33BC30
 * Callers:
 *     _WerpEscalationIsDisabled@0 @ 0x4B33BB2C (_WerpEscalationIsDisabled@0.c)
 *     _WerpEscalationIsWMRSendStringSet@0 @ 0x4B33BBAE (_WerpEscalationIsWMRSendStringSet@0.c)
 * Callees:
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall WerpEscalationReadUlongFromKey(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-24h] BYREF
  ULONG ResultLength; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE KeyValueInformation[4]; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h]
  int v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+20h] [ebp-Ch]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
    return -1073741772;
  if ( result >= 0 )
  {
    if ( v8 == 4 && v9 == 4 )
    {
      *a3 = v10;
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
