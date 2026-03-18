/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007B100
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007AE78 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C007AEF0 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012C04 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0060E30 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007A880 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     FastZeroMemory @ 0x1C007B1E0 (FastZeroMemory.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C3CB4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rdx
  void *CurrentProcess; // rsi
  char *v3; // r14
  unsigned __int8 v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v7; // rbp
  void *v8; // r15
  int v9; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v11; // rcx
  size_t v12; // rdx
  char *v13; // rcx
  __int64 v14; // r8
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rax
  unsigned __int8 v21; // [rsp+80h] [rbp+8h] BYREF
  void *v22; // [rsp+88h] [rbp+10h] BYREF
  void *v23; // [rsp+90h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 10);
  CurrentProcess = 0LL;
  v3 = (char *)*((_QWORD *)this + 4);
  v4 = 0;
  v5 = *((_QWORD *)this + 5);
  v22 = 0LL;
  v7 = v5 - (_QWORD)v3;
  v23 = 0LL;
  v8 = 0LL;
  v21 = 0;
  v9 = **(_DWORD **)(v1 + 32);
  if ( (unsigned int)(v9 - 3) <= 3 && (unsigned int)(v9 - 5) > 1 )
  {
    v16 = VidMmRecycleHeapMapSection(*(PVOID *)(v1 + 56), (unsigned __int64)v3, v7, v9 == 4, &v22, &v23, 0, &v21);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17);
      v20[3] = v7;
      v20[4] = *((_QWORD *)this + 4);
      v20[5] = *((_QWORD *)this + 10);
      v20[6] = v19;
      v20[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v20);
      return;
    }
    v3 = (char *)v22;
    v8 = v23;
    v4 = v21;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 20) == 3 && *((_BYTE *)i + 84) )
    {
      v11 = *((_QWORD *)i + 4);
      v12 = *((_QWORD *)i + 5) - v11;
      v13 = &v3[v11 - *((_QWORD *)this + 4)];
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v14 + 208) += v12;
      FastZeroMemory(v13, v12);
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v15 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  if ( (unsigned int)(*(_DWORD *)v15 - 3) <= 3 && (unsigned int)(*(_DWORD *)v15 - 5) > 1 )
  {
    if ( !v4 )
      CurrentProcess = (void *)PsGetCurrentProcess(v15);
    if ( v7 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v15, 0) )
    {
      if ( CurrentProcess )
        MmUnmapViewOfSection(CurrentProcess, v8);
      else
        MmUnmapViewInSystemSpace(v8);
    }
    else
    {
      VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v8);
    }
  }
}
