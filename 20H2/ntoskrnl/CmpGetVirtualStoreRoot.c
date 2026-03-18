/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x1408730DC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     CmpReferenceKeyControlBlock @ 0x1406A364C (CmpReferenceKeyControlBlock.c)
 *     CmpGetVirtualizationID @ 0x1406FC260 (CmpGetVirtualizationID.c)
 *     CmpGetMappingHiveForString @ 0x1407014E0 (CmpGetMappingHiveForString.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1408716B0 (CmpFindKcbInHashEntryByCellIndex.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, __int64 *a2, int *a3, ULONG_PTR *a4)
{
  int VirtualizationID; // esi
  __int64 v9; // rcx
  int v10; // edi
  ULONG_PTR KcbInHashEntryByCellIndex; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString, a1);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
    {
      v9 = *a2;
      v10 = *(_DWORD *)(*(_QWORD *)(*a2 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v9, 0, v10);
      CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex);
      *a3 = v10;
      *a4 = KcbInHashEntryByCellIndex;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
