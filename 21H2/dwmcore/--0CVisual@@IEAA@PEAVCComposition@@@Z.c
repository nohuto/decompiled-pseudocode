/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1800648C0 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C6AC0 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x1802024D8 (--0CSceneVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z @ 0x180211A6C (--0CCursorVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x18022CFE8 (--0-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@IEAA@PEAVCComposition.c)
 *     ??0?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z @ 0x180242698 (--0-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004A820 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx
  char v4; // r9

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 28) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 29) = &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 336));
  *((_BYTE *)v3 + 384) = v4;
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 103) |= 2u;
  CTreeData::Initialize(v3, 0LL, this);
  return this;
}
