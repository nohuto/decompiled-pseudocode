/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A3FD4
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1800974A4 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800DB370 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x1801DF380 (--0-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition.c)
 *     ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801ED4A4 (--0CSceneVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x1801F20AC (--0-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A4194 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800C2AA0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 27) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 28) = &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage;
  CTreeData::CTreeData((CVisual *)((char *)this + 320));
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 95) |= 2u;
  CTreeData::Initialize(v3, 0LL, this);
  return this;
}
