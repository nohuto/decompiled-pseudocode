/*
 * XREFs of ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C0047C7C
 * Callers:
 *     DxgkGetCachedHybridQueryValue @ 0x1C015AFA0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C015CF90 (DxgkCacheHybridQueryValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetGpuPreferenceDListState(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax

  v3 = (unsigned int)a2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * (unsigned int)a2);
  if ( v4 )
    return *(unsigned int *)(v4 + 72);
  v6 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
  *(_QWORD *)(v6 + 24) = v3;
  WdLogEvent5_WdWarning(v6);
  return 0LL;
}
