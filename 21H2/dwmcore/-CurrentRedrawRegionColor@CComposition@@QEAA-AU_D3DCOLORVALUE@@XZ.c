/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18019316C
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801B0228 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct CComposition *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int128 v5; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  v2 = g_pComposition;
  v3 = *((_QWORD *)g_pComposition + 62);
  if ( v3 == *((_QWORD *)g_pComposition + 152) )
  {
    v4 = *((unsigned int *)g_pComposition + 302);
  }
  else
  {
    *((_QWORD *)g_pComposition + 152) = v3;
    v4 = ((unsigned __int8)*((_DWORD *)v2 + 302) + 1) & 3;
    *((_DWORD *)v2 + 302) = v4;
  }
  v5 = *(_OWORD *)((char *)v2 + 16 * v4 + 1144);
  result = retstr;
  *(_OWORD *)&retstr->r = v5;
  return result;
}
