/*
 * XREFs of ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C0085730
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C00854BC (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089800 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z @ 0x1C0001068 (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0070AAC (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v10; // rsi
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // dl
  int v16; // ecx
  bool v17; // dl
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v10 = *((_QWORD *)a1 + 5027) + 1584LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  v12 = -1071775488;
  if ( *(_DWORD *)(v10 + 24) )
  {
    do
    {
      v13 = v6 + *(_DWORD *)(v10 + 20);
      if ( a6 != -1
        && (_DWORD)v13 != (unsigned int)VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(
                                          a1,
                                          *(_DWORD *)(a2 + 76) & 0x3F,
                                          a5) )
      {
        goto LABEL_4;
      }
      v12 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource((__int64)a1, a2, v13, a3, a4);
      if ( v12 < 0 )
        goto LABEL_4;
      v15 = *(_BYTE *)(v10 + 436);
      if ( (v15 & 3) != 0 )
      {
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
        if ( (*(_DWORD *)(v14 + 80) & 1) != 0 )
        {
          if ( (**(_DWORD **)(a2 + 496) & 0x8000) == 0 )
            goto LABEL_23;
          if ( !a4 )
          {
LABEL_8:
            if ( (_DWORD)v13 != *(unsigned __int16 *)(v10 + 28) || (**(_DWORD **)(a2 + 496) & 0x8000) == 0 )
            {
              v17 = ((a3 - 3) & 0xFFFFFFFA) == 0
                 && a3 != 8
                 && ((v16 = **(_DWORD **)(a2 + 496), (v16 & 0x20000000) == 0) || v16 >= 0)
                 && (v16 & 0x80000) == 0;
              v18 = a6;
              LOBYTE(v18) = 1;
              v19 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
              LOBYTE(v23) = v17;
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, __int64))(*(_QWORD *)v19 + 16LL))(
                      v19,
                      a2,
                      v18,
                      0LL,
                      v23,
                      a3,
                      a6);
LABEL_16:
              v12 = v20;
              if ( v20 >= 0 )
                return (unsigned int)v12;
              goto LABEL_34;
            }
            goto LABEL_33;
          }
          if ( (v15 & 4) != 0 )
LABEL_23:
            v13 = *(unsigned __int16 *)(v10 + 28);
        }
      }
      if ( !a4 )
        goto LABEL_8;
      if ( (v15 & 4) != 0 || (_DWORD)v13 != *(unsigned __int16 *)(v10 + 28) )
      {
        v22 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8 * v13);
        v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 80LL))(v22, a2);
        goto LABEL_16;
      }
LABEL_33:
      v12 = -1071775488;
LABEL_34:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
LABEL_4:
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v10 + 24) );
  }
  return (unsigned int)v12;
}
