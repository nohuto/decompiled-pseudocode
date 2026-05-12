/*
 * XREFs of PortBuildRegKeyName @ 0x1C00578B4
 * Callers:
 *     StorPortRegistryRead @ 0x1C0038730 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C0038890 (StorPortRegistryWrite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     RtlStringCbPrintfA @ 0x1C0036A88 (RtlStringCbPrintfA.c)
 */

NTSTATUS __fastcall PortBuildRegKeyName(PCUNICODE_STRING SourceString, PUNICODE_STRING Destination, int a3, int a4)
{
  char *v6; // rdx
  NTSTATUS result; // eax
  unsigned int MaximumLength; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  wchar_t *PoolWithTag; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Source; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  char pszDest[24]; // [rsp+40h] [rbp-20h] BYREF

  Source = 0LL;
  DestinationString = 0LL;
  if ( a4 )
  {
    v6 = "\\Parameters\\Device";
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x18uLL, "\\Parameters\\Device%d", a3);
    v6 = pszDest;
  }
  RtlInitAnsiString(&DestinationString, v6);
  result = RtlAnsiStringToUnicodeString(&Source, &DestinationString, 1u);
  if ( result >= 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    v9 = -1;
    v10 = -1;
    v11 = MaximumLength + Source.MaximumLength;
    if ( v11 >= MaximumLength )
      v10 = MaximumLength + Source.MaximumLength;
    if ( v10 + 2 >= v10 )
      v9 = v10 + 2;
    if ( v11 < MaximumLength || v10 + 2 < v10 || v9 > 0xFFFF )
    {
      RtlFreeUnicodeString(&Source);
      return -1073741675;
    }
    else
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x42526C50u);
      Destination->Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        Destination->MaximumLength = v9;
        RtlCopyUnicodeString(Destination, SourceString);
        appended = RtlAppendUnicodeStringToString(Destination, &Source);
        RtlFreeUnicodeString(&Source);
        return appended;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
