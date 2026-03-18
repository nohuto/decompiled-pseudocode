/*
 * XREFs of ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00EE454
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00EDDA8 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00A208C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::BucketizeBudgetStateProcesses(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  char *v3; // rdi
  char *i; // rbx
  __int64 v8; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 *v10; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v11; // r9
  __int64 v12; // r8
  __int64 **v13; // rax

  v3 = (char *)this + 41088;
  for ( i = (char *)*((_QWORD *)this + 5136); i != v3; i = *(char **)i )
  {
    v8 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)(v8 + 32) && (VIDMM_PROCESS *)v8 != g_pVidMmSystemProcess )
    {
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, a3, *(struct VIDMM_PARTITION **)(v8 + 288));
      v10 = (__int64 *)(i + 384);
      v11 = SegmentGroupState;
      v12 = (__int64)SegmentGroupState + 16 * *((int *)i + 94) + 136;
      v13 = *(__int64 ***)(v12 + 8);
      if ( *v13 != (__int64 *)v12 )
        __fastfail(3u);
      *((_QWORD *)i + 49) = v13;
      *v10 = v12;
      *v13 = v10;
      *(_QWORD *)(v12 + 8) = v10;
      *((_DWORD *)v11 + *((int *)i + 94) + 79) += dword_1C005E8C8[*((int *)i + 92)];
    }
  }
}
