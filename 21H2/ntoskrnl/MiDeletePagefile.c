/*
 * XREFs of MiDeletePagefile @ 0x1408D05EC
 * Callers:
 *     MmStoreRegister @ 0x1407B6890 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 *     MiDeletePagingFiles @ 0x1408D06FC (MiDeletePagingFiles.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiFreePageFileHashPfns @ 0x140261204 (MiFreePageFileHashPfns.c)
 *     MiFreeModWriterEntry @ 0x140276D58 (MiFreeModWriterEntry.c)
 *     MiUpdatePageFileList @ 0x1403BFED8 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x14055D904 (MiReleasePageHash.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePagefile(__int64 P, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  int i; // esi
  void *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx
  unsigned __int64 v9; // rcx
  __int16 v10; // ax
  void *v11; // rcx
  struct _DMA_ADAPTER *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx

  v4 = 0LL;
  for ( i = a2; (unsigned int)v4 < *(_DWORD *)(P + 72); v4 = (unsigned int)(v4 + 1) )
    MiFreeModWriterEntry(*(_QWORD **)(*(_QWORD *)(P + 64) + 8 * v4), 0);
  v7 = *(void **)(P + 64);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(struct _PRIVILEGE_SET **)(P + 112);
  if ( v8 )
    CmSiFreeMemory(v8);
  v9 = *(_QWORD *)(P + 216);
  if ( v9 )
    MiReleasePageHash(v9, *(_DWORD *)(P + 8));
  MiFreePageFileHashPfns(*(_QWORD *)(P + 248), a2, a3, a4);
  v10 = *(_WORD *)(P + 204);
  if ( (v10 & 0x100) != 0 )
  {
    MiUpdatePageFileList(P, 0);
    v10 = *(_WORD *)(P + 204);
  }
  if ( (v10 & 0x200) != 0 )
    PiPagePathSetState(*(struct _FILE_OBJECT **)(P + 56), 0);
  v11 = *(void **)(P + 224);
  if ( v11 )
    ObCloseHandle(v11, 0);
  v12 = *(struct _DMA_ADAPTER **)(P + 56);
  if ( v12 )
    HalPutDmaAdapter(v12);
  v13 = *(void **)(P + 104);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(void **)(P + 192);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( i )
    ExFreePoolWithTag((PVOID)P, 0);
}
