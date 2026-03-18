/*
 * XREFs of ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0013E08
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00059B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B930 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00136F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x1C002352C (-CheckPrimaryAllocationReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_PRIMARIES_REFERENCES@@_N@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00B1E1C (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00B8CA8 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8830 (-IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C88F0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8920 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00CA050 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00CA1B0 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(_VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // rax

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    v5 = *(_QWORD *)(v1 + 24);
    if ( !*(_BYTE *)(v4 + 28) )
    {
      v6 = *(unsigned __int64 **)(v4 + 64);
      if ( *(_BYTE *)(v4 + 29) )
      {
        if ( *v6 < v5 )
          return 1;
      }
      else if ( *(_DWORD *)v6 - (int)v5 < 0 )
      {
        return 1;
      }
    }
    return 0;
  }
  v2 = *((_QWORD *)this + 2);
  return v2 && *(int *)(v2 + 8) > 0;
}
