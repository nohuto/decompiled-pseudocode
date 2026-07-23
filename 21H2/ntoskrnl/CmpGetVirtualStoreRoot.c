/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x140870A6C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpReferenceKeyControlBlock @ 0x1405E09D4 (CmpReferenceKeyControlBlock.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmpGetMappingHiveForString @ 0x140667A38 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x140667EC4 (CmpGetVirtualizationID.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x14086F018 (CmpFindKcbInHashEntryByCellIndex.c)
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
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&UnicodeString, a2);
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
