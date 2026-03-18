/*
 * XREFs of ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00B1FC0
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0072DE0 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0075270 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085A68 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00BB1A4 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall LockParavirtualizedAllocationOnHost(__int64 **a1, void **a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  VIDMM_PROCESS *v8; // rbp
  struct _MDL *FullMDL; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax

  v4 = **a1;
  v5 = *(_QWORD *)(v4 + 128);
  if ( !v5 || (*(_DWORD *)(v5 + 80) & 0x1001) != 0 )
  {
    if ( *(_QWORD *)(v4 + 520)
      || ((v8 = (VIDMM_PROCESS *)a1[1][1], (FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)**a1, 0LL)) == 0LL)
        ? (v13 = -1073741823)
        : (v13 = VIDMM_PROCESS::MapHostAddressesToGuest(
                   v8,
                   FullMDL,
                   *(_QWORD *)(v4 + 8),
                   (void **)(v4 + 520),
                   (unsigned __int64 *)(v4 + 528))),
          v13 >= 0) )
    {
      *a2 = *(void **)(v4 + 528);
      return 0LL;
    }
    else
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdAssertion(v14);
      return (unsigned int)v13;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = v4;
    WdLogEvent5_WdAssertion(v6);
    return 3221225473LL;
  }
}
