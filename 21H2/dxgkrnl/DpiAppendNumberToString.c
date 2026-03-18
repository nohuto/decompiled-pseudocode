/*
 * XREFs of DpiAppendNumberToString @ 0x1C02037FC
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C0203310 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0203500 (DpiGdoCreateGdiObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C039834C (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  wchar_t *PoolWithTag; // rax
  NTSTATUS v6; // ebx
  SIZE_T v7; // rdx
  wchar_t *v8; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  DestinationString = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x74727044u);
  String.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, String.MaximumLength);
    v6 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v6 >= 0 )
    {
      v7 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v7;
      Destination->Length = 0;
      v8 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x74727044u);
      Destination->Buffer = v8;
      if ( v8 )
      {
        memset(v8, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
  }
  return (unsigned int)v6;
}
