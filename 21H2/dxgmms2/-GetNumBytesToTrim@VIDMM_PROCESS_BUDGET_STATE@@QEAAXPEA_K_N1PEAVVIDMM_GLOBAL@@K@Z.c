/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C00871F4
 * Callers:
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0086E20 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C00A4780 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00A208C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        VIDMM_PROCESS_BUDGET_STATE *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4,
        struct VIDMM_GLOBAL *a5,
        unsigned int a6)
{
  unsigned __int64 *v6; // rdi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // esi
  char *v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v12; // r15
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  *a2 = 0LL;
  v6 = (unsigned __int64 *)&v19;
  v7 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  v8 = (char *)this + 32 * (a4 ^ 1LL) + 72;
  v9 = 0LL;
  v10 = -(32 * (a4 ^ 1LL) + 72);
  v12 = v8 - (char *)&v19;
  do
  {
    if ( a3 )
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                            a5,
                            a6,
                            v7,
                            *(struct VIDMM_PARTITION **)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 288LL));
      a3 = v21;
      v14 = *((_QWORD *)SegmentGroupState + 3);
    }
    else
    {
      v14 = *(unsigned __int64 *)((char *)v6 + v12 + v10 + 24);
    }
    v15 = *(unsigned __int64 *)((char *)v6 + v12);
    *v6 = v14;
    if ( v15 > v14 )
    {
      v18 = v15 - v14;
      if ( v9 <= v18 )
        v9 = v18;
      *a2 = v9;
    }
    else
    {
      v9 = *a2;
      *v6 = v14 - v15;
    }
    ++v7;
    ++v6;
  }
  while ( v7 < 2 );
  if ( !v9 )
  {
    v16 = *((_QWORD *)v8 + 2);
    if ( v16 > v20 + v19 )
      *a2 = v16 - (v20 + v19);
  }
}
