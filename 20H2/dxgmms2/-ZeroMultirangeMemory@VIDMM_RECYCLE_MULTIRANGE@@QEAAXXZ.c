/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0063F90
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0063D08 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0063D80 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C000103C (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     FastZeroMemory @ 0x1C0064070 (FastZeroMemory.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006C868 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C36E4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  void *CurrentProcess; // rsi
  char *v5; // r14
  unsigned __int8 v6; // r12
  __int64 v7; // rbp
  unsigned __int64 v9; // rbp
  void *v10; // r15
  int v11; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v13; // rcx
  size_t v14; // rdx
  char *v15; // rcx
  __int64 v16; // r8
  VIDMM_RECYCLE_HEAP_MGR *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  unsigned __int8 v24; // [rsp+80h] [rbp+8h] BYREF
  void *v25; // [rsp+88h] [rbp+10h] BYREF
  void *v26; // [rsp+90h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 10);
  CurrentProcess = 0LL;
  v5 = (char *)*((_QWORD *)this + 4);
  v6 = 0;
  v7 = *((_QWORD *)this + 5);
  v25 = 0LL;
  v9 = v7 - (_QWORD)v5;
  v26 = 0LL;
  v10 = 0LL;
  v24 = 0;
  v11 = **(_DWORD **)(v3 + 32);
  if ( (unsigned int)(v11 - 3) <= 3 && (unsigned int)(v11 - 5) > 1 )
  {
    v19 = VidMmRecycleHeapMapSection(*(PVOID *)(v3 + 56), (unsigned __int64)v5, v9, v11 == 4, &v25, &v26, 0, &v24);
    v22 = v19;
    if ( v19 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20);
      v23[3] = v9;
      v23[4] = *((_QWORD *)this + 4);
      v23[5] = *((_QWORD *)this + 10);
      v23[6] = v22;
      v23[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v23);
      return;
    }
    v5 = (char *)v25;
    v10 = v26;
    v6 = v24;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 20) == 3 && *((_BYTE *)i + 84) )
    {
      v13 = *((_QWORD *)i + 4);
      v14 = *((_QWORD *)i + 5) - v13;
      v15 = &v5[v13 - *((_QWORD *)this + 4)];
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v16 + 208) += v14;
      FastZeroMemory(v15, v14);
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v17 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  v18 = *(unsigned int *)v17;
  if ( (unsigned int)(v18 - 3) <= 3 && (unsigned int)(v18 - 5) > 1 )
  {
    if ( !v6 )
      CurrentProcess = (void *)PsGetCurrentProcess(v17, v18, a3);
    if ( v9 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v17, 0) )
    {
      if ( CurrentProcess )
        MmUnmapViewOfSection(CurrentProcess, v10);
      else
        MmUnmapViewInSystemSpace(v10);
    }
    else
    {
      VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v10);
    }
  }
}
