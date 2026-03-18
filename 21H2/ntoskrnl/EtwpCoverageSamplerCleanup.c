/*
 * XREFs of EtwpCoverageSamplerCleanup @ 0x1409F26E8
 * Callers:
 *     EtwpCoverageSamplerDelete @ 0x1409F2880 (EtwpCoverageSamplerDelete.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwpCovSampContextCleanup @ 0x1409EF744 (EtwpCovSampContextCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1409F2898 (EtwpCoverageSamplerFreeTable.c)
 */

void __fastcall EtwpCoverageSamplerCleanup(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  ULONG_PTR v5; // rcx
  void *v6; // rcx

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
  v5 = *(_QWORD *)(a1 + 1192);
  if ( v5 )
  {
    MiRemoveFromSystemSpace(v5, 1);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_DWORD *)(a1 + 1204) = 0;
    *(_DWORD *)(a1 + 1200) = 0;
    *(_DWORD *)(a1 + 1208) = 0;
  }
  v6 = *(void **)(a1 + 1160);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(a1 + 1160) = 0LL;
  }
}
