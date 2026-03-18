/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C00778FC
 * Callers:
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0077864 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0064AD4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        VIDMM_PROCESS_BUDGET_STATE *this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4,
        struct VIDMM_GLOBAL *a5,
        unsigned int a6)
{
  unsigned __int64 *v6; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // esi
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]
  char *v20; // [rsp+78h] [rbp+10h]

  *a2 = 0LL;
  v6 = (unsigned __int64 *)&v18;
  v7 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  v8 = 0LL;
  v9 = -(32 * (a4 ^ 1LL) + 72);
  v20 = (char *)this + 32 * (a4 ^ 1LL) + 72;
  v10 = v20 - (char *)&v18;
  do
  {
    if ( a3 )
      v14 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          a5,
                          a6,
                          v7,
                          *(struct VIDMM_PARTITION **)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 288LL))
            + 3);
    else
      v14 = *(unsigned __int64 *)((char *)v6 + v10 + v9 + 24);
    v15 = *(unsigned __int64 *)((char *)v6 + v10);
    *v6 = v14;
    if ( v15 > v14 )
    {
      v17 = v15 - v14;
      if ( v8 <= v17 )
        v8 = v17;
      *a2 = v8;
    }
    else
    {
      v8 = *a2;
      *v6 = v14 - v15;
    }
    ++v7;
    ++v6;
  }
  while ( v7 < 2 );
  if ( !v8 )
  {
    v16 = *((_QWORD *)v20 + 2);
    if ( v16 > v19 + v18 )
      *a2 = v16 - (v19 + v18);
  }
}
