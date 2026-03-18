/*
 * XREFs of ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00EC790
 * Callers:
 *     <none>
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0017D88 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6564 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EB000 (-IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00EEC9C (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeCB(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  int Outside; // edi
  unsigned __int8 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  struct _VIDMM_POOL_BLOCK *v12; // rdx

  Outside = 0;
  if ( VIDMM_SEGMENT::IsMovableResourceCB(a2) )
  {
    Outside = VIDMM_LINEAR_POOL::AllocateOutside(
                this[19],
                *((_QWORD *)a2 + 2),
                *((_DWORD *)a2 + 8),
                v8,
                *a4,
                a4[1],
                1,
                0,
                a2,
                (union _LARGE_INTEGER *)a2 + 24,
                (void **)a2 + 23);
    if ( Outside >= 0
      || (v11 = VIDMM_LINEAR_POOL::AllocateOutside(
                  this[19],
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 8),
                  v10,
                  *a4,
                  a4[1],
                  0,
                  1,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 24,
                  (void **)a2 + 23),
          Outside = v11,
          v11 >= 0) )
    {
      v12 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 25) = this;
      VIDMM_LINEAR_POOL::Free(this[19], v12, v9, v10);
      *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
      *((_BYTE *)this + 472) = 1;
      if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2 + 66)) )
        VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this[1]);
    }
    else
    {
      WdLogSingleEntry1(3LL, v11);
    }
  }
  return (unsigned int)Outside;
}
