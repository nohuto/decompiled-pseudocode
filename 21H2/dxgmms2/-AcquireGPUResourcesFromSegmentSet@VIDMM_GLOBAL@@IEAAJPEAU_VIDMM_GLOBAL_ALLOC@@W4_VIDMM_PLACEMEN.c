/*
 * XREFs of ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C008369C
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C0086B7C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A856C (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z @ 0x1C0014D7C (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C008699C (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  int v6; // r15d
  __int64 v10; // rsi
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  bool v19; // dl
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v10 = *((_QWORD *)a1 + 5028) + 1584LL * (*(_DWORD *)(a2 + 68) & 0x3F);
  v12 = -1071775488;
  if ( *(_DWORD *)(v10 + 24) )
  {
    while ( 1 )
    {
      v13 = (unsigned int)(v6 + *(_DWORD *)(v10 + 20));
      if ( a6 != -1
        && (_DWORD)v13 != (unsigned int)VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(
                                          a1,
                                          *(_DWORD *)(a2 + 68) & 0x3F,
                                          a5) )
      {
        goto LABEL_13;
      }
      LOBYTE(v25) = a4;
      v12 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v13, a3, v25);
      if ( (v12 & 0x80000000) != 0 )
        goto LABEL_13;
      LOBYTE(v14) = *(_BYTE *)(v10 + 436);
      if ( (v14 & 3) == 0 )
        goto LABEL_5;
      v15 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
      if ( (*(_DWORD *)(v15 + 80) & 1) == 0 )
        goto LABEL_5;
      if ( (**(_DWORD **)(a2 + 528) & 0x8000) == 0 )
        break;
      if ( !a4 )
      {
LABEL_6:
        if ( (_DWORD)v13 != *(unsigned __int16 *)(v10 + 28) || (**(_DWORD **)(a2 + 528) & 0x8000) == 0 )
        {
          v19 = ((a3 - 3) & 0xFFFFFFFA) == 0
             && a3 != 8
             && ((v18 = **(_DWORD **)(a2 + 528), (v18 & 0x20000000) == 0) || v18 >= 0)
             && (v18 & 0x80000) == 0;
          v22 = a6;
          LOBYTE(v22) = 1;
          v23 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
          LOBYTE(v25) = v19;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned int, __int64))(*(_QWORD *)v23 + 16LL))(
                  v23,
                  a2,
                  v22,
                  0LL,
                  v25,
                  a3,
                  a6);
LABEL_19:
          v12 = v21;
          if ( v21 >= 0 )
            return v12;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      if ( (v14 & 4) != 0 )
        break;
LABEL_31:
      if ( (_DWORD)v13 != *(unsigned __int16 *)(v10 + 28) )
      {
LABEL_16:
        v20 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
        v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 80LL))(v20, a2);
        goto LABEL_19;
      }
LABEL_32:
      v12 = -1071775488;
LABEL_33:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v13;
LABEL_13:
      if ( (unsigned int)++v6 >= *(_DWORD *)(v10 + 24) )
        return v12;
    }
    v13 = *(unsigned __int16 *)(v10 + 28);
LABEL_5:
    if ( !a4 )
      goto LABEL_6;
    if ( (v14 & 4) != 0 )
      goto LABEL_16;
    goto LABEL_31;
  }
  return v12;
}
