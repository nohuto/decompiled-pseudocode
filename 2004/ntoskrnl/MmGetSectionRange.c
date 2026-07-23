/*
 * XREFs of MmGetSectionRange @ 0x1408C4BE8
 * Callers:
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}
