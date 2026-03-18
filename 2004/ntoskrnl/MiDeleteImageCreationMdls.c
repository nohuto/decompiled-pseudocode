/*
 * XREFs of MiDeleteImageCreationMdls @ 0x14060EF1C
 * Callers:
 *     MiCreateMdl @ 0x14060C320 (MiCreateMdl.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MiReturnPfnReferenceCount @ 0x14035CB94 (MiReturnPfnReferenceCount.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL MemoryDescriptorList, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r15d
  PMDL v5; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // r14
  struct _MDL *v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 i; // rdi

  if ( MemoryDescriptorList )
  {
    v4 = a2;
    v5 = MemoryDescriptorList;
    do
    {
      MdlFlags = v5->MdlFlags;
      Next = v5->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v5->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v5->MappedSystemVa, v5);
        if ( v4 )
        {
          v8 = v5 + 1;
          v9 = (unsigned __int64)v5->ByteCount >> 12;
          for ( i = 0LL; i < v9; ++i )
          {
            if ( v8->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v8->Next - 0x58000000000LL, a2, a3, a4);
            v8 = (struct _MDL *)((char *)v8 + 8);
          }
        }
      }
      IoFreeMdl(v5);
      v5 = Next;
    }
    while ( Next );
  }
}
