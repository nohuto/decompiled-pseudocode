/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0081498
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C007E358 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001280 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x1C00012B8 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C008161C (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0081660 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00E772C (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        void *a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // rsi
  void *v7; // rdi
  unsigned __int64 v9; // r12
  _QWORD **v10; // rcx
  char v12; // bp
  int v13; // r10d
  struct VIDMM_MDL_RANGE *v14; // r13
  _QWORD *i; // r8
  VIDMM_MDL_RANGE *v16; // rax
  enum _LOCK_OPERATION v17; // r8d
  VIDMM_MDL_RANGE *v18; // rbx
  void *v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r14d
  _DWORD *v25; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v26; // rcx
  int v28; // eax
  __int64 v29; // rsi
  struct _EPROCESS *CurrentProcess; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v32; // rcx
  struct VIDMM_MDL_RANGE *v33; // [rsp+90h] [rbp+8h]
  enum _LOCK_OPERATION v35; // [rsp+A0h] [rbp+18h] BYREF

  v35 = a3;
  v6 = (unsigned __int64)a6;
  v7 = a5;
  v9 = a6 - (_BYTE *)a5;
  v10 = (_QWORD **)((char *)this + 8);
  v12 = 0;
  v13 = -1;
  v14 = 0LL;
  v33 = 0LL;
  for ( i = *v10; i != v10 && v13 < 0; i = (_QWORD *)*i )
  {
    if ( *(i - 1) > (unsigned __int64)a5 )
    {
      if ( *(i - 2) < (unsigned __int64)a6 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v33 = (struct VIDMM_MDL_RANGE *)(i - 3);
      }
    }
    else
    {
      v13 = -1;
      v14 = (struct VIDMM_MDL_RANGE *)(i - 3);
    }
  }
  v16 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
  v18 = v16;
  if ( v16 )
  {
    *((_QWORD *)v16 + 2) = v6;
    v19 = 0LL;
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 1) = v7;
    *((_QWORD *)v16 + 5) = this;
    *((_QWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 4) = 0LL;
    v20 = *(_QWORD *)this;
    a6 = 0LL;
    a5 = 0LL;
    LOBYTE(v35) = 0;
    v21 = **(_DWORD **)(v20 + 32);
    if ( (unsigned int)(v21 - 3) <= 3 && (unsigned int)(v21 - 5) > 1 )
    {
      v28 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v20 + 56),
              (unsigned __int64)v7,
              v9,
              v21 == 4,
              (void **)&a6,
              &a5,
              0,
              (unsigned __int8 *)&v35);
      v29 = v28;
      if ( v28 < 0 )
      {
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v18);
        WdLogSingleEntry5(
          3LL,
          v9,
          v7,
          *(_QWORD *)this,
          v29,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL));
        return (unsigned int)v29;
      }
      v7 = a6;
      v19 = a5;
      v12 = v35;
    }
    v24 = VIDMM_MDL_RANGE::Lock(v18, v7, v17, a4, a2);
    v25 = *(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(*v25 - 3) <= 3 )
    {
      v26 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(*v25 - 5);
      if ( (unsigned int)v26 > 1 )
      {
        if ( v12 )
          CurrentProcess = 0LL;
        else
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v26, v25, v22, v23);
        if ( v9 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v26, 0) )
        {
          if ( CurrentProcess )
          {
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            (*((void (__fastcall **)(struct _EPROCESS *, void *))VirtualMemoryInterface + 4))(CurrentProcess, v19);
          }
          else
          {
            MmUnmapViewInSystemSpace(v19);
          }
        }
        else
        {
          VidMmUnmapViewAsync(CurrentProcess, *(void **)(*(_QWORD *)this + 56LL), v19);
        }
      }
    }
    if ( v24 < 0 )
      VIDMM_MDL_RANGE::`scalar deleting destructor'(v18);
    else
      VIDMM_MDL_RANGE::InsertBetween(v18, v14, v33);
    return (unsigned int)v24;
  }
  else
  {
    _InterlockedIncrement(&dword_1C006E804);
    WdLogSingleEntry1(6LL, 6147LL);
    DxgkLogInternalTriageEvent(v32, 262145LL);
    return 3221225495LL;
  }
}
