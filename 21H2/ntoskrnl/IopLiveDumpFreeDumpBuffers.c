/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x140898180
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408973B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14089884C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898CE0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     VslIsSecureKernelRunning @ 0x14025217C (VslIsSecureKernelRunning.c)
 *     VslAbortLiveDump @ 0x1404FBD10 (VslAbortLiveDump.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  __int64 v2; // rdi
  struct _MDL *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  if ( a1 )
  {
    if ( VslIsSecureKernelRunning() )
      VslAbortLiveDump();
    v2 = 0LL;
    if ( *(_QWORD *)(a1 + 64) )
    {
      while ( 1 )
      {
        v3 = *(struct _MDL **)(*(_QWORD *)(a1 + 80) + 8 * v2);
        if ( v3 )
          break;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v2);
        if ( v5 )
        {
          MmFreeIndependentPages(v5, (unsigned int)BufferChunkSizeInBytes);
          v4 = *(_QWORD *)(a1 + 72);
          goto LABEL_9;
        }
LABEL_10:
        if ( (unsigned __int64)++v2 >= *(_QWORD *)(a1 + 64) )
          goto LABEL_11;
      }
      MmFreePagesFromMdl(v3);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 80) + 8 * v2), 0);
      v4 = *(_QWORD *)(a1 + 80);
LABEL_9:
      *(_QWORD *)(v4 + 8 * v2) = 0LL;
      goto LABEL_10;
    }
LABEL_11:
    v6 = *(void **)(a1 + 72);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x706D644Cu);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    v7 = *(void **)(a1 + 80);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x706D644Cu);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
