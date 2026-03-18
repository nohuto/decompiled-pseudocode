/*
 * XREFs of MiDeletePagefile @ 0x1408CBB3C
 * Callers:
 *     MmStoreRegister @ 0x14079E3F0 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 *     MiDeletePagingFiles @ 0x1408CBC4C (MiDeletePagingFiles.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x1402402EC (MiFreePageFileHashPfns.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     MiFreeModWriterEntry @ 0x140354048 (MiFreeModWriterEntry.c)
 *     MiUpdatePageFileList @ 0x1403BBAB8 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x140557BD4 (MiReleasePageHash.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePagefile(__int64 P, int a2)
{
  __int64 i; // rdi
  void *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  __int16 v8; // ax
  void *v9; // rcx
  struct _DMA_ADAPTER *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(P + 72); i = (unsigned int)(i + 1) )
    MiFreeModWriterEntry(*(_QWORD **)(*(_QWORD *)(P + 64) + 8 * i), 0);
  v5 = *(void **)(P + 64);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(struct _PRIVILEGE_SET **)(P + 112);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *(_QWORD *)(P + 216);
  if ( v7 )
    MiReleasePageHash(v7, *(_DWORD *)(P + 8));
  MiFreePageFileHashPfns(*(_QWORD *)(P + 248));
  v8 = *(_WORD *)(P + 204);
  if ( (v8 & 0x100) != 0 )
  {
    MiUpdatePageFileList(P, 0);
    v8 = *(_WORD *)(P + 204);
  }
  if ( (v8 & 0x200) != 0 )
    PiPagePathSetState(*(struct _FILE_OBJECT **)(P + 56), 0);
  v9 = *(void **)(P + 224);
  if ( v9 )
    ObCloseHandle(v9, 0);
  v10 = *(struct _DMA_ADAPTER **)(P + 56);
  if ( v10 )
    HalPutDmaAdapter(v10);
  v11 = *(void **)(P + 104);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = *(void **)(P + 192);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( a2 )
    ExFreePoolWithTag((PVOID)P, 0);
}
