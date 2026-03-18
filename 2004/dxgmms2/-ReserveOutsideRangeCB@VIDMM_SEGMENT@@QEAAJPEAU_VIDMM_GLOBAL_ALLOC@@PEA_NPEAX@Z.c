/*
 * XREFs of ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00CA030
 * Callers:
 *     <none>
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0013E08 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C005E504 (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0086180 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B0598 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8830 (-IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeCB(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int Outside; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _VIDMM_POOL_BLOCK *v15; // rdx

  LODWORD(v7) = 0;
  if ( VIDMM_SEGMENT::IsMovableResourceCB(a2) )
  {
    LODWORD(v7) = VIDMM_LINEAR_POOL::AllocateOutside(
                    this[19],
                    *((_QWORD *)a2 + 2),
                    *((_DWORD *)a2 + 8),
                    v8,
                    *a4,
                    a4[1],
                    1,
                    0,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 26,
                    (void **)a2 + 25);
    if ( (int)v7 >= 0
      || (Outside = VIDMM_LINEAR_POOL::AllocateOutside(
                      this[19],
                      *((_QWORD *)a2 + 2),
                      *((_DWORD *)a2 + 8),
                      v10,
                      *a4,
                      a4[1],
                      0,
                      1,
                      a2,
                      (union _LARGE_INTEGER *)a2 + 26,
                      (void **)a2 + 25),
          v7 = Outside,
          Outside >= 0) )
    {
      v15 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 27) = this;
      VIDMM_LINEAR_POOL::Free(this[19], v15, v9);
      *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 25);
      *((_BYTE *)this + 472) = 1;
      if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2 + 62)) )
        VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this[1]);
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v13, v12);
      *(_QWORD *)(v14 + 24) = v7;
      WdLogEvent5_WdWarning(v14);
    }
  }
  return (unsigned int)v7;
}
