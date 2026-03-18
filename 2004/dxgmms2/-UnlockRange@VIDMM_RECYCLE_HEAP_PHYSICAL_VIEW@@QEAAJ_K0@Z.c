/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00782EC
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C0078150 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012C04 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0060E30 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0077DF4 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C007871C (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0078AC4 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0078B08 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C00876E0 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C3C94 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  void *v3; // r11
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v7; // r8
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // r9
  void *v9; // rdi
  int v10; // eax
  unsigned __int64 *v11; // rbx
  bool v12; // zf
  unsigned __int64 *NextRange; // r13
  struct VIDMM_MDL_RANGE *i; // rsi
  struct VIDMM_MDL_RANGE *v15; // rcx
  char v16; // si
  unsigned __int64 *v17; // r8
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // rdx
  __int64 v22; // r8
  int *v23; // rax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  int v28; // eax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  VIDMM_MDL_RANGE *v34; // rax
  VIDMM_MDL_RANGE *v35; // rsi
  VIDMM_MDL_RANGE *v36; // rax
  enum _LOCK_OPERATION v37; // r8d
  VIDMM_MDL_RANGE *v38; // r14
  enum _LOCK_OPERATION v39; // r8d
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  struct VIDMM_MDL_RANGE *v42; // r12
  char v43; // r8
  unsigned __int64 *v44; // r10
  _QWORD *v45; // rax
  unsigned __int64 v46; // r9
  unsigned __int64 *v47; // r8
  char v48; // si
  VIDMM_MDL_RANGE *v49; // rbx
  VIDMM_MDL_RANGE *v50; // r8
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  VIDMM_MDL_RANGE *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  void *v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  unsigned __int8 v68[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v70; // [rsp+50h] [rbp-10h]
  struct VIDMM_MDL_RANGE *v71; // [rsp+58h] [rbp-8h]
  void *v73; // [rsp+A8h] [rbp+48h] BYREF

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
      v11 = (unsigned __int64 *)((char *)v7 - 24);
      if ( *((_QWORD *)v7 - 1) > a2 )
        v10 = *((_QWORD *)v7 - 2) >= a3;
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
      NextRange = v11;
      for ( i = (struct VIDMM_MDL_RANGE *)v11[1];
            NextRange[2] < a3;
            NextRange = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange) )
      {
        ;
      }
      v15 = (struct VIDMM_MDL_RANGE *)NextRange[2];
      v71 = v15;
      if ( (unsigned __int64)i >= a2 && (unsigned __int64)v15 <= a3 )
      {
        v16 = (char)v3;
        while ( 1 )
        {
          VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v11);
          v17 = v11;
          if ( v11 == NextRange )
            v16 = 1;
          else
            v11 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v11);
          v18 = v17 + 3;
          v19 = v17[3];
          if ( *(unsigned __int64 **)(v19 + 8) != v17 + 3 )
            break;
          v20 = (unsigned __int64 *)v17[4];
          if ( (_QWORD *)*v20 != v18 )
            break;
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          *v18 = 0LL;
          v17[4] = 0LL;
          operator delete(v17);
          if ( v16 )
            return (unsigned int)v9;
        }
        goto LABEL_62;
      }
      v22 = *(_QWORD *)v8;
      v73 = v3;
      MappedBase = v3;
      v68[0] = (unsigned __int8)v3;
      v23 = *(int **)(v22 + 32);
      v70 = v15 - i;
      v24 = *v23;
      if ( (unsigned int)(*v23 - 3) > 3 || (unsigned int)(v24 - 5) <= 1 )
      {
        v9 = i;
        v73 = i;
      }
      else
      {
        v54 = VidMmRecycleHeapMapSection(
                *(PVOID *)(v22 + 56),
                (unsigned __int64)i,
                v15 - i,
                v24 == 4,
                &v73,
                &MappedBase,
                (unsigned __int8)v3,
                v68);
        v9 = (void *)v54;
        if ( v54 < 0 )
        {
          _InterlockedIncrement(&dword_1C0051774);
          v56 = (_QWORD *)WdLogNewEntry5_WdLowResource(v55);
          v56[3] = v70;
          v56[4] = v11[1];
          v56[5] = *(_QWORD *)this;
          v56[6] = v9;
          WdLogEvent5_WdLowResource(v56);
          return (unsigned int)v9;
        }
        v9 = v73;
        v15 = v71;
      }
      if ( (unsigned __int64)i >= a2 )
      {
        if ( (unsigned __int64)v15 > a3 )
        {
          v28 = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)NextRange, (char *)v9 + a3 - v11[1], a3, NextRange[2]);
          v9 = (void *)v28;
          if ( v28 >= 0 )
          {
            while ( v11 != NextRange )
            {
              VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v11);
              v11 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v11);
              v31 = (_QWORD *)(v30 + 24);
              v32 = *(_QWORD *)(v30 + 24);
              if ( *(_QWORD **)(v32 + 8) != v31 )
                goto LABEL_62;
              v33 = (_QWORD *)v31[1];
              if ( (_QWORD *)*v33 != v31 )
                goto LABEL_62;
              *v33 = v32;
              *(_QWORD *)(v32 + 8) = v33;
              *v31 = 0LL;
              v29[4] = 0LL;
              operator delete(v29);
            }
            goto LABEL_26;
          }
          goto LABEL_67;
        }
      }
      else if ( (unsigned __int64)v15 <= a3 )
      {
        v25 = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v11, v9, v11[1], a2);
        v9 = (void *)v25;
        if ( v25 >= 0 )
        {
          if ( v11 != NextRange )
          {
            v48 = 0;
            v49 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v11);
            while ( 1 )
            {
              VIDMM_MDL_RANGE::Unlock(v49);
              v50 = v49;
              if ( v49 == (VIDMM_MDL_RANGE *)NextRange )
                v48 = 1;
              else
                v49 = VIDMM_MDL_RANGE::GetNextRange(v49);
              v51 = (_QWORD *)((char *)v50 + 24);
              v52 = *((_QWORD *)v50 + 3);
              if ( *(VIDMM_MDL_RANGE **)(v52 + 8) != (VIDMM_MDL_RANGE *)((char *)v50 + 24) )
                break;
              v53 = (_QWORD *)*((_QWORD *)v50 + 4);
              if ( (_QWORD *)*v53 != v51 )
                break;
              *v53 = v52;
              *(_QWORD *)(v52 + 8) = v53;
              *v51 = 0LL;
              *((_QWORD *)v50 + 4) = 0LL;
              operator delete(v50);
              if ( v48 )
                goto LABEL_26;
            }
LABEL_62:
            __fastfail(3u);
          }
          goto LABEL_26;
        }
LABEL_67:
        _InterlockedIncrement(&dword_1C0051744);
        v57 = WdLogNewEntry5_WdLowResource(v26);
        *(_QWORD *)(v57 + 24) = v9;
        WdLogEvent5_WdLowResource(v57);
        goto LABEL_26;
      }
      v34 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v35 = v34;
      if ( v34 )
      {
        *((_QWORD *)v34 + 1) = v11[1];
        *((_QWORD *)v34 + 2) = a2;
        *((_QWORD *)v34 + 5) = this;
        *(_QWORD *)v34 = 0LL;
        *((_QWORD *)v34 + 3) = 0LL;
        *((_QWORD *)v34 + 4) = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      if ( v35 )
      {
        v36 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
        v38 = v36;
        if ( v36 )
        {
          *((_QWORD *)v36 + 2) = NextRange[2];
          *((_QWORD *)v36 + 5) = this;
          *(_QWORD *)v36 = 0LL;
          *((_QWORD *)v36 + 1) = a3;
          *((_QWORD *)v36 + 3) = 0LL;
          *((_QWORD *)v36 + 4) = 0LL;
        }
        else
        {
          v38 = 0LL;
        }
        if ( v38 )
        {
          if ( VIDMM_MDL_RANGE::Lock(v35, v9, v37, 0LL, 0LL) < 0 )
          {
            _InterlockedIncrement(&dword_1C0051744);
            v61 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v61 + 24) = 6524LL;
            WdLogEvent5_WdLowResource(v61);
          }
          else
          {
            LODWORD(v9) = VIDMM_MDL_RANGE::Lock(v38, (char *)v9 + a3 - v11[1], v39, 0LL, 0LL);
            if ( (int)v9 >= 0 )
            {
              v41 = v11[4];
              v42 = (struct VIDMM_MDL_RANGE *)(v41 - 24);
              if ( v41 == v11[5] + 8 )
                v42 = 0LL;
              v71 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
              LOBYTE(v73) = v43;
              do
              {
                VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v11);
                v44 = v11;
                if ( v11 == NextRange )
                  LOBYTE(v73) = 1;
                else
                  v11 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v11);
                v45 = v44 + 3;
                v46 = v44[3];
                if ( *(unsigned __int64 **)(v46 + 8) != v44 + 3 )
                  goto LABEL_62;
                v47 = (unsigned __int64 *)v44[4];
                if ( (_QWORD *)*v47 != v45 )
                  goto LABEL_62;
                *v47 = v46;
                *(_QWORD *)(v46 + 8) = v47;
                *v45 = 0LL;
                v44[4] = 0LL;
                operator delete(v44);
              }
              while ( !(_BYTE)v73 );
              VIDMM_MDL_RANGE::InsertBetween(v35, v42, v38);
              VIDMM_MDL_RANGE::InsertBetween(v38, v35, v71);
              goto LABEL_26;
            }
            _InterlockedIncrement(&dword_1C0051744);
            v62 = WdLogNewEntry5_WdLowResource(v40);
            *(_QWORD *)(v62 + 24) = 6544LL;
            WdLogEvent5_WdLowResource(v62);
            VIDMM_MDL_RANGE::Unlock(v35);
          }
          operator delete(v35);
          v60 = v38;
        }
        else
        {
          _InterlockedIncrement(&dword_1C0051744);
          v59 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v59 + 24) = 6506LL;
          WdLogEvent5_WdLowResource(v59);
          v60 = v35;
        }
        operator delete(v60);
        LODWORD(v9) = -1073741801;
      }
      else
      {
        _InterlockedIncrement(&dword_1C0051744);
        v58 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v58 + 24) = 6496LL;
        WdLogEvent5_WdLowResource(v58);
        LODWORD(v9) = -1073741801;
      }
LABEL_26:
      v27 = *(_DWORD **)(*(_QWORD *)this + 32LL);
      if ( (unsigned int)(*v27 - 3) <= 3 && (unsigned int)(*v27 - 5) > 1 )
      {
        if ( v68[0] )
          CurrentProcess = 0LL;
        else
          CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess(v27);
        SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0);
        if ( v70 <= SmallAllocationSize )
        {
          if ( v65 )
            MmUnmapViewOfSection(v65, MappedBase);
          else
            MmUnmapViewInSystemSpace(MappedBase);
        }
        else
        {
          VidMmUnmapViewAsync(v65, *(PVOID *)(*(_QWORD *)v66 + 56LL), MappedBase);
        }
      }
      return (unsigned int)v9;
    }
  }
  v67 = WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v5);
  *(_QWORD *)(v67 + 24) = 270LL;
  *(_QWORD *)(v67 + 32) = 52LL;
  *(_QWORD *)(v67 + 40) = 9LL;
  *(_OWORD *)(v67 + 48) = 0LL;
  WdLogEvent5_WdCriticalError(v67);
  return 3221225473LL;
}
