/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00A32BC
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00811B4 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0093B80 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001280 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     FastZeroMemory @ 0x1C00A33A0 (FastZeroMemory.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00E772C (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v4; // rsi
  __int64 v5; // rdx
  unsigned __int8 v6; // r14
  char *v7; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  int v11; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v13; // rcx
  size_t v14; // rdx
  char *v15; // rcx
  __int64 v16; // r8
  VIDMM_RECYCLE_HEAP_MGR *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  struct _EPROCESS *CurrentProcess; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  unsigned __int8 v22; // [rsp+70h] [rbp+8h] BYREF
  void *v23; // [rsp+78h] [rbp+10h] BYREF
  void *v24; // [rsp+80h] [rbp+18h] BYREF

  v23 = 0LL;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 10);
  v6 = 0;
  v7 = (char *)*((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5);
  v24 = 0LL;
  v10 = v9 - (_QWORD)v7;
  v22 = 0;
  v11 = **(_DWORD **)(v5 + 32);
  if ( (unsigned int)(v11 - 3) <= 3 && (unsigned int)(v11 - 5) > 1 )
  {
    v19 = VidMmRecycleHeapMapSection(*(PVOID *)(v5 + 56), (unsigned __int64)v7, v10, v11 == 4, &v23, &v24, 0, &v22);
    if ( v19 < 0 )
    {
      WdLogSingleEntry5(
        3LL,
        v10,
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 10),
        v19,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
      return;
    }
    v7 = (char *)v23;
    v4 = v24;
    v6 = v22;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 20) == 3 && *((_BYTE *)i + 84) )
    {
      v13 = *((_QWORD *)i + 4);
      v14 = *((_QWORD *)i + 5) - v13;
      v15 = &v7[v13 - *((_QWORD *)this + 4)];
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
    if ( v6 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v17, v18, a3, a4);
    if ( v10 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v17, 0) )
    {
      if ( CurrentProcess )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(CurrentProcess, v4);
      }
      else
      {
        MmUnmapViewInSystemSpace(v4);
      }
    }
    else
    {
      VidMmUnmapViewAsync(CurrentProcess, *(void **)(*((_QWORD *)this + 10) + 56LL), v4);
    }
  }
}
