/*
 * XREFs of ?InitializeSegmentPowerManagement@VIDMM_GLOBAL@@QEAAJIIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C00B07D8
 * Callers:
 *     ?VidMmInitializeSegmentPowerManagement@@YAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C0022860 (-VidMmInitializeSegmentPowerManagement@@YAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeSegmentPowerManagement(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        enum _DXGK_POWER_COMPONENT_TYPE a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v5 = a3;
  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 1750) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, this);
    *(_QWORD *)(v8 + 24) = v7;
LABEL_12:
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 5027);
  v10 = 1584LL * (unsigned int)a2;
  if ( (unsigned int)v5 >= *(_DWORD *)(v10 + v9 + 24) || (unsigned int)v5 >= 0x20 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v10, a2, this);
    *(_QWORD *)(v8 + 24) = v5;
    *(_QWORD *)(v8 + 32) = 6976LL;
    goto LABEL_12;
  }
  _mm_lfence();
  v11 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL
                                            * (unsigned int)(v5 + *(_DWORD *)(v10 + *((_QWORD *)this + 5027) + 20)));
  if ( a5 == DXGK_POWER_COMPONENT_MEMORY )
  {
    if ( (*(_DWORD *)(v11 + 80) & 0x1001) == 0 )
      *(_DWORD *)(v11 + 368) = a4;
  }
  else if ( a5 == DXGK_POWER_COMPONENT_MEMORY_REFRESH )
  {
    *(_DWORD *)(*(_QWORD *)(v11 + 8) + 40176LL) = a4;
  }
  return 0LL;
}
