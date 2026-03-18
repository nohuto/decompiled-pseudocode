/*
 * XREFs of ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x18005A654
 * Callers:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18005A5C0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CoordMap@@QEAA@XZ @ 0x18005A684 (--1CoordMap@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 */

void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CNineGridDrawListBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  CoordMap::~CoordMap((CNineGridDrawListBrush *)((char *)this + 112));
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    std::default_delete<CDrawListBrush>::operator()(v2, v3);
}
