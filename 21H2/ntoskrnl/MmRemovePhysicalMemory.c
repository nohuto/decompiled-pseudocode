/*
 * XREFs of MmRemovePhysicalMemory @ 0x140969D90
 * Callers:
 *     WheapClearPoison @ 0x140A092FC (WheapClearPoison.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     MiReferenceRemovePartition @ 0x1405838B0 (MiReferenceRemovePartition.c)
 *     MiRemoveBadPages @ 0x14058E448 (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x14058EA88 (MiReturnBadPagesToBadList.c)
 *     MiAddRangeToPartitionTree @ 0x1405BD66C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x1405BDF64 (MiDeletePartitionPageNodes.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x14096E960 (MiSpecialPurposeMemoryRemoved.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rdi
  ULONG_PTR *v3; // rbx
  unsigned __int64 v4; // r14
  int v6; // ecx
  bool v7; // r15
  unsigned __int64 v8; // rdi
  NTSTATUS inserted; // esi
  int ContiguousPages; // eax
  int v11; // ecx
  unsigned __int64 *v13; // [rsp+70h] [rbp-9h] BYREF
  __int128 v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  LONGLONG v17; // [rsp+E0h] [rbp+67h]
  ULONG_PTR *v18; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int64 v19; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+7Fh] BYREF

  QuadPart = StartAddress->QuadPart;
  v3 = 0LL;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v17 = StartAddress->QuadPart;
  v6 = StartAddress->QuadPart;
  v20 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v7 = (v17 & 1) != 0 && (v17 & 0xFFF) != 0;
  if ( v7 )
  {
    LODWORD(v17) = v6 & 0xFFFFFFFE;
    QuadPart = v17;
  }
  v8 = QuadPart >> 12;
  if ( v8 >= v4 + v8 )
  {
    inserted = -1073741585;
    goto LABEL_26;
  }
  inserted = MiReferenceRemovePartition(v8, (__int64 *)&v18);
  if ( inserted < 0 )
  {
    v3 = v18;
    goto LABEL_26;
  }
  if ( v7 )
  {
    v3 = v18;
    if ( v18 != &MiSystemPartition )
    {
      inserted = -1073741637;
      goto LABEL_26;
    }
    ContiguousPages = MiRemoveBadPages((__int64)v18, v8, v4);
  }
  else
  {
    v3 = v18;
    ContiguousPages = MiFindContiguousPagesEx(
                        (__int64)v18,
                        v8,
                        v4 + v8 - 1,
                        0LL,
                        0,
                        v4,
                        1u,
                        0x80000000,
                        0x80000000,
                        202375168,
                        1,
                        0LL,
                        &v20);
  }
  inserted = ContiguousPages;
  if ( ContiguousPages >= 0 )
  {
    if ( v3 == &MiSystemPartition )
    {
      inserted = MiRemovePhysicalMemory(v8, v4, 0x20u);
      if ( inserted < 0 )
      {
LABEL_14:
        if ( v7 )
          MiReturnBadPagesToBadList(v8, v4);
        else
          MiFreeContiguousPages(v8, v4);
        goto LABEL_26;
      }
    }
    else
    {
      if ( !MiAddRangeToPartitionTree(&v19, v8, v4, 2) )
      {
        inserted = -1073741670;
        goto LABEL_26;
      }
      v13 = &v19;
      v11 = 2055;
      if ( _bittest((const signed __int32 *)v3 + 1, 8u) )
        v11 = 3079;
      v15 = v11;
      v14 = 0LL;
      inserted = MiInsertPartitionPages((__int16 *)v3, (__int64)&MiSystemPartition, (__int64)&v13, v4, 0LL);
      if ( inserted < 0 )
        goto LABEL_14;
      if ( _bittest((const signed __int32 *)v3 + 1, 8u) )
        MiSpecialPurposeMemoryRemoved(v3);
    }
    NumberOfBytes->QuadPart = v4 << 12;
  }
LABEL_26:
  MiDeletePartitionPageNodes(&v19);
  if ( v3 )
    PsDereferencePartition(v3[22]);
  return inserted;
}
