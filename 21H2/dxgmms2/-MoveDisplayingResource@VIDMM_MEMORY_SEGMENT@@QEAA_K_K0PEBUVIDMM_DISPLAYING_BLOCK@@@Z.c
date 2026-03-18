/*
 * XREFs of ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00E8E3C
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00E8C60 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA104 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DB810 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00E9AD8 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00EF1A0 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00EF3D8 (-FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATI.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(
        struct VIDMM_GLOBAL **this,
        __int64 a2,
        __int64 a3,
        const struct VIDMM_DISPLAYING_BLOCK *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v9; // r14
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rcx
  VIDMM_LINEAR_POOL *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  int v19; // r15d
  unsigned __int64 v21; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v23[5]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp+Fh]
  __int64 v25; // [rsp+90h] [rbp+17h]
  char v26; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+6Fh]
  char v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v27 = a2;
  v4 = *(_QWORD *)a4;
  v6 = *((_QWORD *)a4 + 1);
  v28 = 0;
  v9 = *(_QWORD *)(v4 + 16) + v6;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 496, 0LL);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 296));
  VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v10, (struct _VIDMM_GLOBAL_ALLOC *)v4);
  if ( !*((_BYTE *)a4 + 24) && (*((_DWORD *)this[1] + 1764) & 0x40000) == 0 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2));
    VidMmiMoveAndFlipDisplayingAllocation(
      this[1],
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      *((_QWORD *)a4 + 1),
      *((_QWORD *)a4 + 2));
LABEL_13:
    **(_QWORD **)(v4 + 136) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(v4 + 128) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(*(_QWORD *)(v4 + 528) + 32LL) = (char *)this[3] + *((_QWORD *)a4 + 2);
    v9 = *((_QWORD *)a4 + 2) + *(_QWORD *)(v4 + 16);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (VIDMM_SEGMENT **)v4);
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v4 + 16);
  v23[0] = v27;
  v23[3] = *(unsigned int *)(v4 + 32);
  v23[4] = VidMmiIsSaveableResource;
  v24 = *((_QWORD *)a4 + 2);
  v25 = v11 + v24;
  v26 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23[2] = v11;
  v12 = this[19];
  v23[1] = a3;
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              v12,
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v23,
              1,
              &v21,
              &v22) >= 0 )
  {
    v18 = v21;
    v19 = v22;
LABEL_11:
    WdLogSingleEntry3(4LL, *((_QWORD *)a4 + 1), v18, *((_QWORD *)a4 + 2));
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, *((_QWORD *)a4 + 1), v18);
    VidMmiMoveAndFlipDisplayingAllocation(this[1], (struct _VIDMM_GLOBAL_ALLOC *)v4, v18, *((_QWORD *)a4 + 2));
    if ( v26 )
      VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        (unsigned int)this[19],
        v18,
        v19,
        0,
        (__int64)VIDMM_SEGMENT::RestoreResourceCB,
        (__int64)this,
        0LL,
        (__int64)&v26,
        (__int64)&v28);
    goto LABEL_13;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  if ( (int)VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
              this[19],
              (const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *)v23,
              0,
              &v21,
              &v22) >= 0 )
  {
    v18 = v21;
    v19 = v22;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      (unsigned int)this[19],
      v21,
      v22,
      0,
      (__int64)VIDMM_SEGMENT::SaveResourceCB,
      (__int64)this,
      0LL,
      (__int64)&v26,
      (__int64)&v28);
    v26 = 1;
    goto LABEL_11;
  }
  _InterlockedIncrement(&dword_1C006E878);
  WdLogSingleEntry1(6LL, 2981LL);
  DxgkLogInternalTriageEvent(v17, 262145LL);
LABEL_14:
  ExReleasePushLockExclusiveEx(v4 + 496, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v4 + 296));
  return v9;
}
