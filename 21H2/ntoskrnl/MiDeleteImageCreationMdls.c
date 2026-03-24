/*
 * XREFs of MiDeleteImageCreationMdls @ 0x1406D4ED4
 * Callers:
 *     MiCreateNewSection @ 0x1406D2BC0 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiCreateMdl @ 0x1406D3A74 (MiCreateMdl.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x1402CF02C (MiReturnPfnReferenceCount.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  int v3; // r15d
  PMDL v4; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // r14
  struct _MDL *v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 i; // rdi

  if ( MemoryDescriptorList )
  {
    v3 = a2;
    v4 = MemoryDescriptorList;
    do
    {
      MdlFlags = v4->MdlFlags;
      Next = v4->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v4->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v4->MappedSystemVa, v4);
        if ( v3 )
        {
          v7 = v4 + 1;
          v8 = (unsigned __int64)v4->ByteCount >> 12;
          for ( i = 0LL; i < v8; ++i )
          {
            if ( v7->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v7->Next - 0x58000000000LL, a2, a3);
            v7 = (struct _MDL *)((char *)v7 + 8);
          }
        }
      }
      IoFreeMdl(v4);
      v4 = Next;
    }
    while ( Next );
  }
}
