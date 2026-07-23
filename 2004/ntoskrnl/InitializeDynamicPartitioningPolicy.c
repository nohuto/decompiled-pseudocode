/*
 * XREFs of InitializeDynamicPartitioningPolicy @ 0x140A6FDE8
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A2D90 (HviIsAnyHypervisorPresent.c)
 *     ZwQueryLicenseValue @ 0x1403F6020 (ZwQueryLicenseValue.c)
 */

NTSTATUS __fastcall InitializeDynamicPartitioningPolicy(__int64 a1)
{
  NTSTATUS result; // eax
  bool IsAnyHypervisorPresent; // al
  const WCHAR *v3; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp+10h] BYREF
  int v6; // [rsp+54h] [rbp+14h]
  ULONG Type; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  v6 = HIDWORD(a1);
  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  result = HvlpFlags;
  DestinationString = 0LL;
  if ( (HvlpFlags & 2) == 0 )
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
    v3 = L"Kernel-VirtualDynamicPartitioningSupported";
    if ( !IsAnyHypervisorPresent )
      v3 = L"Kernel-DynamicPartitioningSupported";
    RtlInitUnicodeString(&DestinationString, v3);
    result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
    if ( result >= 0 && Data && ResultDataSize == 4 && Type == 4 )
    {
      result = HvlpFlags;
      if ( (HvlpFlags & 4) == 0 )
      {
        KeDynamicPartitioningSupported = 1;
        result = MEMORY[0xFFFFF780000002F0] | 0x20;
        MEMORY[0xFFFFF780000002F0] |= 0x20u;
      }
    }
  }
  return result;
}
