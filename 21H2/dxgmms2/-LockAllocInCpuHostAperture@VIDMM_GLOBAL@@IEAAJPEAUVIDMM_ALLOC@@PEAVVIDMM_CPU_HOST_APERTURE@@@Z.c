/*
 * XREFs of ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00D7CA0
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0093640 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00D53E0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuHostAperture(VIDMM_GLOBAL *this, __int64 **a2, VIDMM_SEGMENT **a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  PVOID v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v3 = *a2;
  P = 0LL;
  v6 = *v3;
  v7 = VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(this, a2, a3, (struct _MDL **)&P);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = P;
    v10 = VIDMM_GLOBAL::Rotate(
            (__int64)this,
            *(_QWORD *)(v3[1] + 24),
            v3[3],
            1u,
            (__int64)P,
            *(_QWORD *)(v6 + 16),
            0LL,
            0LL,
            0,
            v6);
    v8 = v10;
    if ( v10 >= 0 )
    {
      *((_BYTE *)v3 + 32) |= 1u;
      *(_BYTE *)(v6 + 83) = 1;
      return v8;
    }
    WdLogSingleEntry1(1LL, v10);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    WdLogSingleEntry1(3LL, v7);
  }
  if ( *(_QWORD *)(v6 + 464) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange((VIDMM_CPU_HOST_APERTURE *)a3, (struct _VIDMM_GLOBAL_ALLOC *)v6);
  if ( *(_DWORD *)(v6 + 488) != -1 )
    VIDMM_CPU_HOST_APERTURE::ReleaseRange((VIDMM_CPU_HOST_APERTURE *)a3, (struct _VIDMM_GLOBAL_ALLOC *)v6);
  return v8;
}
