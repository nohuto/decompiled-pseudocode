/*
 * XREFs of ??A?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z @ 0x1C022B334
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E8AD0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](_DWORD *a1, unsigned int a2)
{
  if ( a2 >= a1[10] )
    return *(_QWORD *)a1;
  else
    return *(_QWORD *)a1 + 8LL * a2;
}
