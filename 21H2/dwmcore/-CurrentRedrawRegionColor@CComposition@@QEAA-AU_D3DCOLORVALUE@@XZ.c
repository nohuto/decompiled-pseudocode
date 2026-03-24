/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18015586C
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18017531C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct CComposition *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int128 v5; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  v2 = g_pComposition;
  v3 = *((_QWORD *)g_pComposition + 44);
  v4 = *((unsigned int *)g_pComposition + 264);
  if ( v3 != *((_QWORD *)g_pComposition + 133) )
  {
    *((_QWORD *)g_pComposition + 133) = v3;
    v4 = ((_BYTE)v4 + 1) & 3;
    *((_DWORD *)v2 + 264) = v4;
  }
  v5 = *((_OWORD *)v2 + v4 + 62);
  result = retstr;
  *(_OWORD *)&retstr->r = v5;
  return result;
}
