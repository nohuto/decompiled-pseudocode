/*
 * XREFs of RaidRegGetDeviceDumpSupportLevel @ 0x1C00183B0
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C001828C (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     PortRegistryRead @ 0x1C0072A48 (PortRegistryRead.c)
 */

__int64 __fastcall RaidRegGetDeviceDumpSupportLevel(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+64h] [rbp+Ch]
  _DWORD *v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  v7 = HIDWORD(a1);
  v6 = 4;
  v5 = 0LL;
  DestinationString = 0LL;
  *a2 = 2;
  RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry");
  RtlInitUnicodeString(&DestinationString, L"DeviceDumpLevel");
  return (unsigned int)PortRegistryRead(
                         (unsigned int)&v5,
                         (unsigned int)&DestinationString,
                         v2,
                         (unsigned int)&v8,
                         (__int64)&v6) != 0
       ? 0xC000000D
       : 0;
}
