/*
 * XREFs of _MsgQRegGetDWORD@12 @ 0x141F33
 * Callers:
 *     ?InitLogQMsg@@YGXXZ @ 0xEAB0E (-InitLogQMsg@@YGXXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall MsgQRegGetDWORD(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-410h] BYREF
  ULONG ResultLength; // [esp+10h] [ebp-408h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+14h] [ebp-404h] BYREF
  int v8; // [esp+18h] [ebp-400h]
  int v9; // [esp+20h] [ebp-3F8h]

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v8 == 4 )
      *a3 = v9;
    else
      return -1073741811;
  }
  return result;
}
