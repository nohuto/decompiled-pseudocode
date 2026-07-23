/*
 * XREFs of EtwpCoverageSamplerCleanup @ 0x140946364
 * Callers:
 *     EtwpCoverageSamplerDelete @ 0x1409464F0 (EtwpCoverageSamplerDelete.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     EtwpCovSampContextCleanup @ 0x140943244 (EtwpCovSampContextCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140946508 (EtwpCoverageSamplerFreeTable.c)
 */

void __fastcall EtwpCoverageSamplerCleanup(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  struct _DMA_ADAPTER *v6; // rcx

  EtwpCovSampContextCleanup(a1 + 16);
  v2 = (_QWORD **)(a1 + 1168);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    if ( v3 == *(_QWORD **)(a1 + 1152) )
      *(_QWORD *)(a1 + 1152) = 0LL;
    EtwpCoverageSamplerFreeTable(v3);
  }
  *(_DWORD *)(a1 + 1184) = 0;
  v5 = *(void **)(a1 + 1192);
  if ( v5 )
  {
    MmUnmapViewInSystemSpace(v5);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_DWORD *)(a1 + 1204) = 0;
    *(_DWORD *)(a1 + 1200) = 0;
    *(_DWORD *)(a1 + 1208) = 0;
  }
  v6 = *(struct _DMA_ADAPTER **)(a1 + 1160);
  if ( v6 )
  {
    HalPutDmaAdapter(v6);
    *(_QWORD *)(a1 + 1160) = 0LL;
  }
}
