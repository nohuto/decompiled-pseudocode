/*
 * XREFs of ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C008557C
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C00854BC (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0070AAC (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // r9d
  int v8; // esi
  bool v9; // r12
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // r14d
  int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // r9
  bool v16; // dl
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v21; // r8d
  int v22; // [rsp+20h] [rbp-58h]
  bool v24; // [rsp+98h] [rbp+20h]

  v5 = a3;
  v8 = -1071775488;
  v9 = ((a3 - 3) & 0xFFFFFFFA) == 0
    && a3 != 8
    && ((v21 = **(_DWORD **)(a2 + 496), (v21 & 0x20000000) == 0) || v21 >= 0)
    && (v21 & 0x80000) == 0;
  if ( !*(_BYTE *)(a1 + 7144) || v9 )
    v10 = 2;
  else
    v10 = 0;
  v11 = *(_QWORD *)(a1 + 40216) + 1584LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  do
  {
    v12 = 0;
    do
    {
      v13 = (*(_DWORD *)(a2 + 72) >> (6 * v12)) & 0x1F;
      v24 = ((*(_DWORD *)(a2 + 72) >> (6 * v12)) & 0x20) == 0;
      if ( *(_DWORD *)(a2 + 368) >= 0xA0000000 )
      {
        v24 = ((*(_DWORD *)(a2 + 72) >> (6 * v12)) & 0x20) == 0;
        if ( *(_QWORD *)(a2 + 16) >= 0x1000000uLL )
          v24 = ((*(_DWORD *)(a2 + 72) >> (6 * v12)) & 0x20) != 0;
      }
      if ( v13 )
      {
        v14 = (unsigned int)(v13 + *(_DWORD *)(v11 + 20) - 1);
        v8 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, v14, v5, 0);
        if ( v8 >= 0 )
        {
          if ( (*(_BYTE *)(v11 + 436) & 3) != 0
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v14) + 80LL) & 1) != 0
            && (**(_DWORD **)(a2 + 496) & 0x8000) == 0 )
          {
            v14 = *(unsigned __int16 *)(v11 + 28);
          }
          v16 = v10 == 1 || v9;
          v17 = a3;
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v14);
          LOBYTE(v17) = v24;
          LOBYTE(v22) = v16;
          LOBYTE(v15) = v10 == 0;
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned int, __int64))(*(_QWORD *)v18 + 16LL))(
                 v18,
                 a2,
                 v17,
                 v15,
                 v22,
                 a3,
                 -1LL);
          if ( v8 >= 0 )
            return (unsigned int)v8;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = v14;
        }
        v5 = a3;
      }
      ++v12;
    }
    while ( v12 <= a5 );
    ++v10;
  }
  while ( v10 <= 2 );
  return (unsigned int)v8;
}
