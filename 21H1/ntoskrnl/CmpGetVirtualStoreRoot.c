/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x14086C184
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmpGetVirtualizationID @ 0x14068F59C (CmpGetVirtualizationID.c)
 *     CmpGetMappingHiveForString @ 0x140691560 (CmpGetMappingHiveForString.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int VirtualizationID; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString, a1);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
      *a3 = *(_DWORD *)(*(_QWORD *)(*a2 + 64LL) + 36LL);
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
