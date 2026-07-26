/*
 * XREFs of NdisCopyFromPacketToPacketSafe @ 0x1C00C1650
 * Callers:
 *     ?ndisMTransferData@@YAHPEAX0IIPEAU_NDIS_PACKET@@PEAI@Z @ 0x1C00C05C0 (-ndisMTransferData@@YAHPEAX0IIPEAU_NDIS_PACKET@@PEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacketSafe(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied,
        MM_PAGE_PRIORITY Priority)
{
  UINT v9; // ebx
  _MDL *Head; // rdi
  ULONG v11; // edx
  char *MappedSystemVa; // r12
  char *v13; // rax
  _MDL *v14; // rsi
  UINT ByteCount; // r14d
  char *v16; // r15
  UINT v17; // ebp
  UINT v19; // eax
  UINT v20; // ecx
  UINT v21; // eax
  UINT v22; // ecx
  __int64 v23; // rbx
  unsigned int v24; // [rsp+30h] [rbp-48h]
  UINT v25; // [rsp+88h] [rbp+10h]
  MM_PAGE_PRIORITY Prioritya; // [rsp+B0h] [rbp+38h]

  v25 = DestinationOffset;
  v24 = 0;
  v9 = DestinationOffset;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v11 = Priority | 0x40000000;
      Prioritya = Priority | 0x40000000;
      if ( (Head->MdlFlags & 5) != 0 )
      {
        MappedSystemVa = (char *)Head->MappedSystemVa;
      }
      else
      {
        v13 = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, v11);
        v11 = Prioritya;
        MappedSystemVa = v13;
      }
      if ( MappedSystemVa )
      {
        v14 = Source->Private.Head;
        ByteCount = Head->ByteCount;
        if ( v14 )
        {
          v16 = (char *)((v14->MdlFlags & 5) != 0
                       ? v14->MappedSystemVa
                       : MmMapLockedPagesSpecifyCache(v14, 0, MmCached, 0LL, 0, v11));
          if ( v16 )
          {
            v17 = v14->ByteCount;
            if ( BytesToCopy )
            {
              v19 = BytesToCopy;
              v20 = 0;
              while ( ByteCount )
              {
                if ( !v17 )
                {
                  v14 = v14->Next;
                  if ( !v14 )
                    goto LABEL_44;
                  v16 = (char *)((v14->MdlFlags & 5) != 0
                               ? v14->MappedSystemVa
                               : MmMapLockedPagesSpecifyCache(v14, 0, MmCached, 0LL, 0, Prioritya));
                  if ( !v16 )
                    goto LABEL_44;
                  v17 = v14->ByteCount;
                  goto LABEL_41;
                }
                if ( !v9 )
                  goto LABEL_32;
                if ( v9 <= ByteCount )
                {
                  ByteCount -= v9;
                  MappedSystemVa += v9;
                  v25 = 0;
LABEL_32:
                  if ( SourceOffset )
                  {
                    if ( SourceOffset > v17 )
                    {
                      SourceOffset -= v17;
                      v17 = 0;
LABEL_42:
                      v19 = BytesToCopy;
                      goto LABEL_43;
                    }
                    v17 -= SourceOffset;
                    v16 += SourceOffset;
                    SourceOffset = 0;
                  }
                  v21 = v17;
                  v22 = BytesToCopy - v24;
                  if ( v17 > ByteCount )
                    v21 = ByteCount;
                  if ( v22 >= v21 )
                    v22 = v21;
                  v23 = v22;
                  memmove(MappedSystemVa, v16, v22);
                  v24 += v23;
                  MappedSystemVa += v23;
                  v16 += v23;
                  v17 -= v23;
                  ByteCount -= v23;
LABEL_41:
                  v20 = v24;
                  goto LABEL_42;
                }
                v25 = v9 - ByteCount;
                ByteCount = 0;
LABEL_43:
                v9 = v25;
                if ( v20 >= v19 )
                  goto LABEL_44;
              }
              Head = Head->Next;
              if ( !Head )
                goto LABEL_44;
              MappedSystemVa = (char *)((Head->MdlFlags & 5) != 0
                                      ? Head->MappedSystemVa
                                      : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, Prioritya));
              if ( !MappedSystemVa )
                goto LABEL_44;
              ByteCount = Head->ByteCount;
              goto LABEL_41;
            }
LABEL_44:
            *BytesCopied = v24;
          }
        }
      }
    }
  }
}
