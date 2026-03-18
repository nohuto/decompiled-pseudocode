/*
 * XREFs of ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801ED4A4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A3FD4 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CSceneVisual *__fastcall CSceneVisual::CSceneVisual(CSceneVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CSceneVisual::`vftable';
  *((_QWORD *)this + 78) = *((_QWORD *)a2 + 44);
  return this;
}
