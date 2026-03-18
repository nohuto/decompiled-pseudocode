/*
 * XREFs of WMIInitialize @ 0x140A39174
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140A65F48 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140A6F1A0 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140A6F6C4 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A6FD64 (WmipGetSMBiosFromLoaderBlock.c)
 */

char __fastcall WMIInitialize(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( (_DWORD)a1 )
  {
    WmipInitializeRegistration(a1, a2);
    return 1;
  }
  WmipInitializeAllocs(a1, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( IoCreateDriver(&DestinationString, (_DMA_OPERATIONS *)WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders(v5, v4);
    return 1;
  }
  return v2;
}
