/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x14086D4D4
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14086D55C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmpGetMappingHiveForString @ 0x140640178 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1406416D8 (CmpGetVirtualizationID.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
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
