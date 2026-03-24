/*
 * XREFs of MmGetSectionRange @ 0x1408C81E8
 * Callers:
 *     PoSetHiberRange @ 0x140388060 (PoSetHiberRange.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r9d
  unsigned int *v16; // rdx
  unsigned int v17; // r8d
  unsigned __int64 v18; // r10

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v10 = MiLookupDataTableEntry(a1, 0LL, v8, v9);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = a1 - v12;
    v14 = RtlImageNtHeader(v12);
    v15 = 0;
    if ( *(_WORD *)(v14 + 6) )
    {
      v16 = (unsigned int *)(v14 + *(unsigned __int16 *)(v14 + 20) + 32LL);
      while ( 1 )
      {
        v17 = v16[2];
        v18 = v16[1];
        if ( v17 < *v16 )
          v17 = *v16;
        if ( v13 >= v18 && v13 < v17 + (unsigned int)v18 )
          break;
        v16 += 10;
        if ( ++v15 >= (unsigned int)*(unsigned __int16 *)(v14 + 6) )
          goto LABEL_11;
      }
      *a3 = v17;
      *a2 = *(_QWORD *)(v11 + 48) + v18;
      v7 = 0;
    }
  }
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}
