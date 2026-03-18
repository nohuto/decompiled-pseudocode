/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C0015A0C
 * Callers:
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006D470 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_CreateWdfDevice @ 0x1C006E550 (Controller_CreateWdfDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r10
  size_t v5; // rdi
  NTSTATUS v6; // ebx
  unsigned __int64 MaximumLength; // rax
  int v8; // eax
  va_list Args; // [rsp+70h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || (_WORD)MaximumLength) )
  {
    v6 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v5 = MaximumLength >> 1;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    v8 = _vsnwprintf(Buffer, v5, pszFormat, Args);
    if ( v8 < 0 || v8 > v5 )
    {
      LOWORD(v8) = v5;
      v6 = -2147483643;
    }
    DestinationString->Length = 2 * v8;
  }
  return v6;
}
