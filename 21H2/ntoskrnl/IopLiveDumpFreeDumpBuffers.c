/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x14093C2FC
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14093CFC8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14093D590 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14093DA18 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     VslIsSecureKernelRunning @ 0x14025E6F8 (VslIsSecureKernelRunning.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     VslAbortLiveDump @ 0x14054D9C4 (VslAbortLiveDump.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x14093C544 (IopLiveDumpFreeIoSpaceRanges.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  struct _MDL *v5; // rcx
  __int64 v6; // rax
  struct _MDL *v7; // rsi
  struct _MDL *Next; // rbp
  struct _MDL *v9; // rsi
  struct _MDL *v10; // rbp
  void *v11; // rcx
  void *v12; // rcx

  v1 = (_QWORD *)(a1 + 680);
  v3 = 0LL;
  if ( a1 != -680 )
  {
    if ( VslIsSecureKernelRunning() )
      VslAbortLiveDump();
    if ( *(_QWORD *)(a1 + 744) )
    {
      do
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3);
        if ( v4 )
        {
          v5 = *(struct _MDL **)(*(_QWORD *)(a1 + 760) + 8 * v3);
          if ( v5 )
          {
            MmFreePagesFromMdl(v5);
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v3), 0x706D644Cu);
            v6 = *(_QWORD *)(a1 + 760);
          }
          else
          {
            if ( *(_QWORD *)(a1 + 808) && v3 == *(_QWORD *)(a1 + 800) )
            {
              v7 = *(struct _MDL **)(a1 + 816);
              if ( v7 )
              {
                do
                {
                  Next = v7->Next;
                  if ( (v7->MdlFlags & 1) != 0 )
                    MmUnmapLockedPages(v7->MappedSystemVa, v7);
                  ExFreePoolWithTag(v7, 0x706D644Cu);
                  v7 = Next;
                }
                while ( Next );
              }
              IopLiveDumpFreeIoSpaceRanges(a1 + 824, *(unsigned int *)(a1 + 832));
              while ( v3 < *(_QWORD *)(a1 + 800) + *(_QWORD *)(a1 + 808) )
                *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3++) = 0LL;
              continue;
            }
            if ( *(_QWORD *)(a1 + 848) && v3 == *(_QWORD *)(a1 + 840) )
            {
              v9 = *(struct _MDL **)(a1 + 856);
              if ( v9 )
              {
                do
                {
                  v10 = v9->Next;
                  if ( (v9->MdlFlags & 1) != 0 )
                    MmUnmapLockedPages(v9->MappedSystemVa, v9);
                  ExFreePoolWithTag(v9, 0x706D644Cu);
                  v9 = v10;
                }
                while ( v10 );
              }
              IopLiveDumpFreeIoSpaceRanges(a1 + 864, *(unsigned int *)(a1 + 872));
              while ( v3 < *(_QWORD *)(a1 + 840) + *(_QWORD *)(a1 + 848) )
                *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3++) = 0LL;
              continue;
            }
            MmFreeIndependentPages(v4, (unsigned int)BufferChunkSizeInBytes);
            v6 = *(_QWORD *)(a1 + 752);
          }
          *(_QWORD *)(v6 + 8 * v3) = 0LL;
        }
        ++v3;
      }
      while ( v3 < *(_QWORD *)(a1 + 744) );
    }
    v11 = *(void **)(a1 + 752);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x706D644Cu);
      *(_QWORD *)(a1 + 752) = 0LL;
    }
    v12 = *(void **)(a1 + 760);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x706D644Cu);
      *(_QWORD *)(a1 + 760) = 0LL;
    }
    *(_QWORD *)(a1 + 744) = 0LL;
    *(_DWORD *)(a1 + 720) = 0;
    *v1 = 0LL;
    *(_QWORD *)(a1 + 688) = 0LL;
    *(_QWORD *)(a1 + 696) = 0LL;
    *(_QWORD *)(a1 + 704) = 0LL;
  }
}
