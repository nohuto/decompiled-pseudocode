/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0061488
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C00612EC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C000103C (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0060A78 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0060D18 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C00618B8 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0061A70 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0061AB4 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006C868 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C36E4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _MDL *a2,
        struct _MDL *a3)
{
  void *v3; // r11
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v7; // r8
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // r9
  void *v9; // rdi
  int v10; // eax
  struct VIDMM_MDL_RANGE *v11; // rbx
  bool v12; // zf
  struct _MDL **NextRange; // r13
  struct _MDL *v14; // rsi
  struct VIDMM_MDL_RANGE *v15; // rcx
  char v16; // si
  struct VIDMM_MDL_RANGE *v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v22; // r8
  int *v23; // rax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int *v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  _QWORD *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  VIDMM_MDL_RANGE *v35; // rax
  VIDMM_MDL_RANGE *v36; // rsi
  VIDMM_MDL_RANGE *v37; // rax
  enum _LOCK_OPERATION v38; // r8d
  VIDMM_MDL_RANGE *v39; // r14
  enum _LOCK_OPERATION v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct VIDMM_MDL_RANGE *v43; // r12
  char v44; // r8
  struct VIDMM_MDL_RANGE *v45; // r10
  _QWORD *v46; // rax
  __int64 v47; // r9
  _QWORD *v48; // r8
  char v49; // si
  VIDMM_MDL_RANGE *v50; // rbx
  VIDMM_MDL_RANGE *v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rdx
  int v55; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  VIDMM_MDL_RANGE *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  void *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  unsigned __int8 v69[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v71; // [rsp+50h] [rbp-10h]
  struct VIDMM_MDL_RANGE *v72; // [rsp+58h] [rbp-8h]
  void *v74; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0LL;
  v5 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v7 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v8 = this;
  LODWORD(v9) = 0;
  v10 = -1;
  v11 = 0LL;
  if ( v7 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
  {
    while ( 1 )
    {
      v12 = v10 == 0;
      if ( v10 >= 0 )
        break;
      v11 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v7 - 24);
      if ( *((_QWORD *)v7 - 1) > (unsigned __int64)a2 )
        v10 = *((_QWORD *)v7 - 2) >= (unsigned __int64)a3;
      else
        v10 = -1;
      v7 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v7;
      if ( v7 == v5 )
      {
        v12 = v10 == 0;
        break;
      }
    }
    if ( v12 )
    {
      NextRange = (struct _MDL **)v11;
      v14 = (struct _MDL *)*((_QWORD *)v11 + 1);
      if ( *((_QWORD *)v11 + 2) < (unsigned __int64)a3 )
      {
        do
          NextRange = (struct _MDL **)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
        while ( NextRange[2] < a3 );
      }
      v15 = (struct VIDMM_MDL_RANGE *)NextRange[2];
      v72 = v15;
      if ( v14 >= a2 && v15 <= (struct VIDMM_MDL_RANGE *)a3 )
      {
        v16 = (char)v3;
        while ( 1 )
        {
          VIDMM_MDL_RANGE::Unlock(v11);
          v17 = v11;
          if ( v11 == (struct VIDMM_MDL_RANGE *)NextRange )
            v16 = 1;
          else
            v11 = VIDMM_MDL_RANGE::GetNextRange(v11);
          v18 = (_QWORD *)((char *)v17 + 24);
          v19 = *((_QWORD *)v17 + 3);
          if ( *(struct VIDMM_MDL_RANGE **)(v19 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v17 + 24) )
            break;
          v20 = (_QWORD *)*((_QWORD *)v17 + 4);
          if ( (_QWORD *)*v20 != v18 )
            break;
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          *v18 = 0LL;
          *((_QWORD *)v17 + 4) = 0LL;
          operator delete(v17);
          if ( v16 )
            return (unsigned int)v9;
        }
        goto LABEL_62;
      }
      v22 = *(_QWORD *)v8;
      v74 = v3;
      MappedBase = v3;
      v69[0] = (unsigned __int8)v3;
      v23 = *(int **)(v22 + 32);
      v71 = v15 - (struct VIDMM_MDL_RANGE *)v14;
      v24 = *v23;
      if ( (unsigned int)(*v23 - 3) > 3 || (unsigned int)(v24 - 5) <= 1 )
      {
        v9 = v14;
        v74 = v14;
      }
      else
      {
        v55 = VidMmRecycleHeapMapSection(
                *(PVOID *)(v22 + 56),
                (unsigned __int64)v14,
                v15 - (struct VIDMM_MDL_RANGE *)v14,
                v24 == 4,
                &v74,
                &MappedBase,
                (unsigned __int8)v3,
                v69);
        v9 = (void *)v55;
        if ( v55 < 0 )
        {
          _InterlockedIncrement(&dword_1C0051754);
          v57 = (_QWORD *)WdLogNewEntry5_WdLowResource(v56);
          v57[3] = v71;
          v57[4] = *((_QWORD *)v11 + 1);
          v57[5] = *(_QWORD *)this;
          v57[6] = v9;
          WdLogEvent5_WdLowResource(v57);
          return (unsigned int)v9;
        }
        v9 = v74;
        v15 = v72;
      }
      if ( v14 >= a2 )
      {
        if ( v15 > (struct VIDMM_MDL_RANGE *)a3 )
        {
          v29 = VIDMM_MDL_RANGE::LockUnlock(NextRange, (char *)v9 + (_QWORD)a3 - *((_QWORD *)v11 + 1), a3, NextRange[2]);
          v9 = (void *)v29;
          if ( v29 >= 0 )
          {
            while ( v11 != (struct VIDMM_MDL_RANGE *)NextRange )
            {
              VIDMM_MDL_RANGE::Unlock(v11);
              v11 = VIDMM_MDL_RANGE::GetNextRange(v11);
              v32 = (_QWORD *)(v31 + 24);
              v33 = *(_QWORD *)(v31 + 24);
              if ( *(_QWORD **)(v33 + 8) != v32 )
                goto LABEL_62;
              v34 = (_QWORD *)v32[1];
              if ( (_QWORD *)*v34 != v32 )
                goto LABEL_62;
              *v34 = v33;
              *(_QWORD *)(v33 + 8) = v34;
              *v32 = 0LL;
              v30[4] = 0LL;
              operator delete(v30);
            }
            goto LABEL_26;
          }
          goto LABEL_67;
        }
      }
      else if ( v15 <= (struct VIDMM_MDL_RANGE *)a3 )
      {
        v25 = VIDMM_MDL_RANGE::LockUnlock((PMDL *)v11, v9, *((struct _MDL **)v11 + 1), a2);
        v9 = (void *)v25;
        if ( v25 >= 0 )
        {
          if ( v11 != (struct VIDMM_MDL_RANGE *)NextRange )
          {
            v49 = 0;
            v50 = VIDMM_MDL_RANGE::GetNextRange(v11);
            while ( 1 )
            {
              VIDMM_MDL_RANGE::Unlock(v50);
              v51 = v50;
              if ( v50 == (VIDMM_MDL_RANGE *)NextRange )
                v49 = 1;
              else
                v50 = VIDMM_MDL_RANGE::GetNextRange(v50);
              v52 = (_QWORD *)((char *)v51 + 24);
              v53 = *((_QWORD *)v51 + 3);
              if ( *(VIDMM_MDL_RANGE **)(v53 + 8) != (VIDMM_MDL_RANGE *)((char *)v51 + 24) )
                break;
              v54 = (_QWORD *)*((_QWORD *)v51 + 4);
              if ( (_QWORD *)*v54 != v52 )
                break;
              *v54 = v53;
              *(_QWORD *)(v53 + 8) = v54;
              *v52 = 0LL;
              *((_QWORD *)v51 + 4) = 0LL;
              operator delete(v51);
              if ( v49 )
                goto LABEL_26;
            }
LABEL_62:
            __fastfail(3u);
          }
          goto LABEL_26;
        }
LABEL_67:
        _InterlockedIncrement(&dword_1C0051724);
        v58 = WdLogNewEntry5_WdLowResource(v26);
        *(_QWORD *)(v58 + 24) = v9;
        WdLogEvent5_WdLowResource(v58);
        goto LABEL_26;
      }
      v35 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v36 = v35;
      if ( v35 )
      {
        *((_QWORD *)v35 + 1) = *((_QWORD *)v11 + 1);
        *((_QWORD *)v35 + 2) = a2;
        *((_QWORD *)v35 + 5) = this;
        *(_QWORD *)v35 = 0LL;
        *((_QWORD *)v35 + 3) = 0LL;
        *((_QWORD *)v35 + 4) = 0LL;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v36 )
      {
        v37 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
        v39 = v37;
        if ( v37 )
        {
          *((_QWORD *)v37 + 2) = NextRange[2];
          *((_QWORD *)v37 + 5) = this;
          *(_QWORD *)v37 = 0LL;
          *((_QWORD *)v37 + 1) = a3;
          *((_QWORD *)v37 + 3) = 0LL;
          *((_QWORD *)v37 + 4) = 0LL;
        }
        else
        {
          v39 = 0LL;
        }
        if ( v39 )
        {
          if ( VIDMM_MDL_RANGE::Lock(v36, v9, v38, 0LL, 0LL) < 0 )
          {
            _InterlockedIncrement(&dword_1C0051724);
            v62 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v62 + 24) = 6524LL;
            WdLogEvent5_WdLowResource(v62);
          }
          else
          {
            LODWORD(v9) = VIDMM_MDL_RANGE::Lock(v39, (char *)v9 + (_QWORD)a3 - *((_QWORD *)v11 + 1), v40, 0LL, 0LL);
            if ( (int)v9 >= 0 )
            {
              v42 = *((_QWORD *)v11 + 4);
              v43 = (struct VIDMM_MDL_RANGE *)(v42 - 24);
              if ( v42 == *((_QWORD *)v11 + 5) + 8LL )
                v43 = 0LL;
              v72 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
              LOBYTE(v74) = v44;
              do
              {
                VIDMM_MDL_RANGE::Unlock(v11);
                v45 = v11;
                if ( v11 == (struct VIDMM_MDL_RANGE *)NextRange )
                  LOBYTE(v74) = 1;
                else
                  v11 = VIDMM_MDL_RANGE::GetNextRange(v11);
                v46 = (_QWORD *)((char *)v45 + 24);
                v47 = *((_QWORD *)v45 + 3);
                if ( *(struct VIDMM_MDL_RANGE **)(v47 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v45 + 24) )
                  goto LABEL_62;
                v48 = (_QWORD *)*((_QWORD *)v45 + 4);
                if ( (_QWORD *)*v48 != v46 )
                  goto LABEL_62;
                *v48 = v47;
                *(_QWORD *)(v47 + 8) = v48;
                *v46 = 0LL;
                *((_QWORD *)v45 + 4) = 0LL;
                operator delete(v45);
              }
              while ( !(_BYTE)v74 );
              VIDMM_MDL_RANGE::InsertBetween(v36, v43, v39);
              VIDMM_MDL_RANGE::InsertBetween(v39, v36, v72);
              goto LABEL_26;
            }
            _InterlockedIncrement(&dword_1C0051724);
            v63 = WdLogNewEntry5_WdLowResource(v41);
            *(_QWORD *)(v63 + 24) = 6544LL;
            WdLogEvent5_WdLowResource(v63);
            VIDMM_MDL_RANGE::Unlock(v36);
          }
          operator delete(v36);
          v61 = v39;
        }
        else
        {
          _InterlockedIncrement(&dword_1C0051724);
          v60 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v60 + 24) = 6506LL;
          WdLogEvent5_WdLowResource(v60);
          v61 = v36;
        }
        operator delete(v61);
        LODWORD(v9) = -1073741801;
      }
      else
      {
        _InterlockedIncrement(&dword_1C0051724);
        v59 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v59 + 24) = 6496LL;
        WdLogEvent5_WdLowResource(v59);
        LODWORD(v9) = -1073741801;
      }
LABEL_26:
      v27 = *(unsigned int **)(*(_QWORD *)this + 32LL);
      v28 = *v27;
      if ( (unsigned int)(v28 - 3) <= 3 && (unsigned int)(v28 - 5) > 1 )
      {
        if ( v69[0] )
          CurrentProcess = 0LL;
        else
          CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess(v27, v28, this);
        SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0);
        if ( v71 <= SmallAllocationSize )
        {
          if ( v66 )
            MmUnmapViewOfSection(v66, MappedBase);
          else
            MmUnmapViewInSystemSpace(MappedBase);
        }
        else
        {
          VidMmUnmapViewAsync(v66, *(PVOID *)(*(_QWORD *)v67 + 56LL), MappedBase);
        }
      }
      return (unsigned int)v9;
    }
  }
  v68 = WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v5);
  *(_QWORD *)(v68 + 24) = 270LL;
  *(_QWORD *)(v68 + 32) = 52LL;
  *(_QWORD *)(v68 + 40) = 9LL;
  *(_OWORD *)(v68 + 48) = 0LL;
  WdLogEvent5_WdCriticalError(v68);
  return 3221225473LL;
}
