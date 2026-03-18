/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C007D8AC
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C007D728 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001280 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x1C00012B8 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C007C35C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C007CFD4 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C007D378 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C007DCE8 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C008161C (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0081660 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00E772C (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **this,
        struct _MDL *a2,
        struct _MDL *a3)
{
  struct VIDMM_MDL_RANGE *v3; // r10
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r8
  unsigned int v7; // esi
  int v8; // eax
  struct VIDMM_MDL_RANGE *v9; // rdi
  bool v10; // zf
  struct _MDL **NextRange; // rbx
  struct VIDMM_MDL_RANGE *v12; // r14
  struct _MDL *v13; // r12
  char v14; // r14
  struct VIDMM_MDL_RANGE *v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v20; // rdx
  int *v21; // rax
  int v22; // ecx
  struct VIDMM_MDL_RANGE *v23; // rsi
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v27; // r13
  VIDMM_RECYCLE_HEAP_MGR *v28; // rcx
  __int64 v29; // rdx
  char v30; // r14
  VIDMM_MDL_RANGE *v31; // rdi
  VIDMM_MDL_RANGE *v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  VIDMM_MDL_RANGE *v36; // r14
  __int64 v37; // rax
  enum _LOCK_OPERATION v38; // r8d
  VIDMM_MDL_RANGE *v39; // r12
  struct _MDL *v40; // rax
  enum _LOCK_OPERATION v41; // r8d
  __int64 v42; // rcx
  struct VIDMM_MDL_RANGE *v43; // r15
  char v44; // r8
  struct VIDMM_MDL_RANGE *v45; // r10
  _QWORD *v46; // rax
  __int64 v47; // r9
  _QWORD *v48; // r8
  VIDMM_MDL_RANGE *v49; // r8
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  VIDMM_MDL_RANGE *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  struct _EPROCESS *CurrentProcess; // rbx
  unsigned __int64 SmallAllocationSize; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID MappedBase; // [rsp+50h] [rbp-20h] BYREF
  struct VIDMM_MDL_RANGE *v66; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v67; // [rsp+60h] [rbp-10h]
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v68; // [rsp+B0h] [rbp+40h]
  char v69; // [rsp+B0h] [rbp+40h]
  unsigned __int8 v70; // [rsp+C8h] [rbp+58h] BYREF

  v68 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)this;
  v3 = 0LL;
  v6 = this[1];
  v7 = 0;
  v8 = -1;
  v9 = 0LL;
  if ( v6 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
  {
    while ( 1 )
    {
      v10 = v8 == 0;
      if ( v8 >= 0 )
        break;
      v9 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v6 - 24);
      if ( *((_QWORD *)v6 - 1) > (unsigned __int64)a2 )
        v8 = *((_QWORD *)v6 - 2) >= (unsigned __int64)a3;
      else
        v8 = -1;
      v6 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v6;
      if ( v6 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
      {
        v10 = v8 == 0;
        break;
      }
    }
    if ( v10 )
    {
      NextRange = (struct _MDL **)v9;
      v12 = (struct VIDMM_MDL_RANGE *)*((_QWORD *)v9 + 1);
      if ( *((_QWORD *)v9 + 2) < (unsigned __int64)a3 )
      {
        do
          NextRange = (struct _MDL **)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
        while ( NextRange[2] < a3 );
        this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v68;
      }
      v13 = NextRange[2];
      if ( v13 <= a3 && v12 >= (struct VIDMM_MDL_RANGE *)a2 )
      {
        v14 = (char)v3;
        while ( 1 )
        {
          VIDMM_MDL_RANGE::Unlock(v9);
          v15 = v9;
          if ( v9 == (struct VIDMM_MDL_RANGE *)NextRange )
            v14 = 1;
          else
            v9 = VIDMM_MDL_RANGE::GetNextRange(v9);
          v16 = (_QWORD *)((char *)v15 + 24);
          v17 = *((_QWORD *)v15 + 3);
          if ( *(struct VIDMM_MDL_RANGE **)(v17 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v15 + 24) )
            break;
          v18 = (_QWORD *)*((_QWORD *)v15 + 4);
          if ( (_QWORD *)*v18 != v16 )
            break;
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *v16 = 0LL;
          *((_QWORD *)v15 + 4) = 0LL;
          operator delete(v15);
          if ( v14 )
            return v7;
        }
        goto LABEL_59;
      }
      v20 = *this;
      v66 = v3;
      MappedBase = v3;
      v70 = (unsigned __int8)v3;
      v21 = (int *)*((_QWORD *)v20 + 4);
      v67 = (char *)v13 - (char *)v12;
      v22 = *v21;
      if ( (unsigned int)(*v21 - 3) > 3 || (unsigned int)(v22 - 5) <= 1 )
      {
        v23 = v12;
        v66 = v12;
      }
      else
      {
        v54 = VidMmRecycleHeapMapSection(
                *((PVOID *)v20 + 7),
                (unsigned __int64)v12,
                (char *)v13 - (char *)v12,
                v22 == 4,
                (void **)&v66,
                &MappedBase,
                (unsigned __int8)v3,
                &v70);
        v7 = v54;
        if ( v54 < 0 )
        {
          _InterlockedIncrement(&dword_1C006E834);
          WdLogSingleEntry4(6LL, v67, *((_QWORD *)v9 + 1), *(_QWORD *)v68, v54);
          DxgkLogInternalTriageEvent(v55, 262145LL);
          return v7;
        }
        v23 = v66;
      }
      if ( v12 < (struct VIDMM_MDL_RANGE *)a2 )
      {
        if ( v13 <= a3 )
        {
          v24 = VIDMM_MDL_RANGE::LockUnlock((PMDL *)v9, v23, *((struct _MDL **)v9 + 1), a2);
          v7 = v24;
          if ( v24 >= 0 )
          {
            if ( v9 != (struct VIDMM_MDL_RANGE *)NextRange )
            {
              v30 = 0;
              v31 = VIDMM_MDL_RANGE::GetNextRange(v9);
              while ( 1 )
              {
                VIDMM_MDL_RANGE::Unlock(v31);
                v32 = v31;
                if ( v31 == (VIDMM_MDL_RANGE *)NextRange )
                  v30 = 1;
                else
                  v31 = VIDMM_MDL_RANGE::GetNextRange(v31);
                v33 = (_QWORD *)((char *)v32 + 24);
                v34 = *((_QWORD *)v32 + 3);
                if ( *(VIDMM_MDL_RANGE **)(v34 + 8) != (VIDMM_MDL_RANGE *)((char *)v32 + 24) )
                  break;
                v35 = (_QWORD *)*((_QWORD *)v32 + 4);
                if ( (_QWORD *)*v35 != v33 )
                  break;
                *v35 = v34;
                *(_QWORD *)(v34 + 8) = v35;
                *v33 = 0LL;
                *((_QWORD *)v32 + 4) = 0LL;
                VIDMM_MDL_RANGE::`scalar deleting destructor'(v32);
                if ( v30 )
                  goto LABEL_25;
              }
LABEL_59:
              __fastfail(3u);
            }
            goto LABEL_25;
          }
LABEL_64:
          _InterlockedIncrement(&dword_1C006E804);
          WdLogSingleEntry1(6LL, v24);
          DxgkLogInternalTriageEvent(v56, 262145LL);
          goto LABEL_25;
        }
      }
      else if ( v13 > a3 )
      {
        v24 = VIDMM_MDL_RANGE::LockUnlock(NextRange, (char *)v23 + (_QWORD)a3 - *((_QWORD *)v9 + 1), a3, NextRange[2]);
        v7 = v24;
        if ( v24 >= 0 )
        {
          while ( v9 != (struct VIDMM_MDL_RANGE *)NextRange )
          {
            VIDMM_MDL_RANGE::Unlock(v9);
            v9 = VIDMM_MDL_RANGE::GetNextRange(v9);
            v51 = (_QWORD *)(v50 + 24);
            v52 = *(_QWORD *)(v50 + 24);
            if ( *(_QWORD **)(v52 + 8) != v51 )
              goto LABEL_59;
            v53 = (_QWORD *)v51[1];
            if ( (_QWORD *)*v53 != v51 )
              goto LABEL_59;
            *v53 = v52;
            *(_QWORD *)(v52 + 8) = v53;
            *v51 = 0LL;
            *((_QWORD *)v49 + 4) = 0LL;
            VIDMM_MDL_RANGE::`scalar deleting destructor'(v49);
          }
          goto LABEL_25;
        }
        goto LABEL_64;
      }
      v36 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
      if ( v36 )
      {
        v37 = *((_QWORD *)v9 + 1);
        *((_QWORD *)v36 + 2) = a2;
        v27 = v68;
        *(_QWORD *)v36 = 0LL;
        *((_QWORD *)v36 + 3) = 0LL;
        *((_QWORD *)v36 + 4) = 0LL;
        *((_QWORD *)v36 + 5) = v68;
        *((_QWORD *)v36 + 1) = v37;
        v39 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
        if ( v39 )
        {
          v40 = NextRange[2];
          *(_QWORD *)v39 = 0LL;
          *((_QWORD *)v39 + 3) = 0LL;
          *((_QWORD *)v39 + 4) = 0LL;
          *((_QWORD *)v39 + 1) = a3;
          *((_QWORD *)v39 + 2) = v40;
          *((_QWORD *)v39 + 5) = v68;
          if ( VIDMM_MDL_RANGE::Lock(v36, v23, v38, 0LL, 0LL) < 0 )
          {
            _InterlockedIncrement(&dword_1C006E804);
            WdLogSingleEntry1(6LL, 6523LL);
            DxgkLogInternalTriageEvent(v57, 262145LL);
          }
          else
          {
            v7 = VIDMM_MDL_RANGE::Lock(v39, (char *)v23 + (_QWORD)a3 - *((_QWORD *)v9 + 1), v41, 0LL, 0LL);
            if ( (v7 & 0x80000000) == 0 )
            {
              v42 = *((_QWORD *)v9 + 4);
              v43 = (struct VIDMM_MDL_RANGE *)(v42 - 24);
              if ( v42 == *((_QWORD *)v9 + 5) + 8LL )
                v43 = 0LL;
              v66 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
              v69 = v44;
              do
              {
                VIDMM_MDL_RANGE::Unlock(v9);
                v45 = v9;
                if ( v9 == (struct VIDMM_MDL_RANGE *)NextRange )
                  v69 = 1;
                else
                  v9 = VIDMM_MDL_RANGE::GetNextRange(v9);
                v46 = (_QWORD *)((char *)v45 + 24);
                v47 = *((_QWORD *)v45 + 3);
                if ( *(struct VIDMM_MDL_RANGE **)(v47 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v45 + 24) )
                  goto LABEL_59;
                v48 = (_QWORD *)*((_QWORD *)v45 + 4);
                if ( (_QWORD *)*v48 != v46 )
                  goto LABEL_59;
                *v48 = v47;
                *(_QWORD *)(v47 + 8) = v48;
                *v46 = 0LL;
                *((_QWORD *)v45 + 4) = 0LL;
                VIDMM_MDL_RANGE::`scalar deleting destructor'(v45);
              }
              while ( !v69 );
              VIDMM_MDL_RANGE::InsertBetween(v36, v43, v39);
              VIDMM_MDL_RANGE::InsertBetween(v39, v36, v66);
              goto LABEL_26;
            }
            _InterlockedIncrement(&dword_1C006E804);
            WdLogSingleEntry1(6LL, 6543LL);
            DxgkLogInternalTriageEvent(v58, 262145LL);
            VIDMM_MDL_RANGE::Unlock(v36);
          }
          VIDMM_MDL_RANGE::`scalar deleting destructor'(v36);
          v59 = v39;
        }
        else
        {
          _InterlockedIncrement(&dword_1C006E804);
          WdLogSingleEntry1(6LL, 6505LL);
          DxgkLogInternalTriageEvent(v60, 262145LL);
          v59 = v36;
        }
        VIDMM_MDL_RANGE::`scalar deleting destructor'(v59);
        v7 = -1073741801;
LABEL_26:
        v28 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)v27 + 32LL);
        v29 = *(unsigned int *)v28;
        if ( (unsigned int)(v29 - 3) <= 3 && (unsigned int)(v29 - 5) > 1 )
        {
          if ( v70 )
            CurrentProcess = 0LL;
          else
            CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v28, v29, v25, v26);
          SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v28, 0);
          if ( v67 <= SmallAllocationSize )
          {
            if ( CurrentProcess )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(struct _EPROCESS *, PVOID))VirtualMemoryInterface + 4))(
                CurrentProcess,
                MappedBase);
            }
            else
            {
              MmUnmapViewInSystemSpace(MappedBase);
            }
          }
          else
          {
            VidMmUnmapViewAsync(CurrentProcess, *(void **)(*(_QWORD *)v27 + 56LL), MappedBase);
          }
        }
        return v7;
      }
      _InterlockedIncrement(&dword_1C006E804);
      WdLogSingleEntry1(6LL, 6494LL);
      DxgkLogInternalTriageEvent(v61, 262145LL);
      v7 = -1073741801;
LABEL_25:
      v27 = v68;
      goto LABEL_26;
    }
  }
  WdLogSingleEntry5(0LL, 270LL, 52LL, 9LL, 0LL, 0LL);
  return 3221225473LL;
}
