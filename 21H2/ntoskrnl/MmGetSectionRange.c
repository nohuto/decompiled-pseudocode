/*
 * XREFs of MmGetSectionRange @ 0x1408C8348
 * Callers:
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140298ABC (MiLookupDataTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbp
  void *v10; // rcx
  unsigned __int64 v11; // rdi
  PIMAGE_NT_HEADERS v12; // rax
  int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = MiLookupDataTableEntry(a1, 0);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(void **)(v8 + 48);
    v11 = a1 - (_QWORD)v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    if ( v12->FileHeader.NumberOfSections )
    {
      v14 = (unsigned int *)((char *)&v12->OptionalHeader.SizeOfInitializedData + v12->FileHeader.SizeOfOptionalHeader);
      while ( 1 )
      {
        v15 = v14[2];
        v16 = v14[1];
        if ( v15 < *v14 )
          v15 = *v14;
        if ( v11 >= v16 && v11 < v15 + (unsigned int)v16 )
          break;
        v14 += 10;
        if ( ++v13 >= (unsigned int)v12->FileHeader.NumberOfSections )
          goto LABEL_11;
      }
      *a3 = v15;
      *a2 = *(_QWORD *)(v9 + 48) + v16;
      v7 = 0;
    }
  }
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
  return v7;
}
